using UnityEngine;

namespace MPDepthCore.TrackingSources {
    
    public class ManualDebugSource : MPDepthTrackingSource {
        
        public override event TrackingDataUpdatedEvent TrackingDataUpdated;
        public override void TurnOff() {
            this.gameObject.SetActive(false);
        }

        public override void TurnOn() {
            this.gameObject.SetActive(true);
        }

        [SerializeField] bool isTracking = true;
        
        Transform cachedTransform;

        void OnEnable() {
            cachedTransform = this.transform;
        }

        void Update() {
            TrackingData.CameraTrackingData.Position = cachedTransform.position;
            TrackingData.CameraTrackingData.Eulers = cachedTransform.eulerAngles;
            TrackingData.IsTracking = isTracking;
            
            TrackingDataUpdated?.Invoke(TrackingData);
        }
    }
}
