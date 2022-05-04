using JetBrains.Annotations;
using OffAxisCamera.ScreenConfiguration;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace OffAxisCamera
{
    [SelectionBase]

    public class OffAxisCameraRig : MonoBehaviour
    {
        [SerializeField] public OffAxisScreenProvider screen = default;

        [PublicAPI] public OffAxisScreenProvider Screen
        {
            get => screen;
            set => screen = value;
        }

        [SerializeField]
        bool trackingDisabled = false;
        internal bool TrackingDisabled
        {
            get => trackingDisabled;
            set => trackingDisabled = value;
        }
        public void DisableCameraTracking()
        {
            trackingDisabled = true;
        }

        public void EnableCameraTracking()
        {
            trackingDisabled = false;
        }

        public bool GetTrackingDisabled()
        {
            return trackingDisabled;
        }

        public void UpdateCameraLocation(Vector3 position)
        {
            if (!trackingDisabled)
            {
                CameraLocationUpdated?.Invoke(position);
            }
        }

        internal delegate void UpdateCameraLocationEvent(Vector3 position);
        internal event UpdateCameraLocationEvent CameraLocationUpdated;
    }
}
