using System;
using System.Collections;
using System.Net.Sockets;
using System.Runtime.Serialization;
using System.Threading.Tasks;
using Core;
using JetBrains.Annotations;
using UnityEngine;

namespace Client {
    public abstract class TrackingStreamConsumer<T> : MonoBehaviour  where T : new() {

        public delegate void TrackingStreamNotificationEvent(string notificationMessage);

        public static event TrackingStreamNotificationEvent TrackingStreamNotificationOccured;
        
        
        [SerializeField] protected int port = 32123;
        [Header("Endpoint (for localhost -> 127.0.0.1)")]
        [SerializeField] protected string address = "127.0.0.1";

        [Header("Connection")]
        [Space]
        [SerializeField] bool receiving = false;

        [SerializeField] float timeSinceLastUpdate = 0;
        float lastTimeDataReceived = 0;
        [SerializeField] float receiveCutoff = 0.25f;
        [SerializeField] bool showConnectionRefusedError = true;
        
        UdpClient client;
        bool running;
        [SerializeField] float warningDelayTime = 20f;
        ConnectionRefusalWarningSystem connectionRefusalWarningSystem;


        void OnEnable() {
            if( !typeof(T).IsSerializable && !(typeof(ISerializable).IsAssignableFrom(typeof(T)) ) )
                throw new InvalidOperationException("A serializable Type is required");
            
            connectionRefusalWarningSystem = new ConnectionRefusalWarningSystem(warningDelayTime);
            
            Debug.Log(Format.Client("Starting streaming client"));
            client = UdpClient.ConnectTo(address, port);
            running = true;
            
            StartListeningForServerReplies();
            StartSendingUpdateRequests();
        }

        void OnDisable() {
            client.Close();
            running = false;
        }

        void Update() {
            timeSinceLastUpdate = Time.time - lastTimeDataReceived;
            receiving = timeSinceLastUpdate < receiveCutoff;
        }

        void SendDataRequest() {
            try {
                client.Send("DataRequest");
            }
            catch (Exception e) {
                if (e.Message.Contains("refused")) {
                    connectionRefusalWarningSystem.WarnUser(address, port.ToString());
                }
                else {
                    Debug.LogError(Format.Client($"Client Failed sending: {e} "));
                }
            }
        }

        async void StartSendingUpdateRequests() {
            Debug.Log(Format.Client("Client sending requests..."));
            while (running) {
                SendDataRequest();
                await Task.Delay(5);
            }
        }

        async void StartListeningForServerReplies() {
            Debug.Log(Format.Client("Client listening for server replies..."));
            while (running) {
                try {
                    ReceivedStreamData receivedStreamData = await client.Receive();
                    ParseData(receivedStreamData);
                }
                catch (SocketException e) {
                    if (e.Message.Contains("refused")) {
                        connectionRefusalWarningSystem.WarnUser(address, port.ToString());
                    }
                    else {
                        Debug.LogError(Format.Client($"Connection problem: {e}"));
                    }
                }
                catch (ObjectDisposedException) {
                    Debug.Log(Format.Client("Client Stopped Receiving because client down"));
                }
                catch (Exception ex) {
                    Debug.LogError(Format.Client(ex.ToString()));
                }
            }
        }

        void ParseData(ReceivedStreamData receivedStreamData) {
            //Debug.Log($"client parsing response {receivedStreamData.Message}");
            T receivedData = JsonUtility.FromJson<T>(receivedStreamData.Message);
            if (receivedData != null) {
                //Debug.Log($"data: tracking {receivedData.IsTracking} pos: {receivedData.Position}");
                SetData(receivedData);
                lastTimeDataReceived = Time.time;
            }
            
        }

        protected abstract void SetData(T receivedData);

        class ConnectionRefusalWarningSystem {
            readonly float warningDelayTime;
            float lastWarningTime = 0;
            
            bool firstWarning = true;

            public ConnectionRefusalWarningSystem(float warningDelayTime) {
                this.warningDelayTime = warningDelayTime;
            }
            public void WarnUser(string address, string port) {
                if (firstWarning) {
                    firstWarning = false;
                    SendWarning(address, port);
                }
                else if (Time.time - lastWarningTime > warningDelayTime) {
                    lastWarningTime = Time.time;
                    SendWarning(address, port);
                }
            }

            void SendWarning(string address, string port) {
                string message = $"Connection Refused {address}:{port}";
                TrackingStreamNotificationOccured?.Invoke(message);
                Debug.LogError(Format.Client(message));
            }
        }
    }
}