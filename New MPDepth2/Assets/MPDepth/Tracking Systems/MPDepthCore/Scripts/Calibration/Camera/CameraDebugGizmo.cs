using UnityEngine;

namespace MPDepthCore.Calibration.Camera {
    public class CameraDebugGizmo : MonoBehaviour
    {
  
        void OnDrawGizmos() {
            Gizmos.color = Color.magenta;
            Gizmos.matrix = this.transform.localToWorldMatrix;
            Gizmos.DrawWireCube(Vector3.zero, new Vector3(.02f,.02f,.04f));
            Gizmos.DrawLine(Vector3.zero, Vector3.forward);
            Gizmos.color = Color.white;
            Gizmos.matrix = Matrix4x4.identity;
        }
    }
}
