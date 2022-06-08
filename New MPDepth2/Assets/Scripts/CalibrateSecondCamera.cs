using MPDepthCore;
using OffAxisCamera;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CalibrateSecondCamera : MonoBehaviour
{
    [SerializeField] TrackingSystem currentTrackingSystem;
    [SerializeField] OffAxisCameraRig offAxisCameraRig;

    private void OnEnable()
    {
        currentTrackingSystem = GetComponent<TrackingSystemsManager>().CurrentTrackingSystem;
        currentTrackingSystem.ScreenCalibrationProvider.Calibrate();
    }
}
