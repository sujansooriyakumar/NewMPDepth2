using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]

public class RotatableDeviceConfig : ScriptableObject
{
    [SerializeField] public RotatableDeviceScreen.SavedRotatableScreenCalibration screenCalibration;
    [SerializeField] public RotatableDeviceTrackingCalibrationProvider.SavedRotatableDeviceCalibration trackingCalibration;

    public RotatableDeviceScreen.SavedRotatableScreenCalibration ScreenCalibration => screenCalibration;
}
