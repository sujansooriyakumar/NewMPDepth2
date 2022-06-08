using System;
using System.Threading.Tasks;
using MPDepthCore.Calibration.Camera;
using MPDepthCore.Calibration.Screen;
using MPDepthCore.TrackingSources;
using OffAxisCamera;
using OffAxisCamera.ScreenConfiguration;
using UnityEngine;
using UnityEngine.Serialization;

namespace MPDepthCore {
    public class TrackingSystem : MonoBehaviour {

        [Header("Internal References")]
        [SerializeField] public MPDepthTrackingSource trackingSource = default;
        [SerializeField] TrackingCalibrationProvider trackingCalibrationProvider;
        [SerializeField] ScreenCalibrationProvider screenCalibrationProvider;

        [Header("Scene References")]
        [SerializeField] public OffAxisCameraRig offAxisCameraRig;
        [SerializeField] public Camera offAxisCamera;

        public event MPDepthTrackingSource.TrackingDataUpdatedEvent TrackingDataUpdated;
        public TrackingCalibrationProvider TrackingCalibrationProvider => trackingCalibrationProvider;

        public ScreenCalibrationProvider ScreenCalibrationProvider => screenCalibrationProvider;

        Transform calibrationTransform;

        void OnEnable() {
            if (trackingSource == null) return;
            trackingSource.TrackingDataUpdated += TrackingDataWasUpdated;
            //trackingCalibrationProvider.SelectCalibration(0);
            //screenCalibrationProvider.SelectCalibration(0);
            
        }

        void TrackingDataWasUpdated(MPDepthTrackingData data) {
            TrackingDataUpdated?.Invoke(data);
        }

       public Transform GetCalibrationTransform()
        {
            return calibrationTransform;
        }

        public void SetCalibrationTransform(Transform t)
        {
            calibrationTransform = t;
        }
       

        public void TurnOff() {
            trackingSource.TurnOff();
        }

        public void TurnOn() {
            trackingSource.TurnOn();
            
        }
    }
    
}
