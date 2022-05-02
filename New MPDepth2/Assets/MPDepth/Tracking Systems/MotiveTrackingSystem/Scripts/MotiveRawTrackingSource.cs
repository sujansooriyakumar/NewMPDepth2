using System;
using System.Collections;
using System.Collections.Generic;
using MPDepthCore.Calibration.Camera;
using MPDepthCore.TrackingSources;
using MPDepthCore;
using UnityEngine;

public class MotiveRawTrackingSource : MPDepthTrackingSource
{
    [SerializeField] GameObject cameraObject = default;

    [SerializeField] GameObject screenObject = default;


    protected Vector3 GetCameraToScreenPosition => cameraObject.transform.position - screenObject.transform.position;

    public override void TurnOff()
    {

    }

    public override void TurnOn()
    {

    }

    private void Update()
    {
        CameraTrackingData cameraTrackingData = new CameraTrackingData
        {
            Position = GetCameraToScreenPosition
        };


        MPDepthTrackingData data = new RawTrackingData
        {
            CameraTrackingData = cameraTrackingData,
            IsTracking = true
        };
        TrackingDataUpdated?.Invoke(data);
    }

    public override event TrackingDataUpdatedEvent TrackingDataUpdated;
}
