using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using MPDepthCore;
using MPDepthCore.Calibration.Camera;
using MPDepthCore.TrackingSources;
using OffAxisCamera;
using StreamTrackingSystem;
using UnityEngine;

namespace StreamTrackingSystem {
    public class StreamTrackingCalibrator : MonoBehaviour
    {
        [SerializeField] MPDepthTrackingSource trackingSource = default;
        [SerializeField] GameObject calibrationObjects = default;
        [SerializeField] GameObject calibrationUI;

        bool calibrating = false;
        public float manualCalibrationDistance;
        MPDepthTrackingData trackingData;
        bool cancelled;
        StreamTrackingProvider.SavedStreamTrackingConfiguration calibration;
        [SerializeField] float defaultDistanceFromScreenCenter;
        [SerializeField] Transform calibrationTransform;
        GameObject mainUI;
        OffAxisCameraRig offAxisCameraRig;
        Camera offAxisCamera;

        private void Awake()
        {
            TrackingSystem trackingSystem = GetComponentInParent<TrackingSystem>();
            mainUI = trackingSystem.mainUI;
            offAxisCameraRig = trackingSystem.offAxisCameraRig;
            offAxisCamera = trackingSystem.offAxisCamera;
            trackingSource.TrackingDataUpdated += TrackingUpdated;

        }

       
        public async Task<bool> StartCalibration(StreamTrackingProvider.SavedStreamTrackingConfiguration newCalibration)
        {
            offAxisCameraRig.DisableCameraTracking();
            trackingSource.TrackingDataUpdated += TrackingUpdated;
            calibration = newCalibration;
            calibrating = true;
            cancelled = false;
            while(calibrating && !cancelled)
            {
                await Task.Delay(5);
            }
            Debug.Log("Finished calibration");
            offAxisCameraRig.EnableCameraTracking();
            trackingSource.TrackingDataUpdated -= TrackingUpdated;
            if (cancelled) return false;
            else return true;
        }

        void TrackingUpdated(MPDepthTrackingData data)
        {
            this.trackingData = data;
        }

        public void CalculateCalibrationFromTrackingInfo()
        {
            calibrationTransform.position = Vector3.zero;
            calibrationTransform.rotation = Quaternion.Euler(Vector3.zero);

            Vector3 camPos = new Vector3(0, 0, -manualCalibrationDistance);
            offAxisCamera.transform.localPosition = camPos;
            GameObject tempFace = new GameObject();
            tempFace.transform.position = offAxisCamera.transform.localPosition;
            Vector3 flippedEulers = -trackingData.CameraTrackingData.Eulers;
            tempFace.transform.eulerAngles = -1*(new Vector3(0, 180, 0) - new Vector3(flippedEulers.x, -flippedEulers.y, flippedEulers.z));
            tempFace.name = "tempFace";

            GameObject tempOffset = new GameObject();
            tempOffset.transform.parent = tempFace.transform;
            tempOffset.name = "tempOffset";

            Vector3 flippedPos = -trackingData.CameraTrackingData.Position;
            tempOffset.transform.localPosition = new Vector3(-flippedPos.x, flippedPos.y, flippedPos.z);
            tempOffset.transform.localEulerAngles = Vector3.zero;


            calibrationTransform.position = tempOffset.transform.position;
            calibrationTransform.rotation = tempOffset.transform.rotation;

            Destroy(tempFace);
            calibration = new StreamTrackingProvider.SavedStreamTrackingConfiguration();
            calibration.name = System.DateTime.Now.ToString();
            calibration.TrackerOffsetCalibration.Position = calibrationTransform.position;
            calibration.TrackerOffsetCalibration.Eulers = calibrationTransform.rotation.eulerAngles;
            GetComponent<StreamTrackingProvider>().SaveCalibration(calibration);
            // Destroy(tempFace);
        }



    }
}
