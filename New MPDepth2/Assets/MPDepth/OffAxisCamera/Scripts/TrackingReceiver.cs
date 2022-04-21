using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace OffAxisCamera
{
    public class TrackingReceiver : MonoBehaviour
    {
        [SerializeField] bool debugOverride = false;

        Vector3 initialPosition;
        OffAxisCameraRig offAxisCameraRig;

        private void OnEnable()
        {
            offAxisCameraRig = GetComponentInParent<OffAxisCameraRig>();
            offAxisCameraRig.CameraLocationUpdated += UpdateCameraPosition;
        }
        void UpdateCameraPosition(Vector3 trackedPosition)
        {
            if (debugOverride) return;
            if (offAxisCameraRig.TrackingDisabled) return;
            // clamp z pos
            trackedPosition.z = Mathf.Max(trackedPosition.z, 0.00001f);
            // set pos to the tracked position
            this.transform.localPosition = trackedPosition;

        }
        void OnDisable()
        {
            offAxisCameraRig.CameraLocationUpdated -= UpdateCameraPosition;
        }


        void Start()
        {
            initialPosition = this.transform.localPosition;
        }
    }
}
