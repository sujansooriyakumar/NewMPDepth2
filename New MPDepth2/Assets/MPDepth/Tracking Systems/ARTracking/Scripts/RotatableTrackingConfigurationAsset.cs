using System.Collections;
using System.Collections.Generic;
using UnityEngine;


    [CreateAssetMenu]
    public class RotatableTrackingConfigurationAsset : ScriptableObject
    {

        [SerializeField] public RotatableDeviceTrackingCalibrationProvider.SavedRotatableDeviceCalibration calibration;
    }
