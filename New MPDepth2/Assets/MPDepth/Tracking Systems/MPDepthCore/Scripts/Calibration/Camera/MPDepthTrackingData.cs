using System;
using JetBrains.Annotations;
using UnityEngine;

namespace MPDepthCore.Calibration.Camera {

    [Serializable]
    public abstract class MPDepthTrackingData {

        public bool IsTracking = false;

        public CameraTrackingData CameraTrackingData = new CameraTrackingData();
        public EyeTrackingData EyeTrackingData = new EyeTrackingData();
        public BlendshapeTrackingData BlendshapeTrackingData = new BlendshapeTrackingData();
        
    }

    [Serializable]
    public class RawTrackingData : MPDepthTrackingData { }

    [Serializable]
    public class CalibratedTrackingData : MPDepthTrackingData {
        CalibratedTrackingData(RawTrackingData rawData, Transform offset) {
            CameraTrackingData = rawData.CameraTrackingData.Calibrate(offset);
            EyeTrackingData = rawData.EyeTrackingData.Calibrate(offset);
            BlendshapeTrackingData = rawData.BlendshapeTrackingData;
            IsTracking = rawData.IsTracking;
        }

        CalibratedTrackingData() {
            //For empty object
        }

        public static CalibratedTrackingData From(RawTrackingData rawData, Transform offset) {
            CalibratedTrackingData calibratedData = new CalibratedTrackingData(rawData, offset);
            return calibratedData;
        }

        public static CalibratedTrackingData Empty() {
            return new CalibratedTrackingData();
        }
        
       
        
    }

    [Serializable]
    public abstract class TrackingPose {
        [SerializeField]
        public Vector3 Position = default;
        public Vector3 Eulers = default;

        public T Calibrate<T>(Transform offset) where T:TrackingPose, new() {
            
            Vector3 pos = offset.TransformPoint(Position);
            var rot = offset.rotation * Quaternion.Euler(Eulers);

            Vector3 fixedEulers = FixEulersToAvoidSingularityInPredictiveLagCompensation(rot);

            T calibrated = new T {
                Position = pos,
                Eulers = fixedEulers
            };
            return calibrated;
        }

        static Vector3 FixEulersToAvoidSingularityInPredictiveLagCompensation(Quaternion rot) {
            Vector3 fixedEulers = rot.eulerAngles;
            if (fixedEulers.x > 180) fixedEulers.x -= 360;
            if (fixedEulers.z > 180) fixedEulers.z -= 360;
            return fixedEulers;
        }
    }

    [Serializable]
    public class CameraTrackingData : TrackingPose {

        public CameraTrackingData Calibrate(Transform offset) {
            return this.Calibrate<CameraTrackingData>(offset);
        }

        
    }
    
    [Serializable]
    public class LeftEyeTrackingData : TrackingPose { }
    
    [Serializable]
    public class RightEyeTrackingData : TrackingPose { }

    [Serializable]
    public class EyeTrackingData {
        public LeftEyeTrackingData LeftEyeTrackingData = new LeftEyeTrackingData();
        public RightEyeTrackingData RightEyeTrackingData = new RightEyeTrackingData();
        public FixationPointTrackingData FixationPointTrackingData = new FixationPointTrackingData();

        public EyeTrackingData Calibrate(Transform offset) {
            EyeTrackingData calibrated = new EyeTrackingData {
                FixationPointTrackingData = FixationPointTrackingData.Calibrate(offset),
                LeftEyeTrackingData = LeftEyeTrackingData.Calibrate<LeftEyeTrackingData>(offset),
                RightEyeTrackingData = RightEyeTrackingData.Calibrate<RightEyeTrackingData>(offset)
            };
            return calibrated;
        }
    }
    
    [Serializable]
    public class FixationPointTrackingData {
        public Vector3 Position = default;

        public FixationPointTrackingData Calibrate(Transform offset) {
            FixationPointTrackingData calibrated = new FixationPointTrackingData {
                Position = offset.TransformPoint(Position)
            };
            return calibrated;
        }
    }

    [Serializable]
    public class BlendshapeTrackingData {
        public float[] Blendshapes = new float[50];
    }

}