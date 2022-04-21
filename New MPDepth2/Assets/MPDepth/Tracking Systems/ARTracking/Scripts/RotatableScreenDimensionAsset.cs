using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]
public class RotatableScreenDimensionAsset : ScriptableObject
{

    [SerializeField] public RotatableDeviceScreen.SavedRotatableScreenCalibration calibration;

    public RotatableDeviceScreen.SavedRotatableScreenCalibration Calibration => calibration;


}