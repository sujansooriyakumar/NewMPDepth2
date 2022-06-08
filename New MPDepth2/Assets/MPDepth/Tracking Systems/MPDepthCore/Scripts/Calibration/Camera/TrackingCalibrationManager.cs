
using System;
using MPDepthCore.TrackingSources;

using OffAxisCamera;
using UnityEngine;
using UnityEngine.Serialization;

namespace MPDepthCore.Calibration.Camera {
    
    public class TrackingCalibrationManager : MPDepthTrackingSource {
        
        [SerializeField] MPDepthTrackingSource trackingSource = default;
        [FormerlySerializedAs("calibrationProvider")] [SerializeField] public TrackingCalibrationProvider trackingCalibrationProvider = default;
        

        [SerializeField] public RawTrackingData rawTrackingData = new RawTrackingData();
        [SerializeField] public CalibratedTrackingData calibratedTrackingData = CalibratedTrackingData.Empty();
        
        public override event TrackingDataUpdatedEvent TrackingDataUpdated;
        public override void TurnOff() {
            trackingSource.TurnOff();
        }

        public override void TurnOn() {
            trackingSource.TurnOn();
        }

        void OnEnable() {
            trackingSource.TrackingDataUpdated += RawDataUpdated;
        }

        void OnDisable() {
            trackingSource.TrackingDataUpdated -= RawDataUpdated;
        }

     

        void RawDataUpdated(MPDepthTrackingData data) {
            if (!(data is RawTrackingData rawData)) {
                throw new ArgumentException(
                    $"{nameof(TrackingCalibrationManager)} is being fed non-raw tracking data");
            }
            rawTrackingData = rawData;
            TrackingDataUpdated?.Invoke(rawTrackingData);
        }

        void Update() {
            if (trackingCalibrationProvider == null) {
                Debug.LogError("No calibration provider set", this);
                return;
            }
            
            TrackerOffsetCalibration cameraOffsetCalibration = trackingCalibrationProvider.GetTrackerOffsetCalibration;

            //offsetTransform.localPosition = cameraOffsetCalibration.Position;
            //offsetTransform.localEulerAngles = cameraOffsetCalibration.Eulers;
            
            EnsureThisTransformIsNotEdited();
            
        }
        
        void EnsureThisTransformIsNotEdited() {
            if (this.transform.position != Vector3.zero ||
                this.transform.eulerAngles != Vector3.zero ||
                this.transform.localScale != Vector3.one) {
                Debug.LogError("Calibration has non-identity transform values", this);
            }
        }

        
    }
}