using MPDepthCore.Calibration.Camera;
using MPDepthCore.TrackingSources;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace StreamTrackingSystem
{
   // [RequireComponent(typeof(StreamTrackingDataReciever))]
    public class StreamReceiverToTrackingSource : MPDepthTrackingSource
    {
        StreamTrackingDataReceiver trackingStream;
        [SerializeField] RawTrackingData rawTrackingData = new RawTrackingData();

        private void OnEnable()
        {
            trackingStream = GetComponent<StreamTrackingDataReceiver>();
            rawTrackingData.BlendshapeTrackingData.Blendshapes = new float[50];
        }

        private void Update()
        {
            rawTrackingData = trackingStream.ReceivedData;
            TrackingDataUpdated?.Invoke(rawTrackingData);
        }

        public override void TurnOff()
        {
            this.gameObject.SetActive(false);
        }

        public override void TurnOn()
        {
            this.gameObject.SetActive(true);
        }

        public override event TrackingDataUpdatedEvent TrackingDataUpdated;

    }
}
