using System;
using JetBrains.Annotations;
using UnityEngine;

// ReSharper disable InconsistentNaming

namespace Core {
    [Serializable]
    public class StreamedTrackingData {
        
        [PublicAPI]
        public bool IsTracking;
        
        [PublicAPI]
        public Vector3 Position;

        [PublicAPI]
        public Vector3 Rotation;

        [PublicAPI] public Vector3 LeftEyePosition;
        [PublicAPI] public Vector3 LeftEyeRotation;
        [PublicAPI] public Vector3 RightEyePosition;
        [PublicAPI] public Vector3 RightEyeRotation;
        [PublicAPI] public Vector3 FixationPoint;

        [PublicAPI] 
        public float[] BlendShapes;
    }

}