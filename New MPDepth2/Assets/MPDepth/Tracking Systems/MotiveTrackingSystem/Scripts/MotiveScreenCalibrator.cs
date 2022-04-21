using MPDepthCore.Calibration.Screen;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MotiveScreenCalibrator : ScreenCalibrator
{
    [SerializeField] Transform TrackedScreen;
    [SerializeField] Transform calibrationTransform;
    public void Calibrate()
    {
        calibrationTransform.rotation = TrackedScreen.rotation;
    }
}
