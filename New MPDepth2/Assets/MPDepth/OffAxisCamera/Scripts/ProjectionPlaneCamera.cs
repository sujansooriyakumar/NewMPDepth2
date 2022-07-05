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

        [SerializeField] Vector3 otherPlayerPosition;

        [SerializeField] Matrix4x4 GCA;
        [SerializeField] Vector3 screenLocationA;
        [SerializeField] Matrix4x4 ScreenOrientationA;
        [SerializeField] float sa;
        [SerializeField] Matrix4x4 TCSA;
        [SerializeField] Matrix4x4 GSA;
        [SerializeField] Matrix4x4 TAB;
        [SerializeField] Matrix4x4 GSB;
        [SerializeField] Matrix4x4 TCSB;
        [SerializeField] Matrix4x4 ScreenOrientationB;
        [SerializeField] Matrix4x4 VCB;
        [SerializeField] Matrix4x4 VSB;
        [SerializeField] Matrix4x4 TSVB;
        [SerializeField] Matrix4x4 GVB;
        [SerializeField] Matrix4x4 test;
        [SerializeField] Matrix4x4 M;
        [SerializeField] Matrix4x4 result;
        bool flipped;
        const float MinZThreshold = -0.001f;
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
        }
        public void SetOtherPlayerPosition(Vector3 pos)
        {
            otherPlayerPosition = pos;
            otherPlayerPosition.x *= -1;
        }

        public void SetOtherPlayerCalibration(Vector3 position, Vector3 rotation)
        {
            otherPlayerCalibration.position = new Vector3(position.x, -position.y, position.z);
            //otherPlayerCalibration.rotation = Quaternion.Euler(rotation);

        }

        private void LateUpdate()
        {

            // defines the geometry in unity coordinates
            // in this case it is just the 3 points of a triangle
            eyePos = transform.position;
            GCA = Matrix4x4.Translate(eyePos);

            // defines the location of the window
            screenLocationA = projectionScreen.transform.position;
            Matrix4x4 screenDisplacement = Matrix4x4.Translate(projectionScreen.transform.position);

            // defines the orientation of the projection plane
            float windowRotationInRadians = Mathf.Deg2Rad * projectionScreen.transform.rotation.eulerAngles.y;
            //ScreenOrientationA = new Matrix4x4(
            //    new Vector4(Mathf.Cos(windowRotationInRadians), 0, Mathf.Sin(windowRotationInRadians), 0),
            //    new Vector4(0, 1, 0, 0),
            //    new Vector4(-Mathf.Sin(windowRotationInRadians), 0, Mathf.Cos(windowRotationInRadians), 0),
            //    new Vector4(0, 0, 0, 0));
            ScreenOrientationA = Matrix4x4.Rotate(projectionScreen.transform.rotation);
            // temporary variable to hold the translation
            Matrix4x4 tmp = (ScreenOrientationA) * Matrix4x4.Translate(projectionScreen.transform.position);

            // assign the translation to the matrix TCSA
            TCSA = ScreenOrientationA;
            TCSA.m03 = -tmp.m03;
            TCSA.m13 = -tmp.m13;
            TCSA.m23 = -tmp.m23;
            TCSA.m33 = 1;

            // GSA describes the transformation from unity coords to screen coords
            GSA = TCSA;

            TAB = Matrix4x4.Rotate(Quaternion.Euler(new Vector3(0, 180, 0)));

            // geometry in the screen coordinates of viewer B is determined with the matrix TAB
            GSB = TAB * GSA;

            // TCSB is the calibration matrix
            // however we can't just generate the matrix using the Matrix.Rotate and Translate functions
            // because the rotation needs to be applied first, then we calculate the translation

            float sb = calibrationTransform.rotation.eulerAngles.y;
            float sbRad = sb * Mathf.Deg2Rad;
            //ScreenOrientationB = new Matrix4x4(
            //    new Vector4(Mathf.Cos(sbRad), 0, Mathf.Sin(sbRad), 0),
            //    new Vector4(0, 1, 0, 0),
            //    new Vector4(-Mathf.Sin(sbRad), 0, Mathf.Cos(sbRad), 0),
            //    new Vector4(0, 0, 0, 0));

            ScreenOrientationB = Matrix4x4.Rotate(calibrationTransform.rotation);

            // temporary variable to hold the translation
            Matrix4x4 tmp2 = (ScreenOrientationB) * Matrix4x4.Translate(calibrationTransform.position);

            // assign the translation to matrix TCSB
            TCSB = ScreenOrientationB;
            TCSB.m03 = -tmp2.m03;
            TCSB.m13 = -tmp2.m13;
            TCSB.m23 = -tmp2.m23;
            TCSB.m33 = 1;
            // VCB describes the tracked head location
            // flip the sign as the camera space uses OpenGL notation, where the camera's forward is negative Z
            // ref: https://docs.unity3d.com/ScriptReference/Camera-worldToCameraMatrix.html

            VCB = Matrix4x4.Translate(-eyePos);

            // VSB is the calibrated head location
            VSB = TCSB * screenDisplacement * VCB;
            // why do we have a rotation here? ask niko
            TSVB = new Matrix4x4(
                new Vector4(-1, 0, 0, 0),
                new Vector4(0, 1, 0, 0),
                new Vector4(0, 0, -1, 0),
                new Vector4(VSB.m03, VSB.m13, VSB.m23, 1));

            // geometry in viewer B coordinates

            GVB = TSVB * GSB;
            result = M * GVB;
            cam.worldToCameraMatrix = M * GVB;
            cam.projectionMatrix = GenerateProjectionMatrix();

        }



        void PreventIllegalFrustrums()
        {
            //if (this.transform.localPosition.z >= 0)
            //{
            //    Vector3 pos = this.transform.localPosition;
            //    pos.z = MinZThreshold;
            //    this.transform.localPosition = pos;
            //}
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

                Gizmos.color = Color.yellow;
                Gizmos.DrawLine(pos, viewDir);
            }
        }

        Matrix4x4 GenerateProjectionMatrix()
        {
            PreventIllegalFrustrums();
            Vector3 pa = projectionScreen.BottomLeft;
            Vector3 pb = projectionScreen.BottomRight;
            Vector3 pc = projectionScreen.TopLeft;
            Vector3 pd = projectionScreen.TopRight;

            Vector3 vr = projectionScreen.DirRight;
            Vector3 vu = projectionScreen.DirUp;
            Vector3 vn = projectionScreen.DirNormal;

            M = projectionScreen.M;
            Vector3 loc = new Vector3(-GVB.m03, -GVB.m13, -GVB.m23);
            // calculate the distance from to the eye to projection screen corners

            va = pa - loc;
            vb = pb - loc;
            vc = pc - loc;
            vd = pd - loc;


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
            return P;
        }



    }
}
