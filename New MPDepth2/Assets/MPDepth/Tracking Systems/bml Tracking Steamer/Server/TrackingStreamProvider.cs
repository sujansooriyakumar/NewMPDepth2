using System;
using System.Net;
using System.Net.Sockets;
using System.Runtime.Serialization;
using System.Threading.Tasks;
using Core;
using UnityEngine;

namespace Server {
    public abstract class TrackingStreamProvider<T> : MonoBehaviour where T: new() {
    
        [SerializeField] protected int port = 32123;

        [SerializeField] protected bool interruptSleep = true;
        
        [SerializeField] protected bool streaming;
        
        [SerializeField] protected bool receivingRequests = false;
        
        [SerializeField] protected float timeSinceLastReceive = 0 ;
        [SerializeField] protected float receiveCutoffTime = 0.25f;
        [SerializeField] protected float rebootTimeCutoff = 5;
        
        bool rebooting;
        float lastReceivedTime;
        UdpServer server;
        
        public string StreamingIP {
            get {
                var host = Dns.GetHostEntry(Dns.GetHostName());
                foreach (var ip in host.AddressList) {
                    if (ip.AddressFamily == AddressFamily.InterNetwork) {
                        return ip.ToString();
                    }
                }

                throw new Exception("No network adapters with an IPv4 address in the system!");
            }
        }

        void Awake() {
            Screen.sleepTimeout = interruptSleep ? SleepTimeout.NeverSleep : SleepTimeout.SystemSetting;
        }

        void Update() {
            if (rebooting) return;
            
            timeSinceLastReceive = Time.time - lastReceivedTime;
            
            receivingRequests = timeSinceLastReceive < receiveCutoffTime;
            
            if (!streaming) ServerStartListeningForRequests();
            else if (timeSinceLastReceive > rebootTimeCutoff) {
                RebootSelf();
            }
        }

        async void RebootSelf() {
            if (rebooting) return;
            Debug.Log(Format.Server($"Rebooting since no responses received for {rebootTimeCutoff} seconds"));
            streaming = false;
            rebooting = true;
            await Task.Delay(100);
            rebooting = false;
        }

        void OnEnable() {
            EnableSelf();
            Debug.Log(Format.Server("Starting streaming server"));
            server = new UdpServer(port);
            ServerStartListeningForRequests(); 
            
            if( !typeof(T).IsSerializable && !(typeof(ISerializable).IsAssignableFrom(typeof(T)) ) )
                throw new InvalidOperationException("A serializable Type is required");

        }

        protected virtual void EnableSelf() { }

        void OnDisable() {
            DisableSelf();
            Debug.Log(Format.Server("Shutting down..."));
            streaming = false;
            server.Close();
        }
        
        protected virtual void DisableSelf() { }

        async void ServerStartListeningForRequests() {
            lastReceivedTime = Time.time;
            Debug.Log(Format.Server("Now listening for requests"));
            streaming = true;
            while (streaming) {
            
                ReceivedStreamData receivedStreamData = new ReceivedStreamData();
            
                try {
                    receivedStreamData = await server.Receive();
                    lastReceivedTime = Time.time;
                }
                catch (ObjectDisposedException) {
                    Debug.Log(Format.Server("Stopped Receiving because I already shut down"));
                }
                catch (Exception e) {
                    Debug.LogError(Format.Server($"Error receiving: {e}"));
                }

                try {
                    T data = GetData();
                    string dataJSON = JsonUtility.ToJson(data);
                    //Debug.Log($"server replying {dataJSON}");
                    server.Reply(dataJSON, receivedStreamData.Sender);
                }
                catch (MissingReferenceException) {
                    Debug.Log(Format.Server("Shutting down due to gameobject already being destroyed."));
                    streaming = false;
                }
                catch (ObjectDisposedException) {
                    Debug.Log(Format.Server("Stopped Receiving because I already shut down"));
                }
                catch (Exception e) {
                    Debug.LogError(Format.Server($"Error replying: {e}"));
                }
            }

            streaming = false;
        }

        protected abstract T GetData();
    }
}

