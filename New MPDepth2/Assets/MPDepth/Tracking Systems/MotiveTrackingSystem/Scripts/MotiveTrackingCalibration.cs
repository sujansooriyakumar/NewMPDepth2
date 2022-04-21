using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using MPDepthCore;
using MPDepthCore.Calibration.Camera;
using MPDepthCore.TrackingSources;
using OffAxisCamera;
using UnityEngine;

public class MotiveTrackingCalibration : MonoBehaviour
{
    [SerializeField] MPDepthTrackingSource trackingSource = default;
    [SerializeField] GameObject calibrationObjects = default;
    [SerializeField] GameObject calibrationUI;
    [SerializeField] Transform TrackedScreen;

    bool calibrating = false;
    MPDepthTrackingData trackingData;
    bool cancelled;

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

    
    public void CalculateCalibrationFromTrackingInfo()
    {
        calibrationTransform.position = Vector3.zero;
        calibrationTransform.rotation = Quaternion.Euler(Vector3.zero);

        Vector3 camPos = new Vector3(0, 0, trackingData.CameraTrackingData.Position.z);
        offAxisCamera.transform.localPosition = camPos;
        GameObject tempFace = new GameObject();
        tempFace.transform.position = offAxisCamera.transform.localPosition;
        Vector3 flippedEulers = -trackingData.CameraTrackingData.Eulers;
        tempFace.transform.eulerAngles = new Vector3(0, 180, 0) - new Vector3(flippedEulers.x, -flippedEulers.y, flippedEulers.z);
        tempFace.name = "tempFace";

        GameObject tempOffset = new GameObject();
        tempOffset.transform.parent = tempFace.transform;
        tempOffset.name = "tempOffset";

        Vector3 flippedPos = -trackingData.CameraTrackingData.Position;
        tempOffset.transform.localPosition = new Vector3(flippedPos.x, flippedPos.y, flippedPos.z);
        tempOffset.transform.localEulerAngles = Vector3.zero;


        calibrationTransform.position = tempOffset.transform.position;
        calibrationTransform.rotation = tempOffset.transform.rotation;
        MotiveTrackingProvider.SavedMotiveTrackingConfiguration calibration = new MotiveTrackingProvider.SavedMotiveTrackingConfiguration();
        calibration.TrackerOffsetCalibration.Position = calibrationTransform.position;
        calibration.TrackerOffsetCalibration.Eulers = calibrationTransform.rotation.eulerAngles;
        calibration.name = System.DateTime.Now.ToString();
        GetComponent<MotiveTrackingProvider>().SaveCalibration(calibration);
        Destroy(tempFace);
    }

    void TrackingUpdated(MPDepthTrackingData data)
    {
        this.trackingData = data;
    }


}
