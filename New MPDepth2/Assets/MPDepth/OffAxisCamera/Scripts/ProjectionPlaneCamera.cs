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
        [SerializeField] bool isDyadic;
        [SerializeField] Vector3 otherPlayerPosition;
       
        bool flipped;
        const float MinZThreshold = 0.001f;
        Vector3 eyePos; // the vector from the eyes to projection screen corners

        float n, f; // near and far clip planes

        float l, r, b, t; // left right back top?

        Vector3 va, vb, vc, vd; // holds distances from eye to corners of proj plane
        Vector3 viewDir;
        Camera cam;
        int scalar;
        [SerializeField] Transform otherPlayerCalibration;

        private void Awake()
        {
            cam = GetComponent<Camera>();
            if (!isDyadic)
            {
                scalar = -1;
            }
            else
            {
                scalar = 1;
            }
        }
        public void SetOtherPlayerPosition(Vector3 pos)
        {
            otherPlayerPosition = pos;
            otherPlayerPosition.x *= -1;
        }

        public void SetOtherPlayerCalibration(Vector3 position, Vector3 rotation)
        {
            otherPlayerCalibration.position = position;
            otherPlayerCalibration.rotation = Quaternion.Euler(rotation);
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
                Vector3 vu = projectionScreen.DirUp * -1;
                Vector3 vn = projectionScreen.DirNormal;

                Matrix4x4 M = projectionScreen.M;
                eyePos = transform.position;
                // calculate the distance from to the eye to projection screen corners

                va = pa - eyePos;
                vb = pb - eyePos;
                vc = pc - eyePos;
                vd = pd - eyePos;


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
                b = Vector3.Dot(vu, vc) * nearOverDist;
                t = Vector3.Dot(vu, va) * nearOverDist;
                Matrix4x4 P = Matrix4x4.Frustum(l, r, b, t, n, f); // create the projection matrix


                Transform TCSATransform = calibrationTransform;


                Matrix4x4 TCSA = TCSATransform.localToWorldMatrix;
                Transform GCATransform = transform;
                // calibrationTransform.TransformPoint(Vector3 position);
                // this is how the calibration was applied in the previous version
                Matrix4x4 TAB;
                if (isDyadic)
                {
                    TAB = new Matrix4x4(new Vector4(-1, 0, 0, 0), new Vector4(0, 1, 0, 0), new Vector4(0, 0, -1, 0), new Vector4(0, 0, 0, 1));

                }
                else
                {
                    TAB = new Matrix4x4(new Vector4(-1, 0, 0, 0), new Vector4(0, 1, 0, 0), new Vector4(0, 0, -1, 0), new Vector4(0, 0, 0, 1));

                }
                Matrix4x4 GCA = GCATransform.localToWorldMatrix;
                if (isDyadic)
                {
                    Matrix4x4 TCSB = otherPlayerCalibration.localToWorldMatrix;
                    Matrix4x4 BC = Matrix4x4.Translate(otherPlayerPosition);
                    Matrix4x4 BS = TCSB * BC;
                    Matrix4x4 TSVB = Matrix4x4.identity;
                    TSVB.m03 = -(BS.m03);
                    TSVB.m13 = -(BS.m13);
                    TSVB.m23 = -(BS.m23);
                    cam.worldToCameraMatrix = M * TSVB * TAB * GCA * TCSA;
                    
                    cam.projectionMatrix = P;
                }
                else
                {
                    //Matrix4x4 scale = Matrix4x4.Scale(new Vector3(-1, 1, 1));
                    cam.worldToCameraMatrix = M * TAB    * GCA * TCSA;
                    cam.projectionMatrix = P;


                }

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
