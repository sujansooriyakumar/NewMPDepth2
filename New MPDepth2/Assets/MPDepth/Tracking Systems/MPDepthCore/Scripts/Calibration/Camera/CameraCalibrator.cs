using System;
using System.Threading.Tasks;
using UnityEngine;

namespace MPDepthCore.Calibration.Camera {
    public abstract class CameraCalibrator : MonoBehaviour {

        public abstract Task RunCalibrationProcedure();
    }
}