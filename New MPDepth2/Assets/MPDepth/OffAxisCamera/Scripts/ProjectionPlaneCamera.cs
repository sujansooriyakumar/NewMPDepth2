using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace OffAxisCamera
{
    [ExecuteInEditMode]
    [RequireComponent(typeof(Camera))]
    public class ProjectionPlaneCamera : MonoBehaviour
    {
        [SerializeField] ProjectionPlane projectionScreen;
        [SerializeField] bool clampNearPlane = true;
        [SerializeField] bool drawGizmos = true;
        [SerializeField] Transform calibrationTransform;
        [SerializeField] Transform OtherPlayerTracker;
   
        const float MinZThreshold = 0.001f;
        Vector3 eyePos; // the vector from the eyes to projection screen corners

        float n, f; // near and far clip planes

        float l, r, b, t; // left right back top?

        Vector3 va, vb, vc, vd; // holds distances from eye to corners of proj plane

        Vector3 viewDir;
        Camera cam;

        private void Awake()
        {
            cam = GetComponent<Camera>();
        }

        private void LateUpdate()
        {
            if(projectionScreen != null)
            {
                PreventIllegalFrustrums();
                Vector3 pa = projectionScreen.BottomLeft;
                Vector3 pb = projectionScreen.BottomRight;
                Vector3 pc = projectionScreen.TopLeft;
                Vector3 pd = projectionScreen.TopRight;

                Vector3 vr = projectionScreen.DirRight;
                Vector3 vu = projectionScreen.DirUp;
                Vector3 vn = projectionScreen.DirNormal;

                Matrix4x4 M = projectionScreen.M;
                eyePos = transform.position;
                // calculate the distance from to the eye to projection screen corners

                va = pa - eyePos;
                vb = pb - eyePos;
                vc = pc - eyePos;
                vd = pd - eyePos;

                viewDir = eyePos + va + vb + vc + vd;

                float d = -Vector3.Dot(va, vn);
                if (clampNearPlane)
                {
                    cam.nearClipPlane = d;
                }
                n = cam.nearClipPlane;
                f = cam.farClipPlane;
                float nearOverDist = n / d;
                l = Vector3.Dot(vr, va) * nearOverDist;
                r = Vector3.Dot(vr, vb) * nearOverDist;
                b = Vector3.Dot(vu, va) * nearOverDist;
                t = Vector3.Dot(vu, vc) * nearOverDist;
                Matrix4x4 P = Matrix4x4.Frustum(l, r, b, t, n, f); // create the projection matrix
                // setup projection camera matrices 
                Matrix4x4 T = Matrix4x4.Translate(-eyePos);
                Matrix4x4 R = Matrix4x4.Rotate(Quaternion.Inverse(transform.rotation) * projectionScreen.transform.rotation);
                cam.worldToCameraMatrix = M * R  * T;
                cam.projectionMatrix = P;
                
            }
        }

    

        void PreventIllegalFrustrums()
        {
            // clamps the z value of the camera
            if(this.transform.localPosition.z <= 0)
            {
                Vector3 pos = this.transform.localPosition;
                pos.z = MinZThreshold;
                this.transform.localPosition = pos;
            }
        }

        void OnDrawGizmos()
        {
            if (projectionScreen == null) return;

            if (drawGizmos)
            {
                Vector3 pos = transform.position;
                Gizmos.color = Color.green;
                Gizmos.DrawLine(pos, pos + va);
                Gizmos.DrawLine(pos, pos + vb);
                Gizmos.DrawLine(pos, pos + vc);
                Gizmos.DrawLine(pos, pos + vd);

                Vector3 pa = projectionScreen.BottomLeft;
                Vector3 vr = projectionScreen.DirRight;
                Vector3 vu = projectionScreen.DirUp;

                Gizmos.color = Color.white;
                Gizmos.DrawLine(pos, viewDir);
            }
        }

      

    }
}
