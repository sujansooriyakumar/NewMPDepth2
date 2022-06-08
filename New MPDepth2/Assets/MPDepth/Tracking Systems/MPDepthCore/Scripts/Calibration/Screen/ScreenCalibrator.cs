using System;
using System.Threading.Tasks;
using OffAxisCamera;
using UnityEngine;

namespace MPDepthCore.Calibration.Screen {
    public abstract class ScreenCalibrator : MonoBehaviour {

        TrackingSystem trackingSystem;

     

        protected OffAxisCameraRig offAxisCameraRig {
            get {
                trackingSystem ??= GetComponentInParent<TrackingSystem>();
                return trackingSystem.offAxisCameraRig;
            }
        }

        protected UnityEngine.Camera offAxisCamera {
            get {
                trackingSystem ??= GetComponentInParent<TrackingSystem>();
                return trackingSystem.offAxisCamera;
            }
        }

    }
}