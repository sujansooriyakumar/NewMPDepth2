using JetBrains.Annotations;
using MPDepthCore.Calibration.Camera;
using MPDepthCore.TrackingSources;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MPDepthCore;

public class ARTracking : MPDepthTrackingSource
{
    public override event TrackingDataUpdatedEvent TrackingDataUpdated;

    [SerializeField] FaceTracker faceTracker = default;
    [PublicAPI]
    [SerializeField] public RawTrackingData trackingData;

    public override void TurnOn()
    {
        faceTracker.gameObject.SetActive(true);
    }

    public override void TurnOff()
    {
        faceTracker.gameObject.SetActive(false);

    }

    private void OnEnable()
    {
        faceTracker.TrackingDataUpdated += TrackingDataWasUpdated;
    }

    private void OnDisable()
    {
        faceTracker.TrackingDataUpdated -= TrackingDataWasUpdated;
    }

    void TrackingDataWasUpdated(MPDepthTrackingData updatedData)
    {
        trackingData = updatedData as RawTrackingData;
        TrackingDataUpdated?.Invoke(updatedData);
    }
}
