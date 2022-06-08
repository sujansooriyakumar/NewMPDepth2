/*
This code was originally accessed from https://github.com/aptas/off-axis-projection-unity
and then modified by Adam Bebko.

The original code is licenced under the MIT licence and Copyright (c) 2019 Try Apt AS

Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Serialization;

namespace OffAxisCamera
{
    /// <summary>
    /// Code based on https://csc.lsu.edu/~kooima/pdfs/gen-perspective.pdf 
    /// and https://forum.unity.com/threads/vr-cave-projection.76051/
    /// </summary>
    [ExecuteInEditMode]
    public class ProjectionPlane : MonoBehaviour
    {

        [SerializeField] OffAxisCameraRig offAxisCameraRig;
        [SerializeField] public Vector2 size = new Vector2(8, 4.5f);
        [SerializeField] Vector2 aspectRatio = new Vector2(16, 9);
        [SerializeField] bool lockAspectRatio = true;
        [SerializeField] bool drawGizmo = true;

        [SerializeField] bool showAlignmentCube = false;
        [SerializeField] float alignmentDepth = 1;
        [SerializeField] Material alignmentMaterial;

        //Bottom-left, Bottom-right top-left, top-right corners of plane respectively
        internal Vector3 BottomLeft { get; private set; }
        internal Vector3 BottomRight { get; private set; }
        internal Vector3 TopLeft { get; private set; }
        internal Vector3 TopRight { get; private set; }

        //Vector right, up, normal from center of plane
        internal Vector3 DirRight { get; private set; }
        internal Vector3 DirUp { get; private set; }
        internal Vector3 DirNormal { get; private set; }
        public Vector3 bottomRight;
        public Vector3 bottomLeft;
        Vector2 previousSize = new Vector2(8, 4.5f);
        Vector2 previousAspectRatio = new Vector2(16, 9);

        GameObject alignmentCube;
        Transform backTrans;
        Transform leftTrans;
        Transform rightTrans;
        Transform topTrans;
        Transform bottomTrans;

        Matrix4x4 m;
        const float FloatTolerance = 0.0001f;
        internal Matrix4x4 M { get => m; }

        void OnDrawGizmos()
        {
            if (drawGizmo)
            {

                float normalDrawDistance = Mathf.Min(size.x, size.y) / 4f;

                Gizmos.color = Color.red;
                Gizmos.DrawLine(BottomLeft, BottomRight);
                Gizmos.DrawLine(BottomLeft, TopLeft);
                Gizmos.DrawLine(TopRight, BottomRight);
                Gizmos.DrawLine(TopLeft, TopRight);

                //Draw direction towards eye
                Vector3 planeCenter = BottomLeft + ((TopRight - BottomLeft) * 0.5f);
                Gizmos.DrawLine(planeCenter, planeCenter + DirNormal.normalized * normalDrawDistance);

                //Draw pyramid pointing out to tell which way it's pointing

                Vector3 normalVector = planeCenter + DirNormal.normalized * normalDrawDistance;
                Gizmos.DrawLine(BottomLeft, normalVector);
                Gizmos.DrawLine(BottomRight, normalVector);
                Gizmos.DrawLine(TopLeft, normalVector);
                Gizmos.DrawLine(TopRight, normalVector);
            }
        }

        void Start()
        {

            if (Application.isPlaying)
            {
                alignmentCube = new GameObject("AlignmentCube");
                alignmentCube.transform.SetParent(transform, false);

                alignmentCube.transform.localPosition = Vector3.zero;
                alignmentCube.transform.rotation = transform.rotation;

                GameObject back = CreateAlignmentQuad();
                backTrans = back.transform;
                GameObject left = CreateAlignmentQuad();
                leftTrans = left.transform;
                GameObject right = CreateAlignmentQuad();
                rightTrans = right.transform;
                GameObject top = CreateAlignmentQuad();
                topTrans = top.transform;
                GameObject bottom = CreateAlignmentQuad();
                bottomTrans = bottom.transform;

            }

        }

        
        GameObject CreateAlignmentQuad()
        {
            GameObject quad = GameObject.CreatePrimitive(PrimitiveType.Quad);
            quad.transform.parent = alignmentCube.transform;
            quad.GetComponent<Renderer>().material = alignmentMaterial;
            return quad;
        }

        void UpdateAlignmentCube()
        {
            Vector2 halfSize = size * 0.5f;
            UpdateAlignmentQuad(backTrans, new Vector3(0, 0, alignmentDepth), new Vector3(size.x, size.y), Quaternion.identity);
            UpdateAlignmentQuad(leftTrans,
                new Vector3(-halfSize.x, 0, alignmentDepth * 0.5f),
                new Vector3(alignmentDepth, size.y, 0),
                Quaternion.Euler(0, -90, 0));
            UpdateAlignmentQuad(rightTrans,
                new Vector3(halfSize.x, 0, alignmentDepth * 0.5f),
                new Vector3(alignmentDepth, size.y, 0),
                Quaternion.Euler(0, 90, 0));
            UpdateAlignmentQuad(topTrans,
                new Vector3(0, halfSize.y, alignmentDepth * 0.5f),
                new Vector3(size.x, alignmentDepth, 0),
                Quaternion.Euler(-90, 0, 0));

            UpdateAlignmentQuad(bottomTrans,
                new Vector3(0, -halfSize.y, alignmentDepth * 0.5f),
                new Vector3(size.x, alignmentDepth, 0),
                Quaternion.Euler(90, 0, 0));

        }

        void UpdateAlignmentQuad(Transform t, Vector3 pos, Vector3 scale, Quaternion rotation)
        {
            t.localPosition = pos;
            t.localScale = scale;
            t.localRotation = rotation;
        }

        void Update()
        {
            bottomLeft = BottomLeft;
            bottomRight = BottomRight;
            if (offAxisCameraRig.Screen != null)
            {
                size.x = offAxisCameraRig.Screen.Width;
                size.y = offAxisCameraRig.Screen.Height;
                lockAspectRatio = false;
            }

            if (Application.isPlaying)
            {
                alignmentCube.SetActive(showAlignmentCube);
                if (alignmentCube.activeInHierarchy)
                {
                    UpdateAlignmentCube();
                }
            }


            //Do aspect ratio constraints
            if (lockAspectRatio && offAxisCameraRig.Screen != null)
            {
                if (Math.Abs(aspectRatio.x - previousAspectRatio.x) > FloatTolerance)
                {
                    size.y = size.x / aspectRatio.x * aspectRatio.y;
                    //make X dominant axis - i.e. if both change, X takes precedence
                    previousAspectRatio.y = aspectRatio.y;
                }

                if (Math.Abs(aspectRatio.y - previousAspectRatio.y) > FloatTolerance)
                {
                    size.x = size.y / aspectRatio.y * aspectRatio.x;
                }

                if (Math.Abs(size.x - previousSize.x) > FloatTolerance)
                {
                    size.y = size.x / aspectRatio.x * aspectRatio.y;
                    //make X dominant axis - i.e. if both change, X takes precedence
                    previousSize.y = size.y;
                }

                if (Math.Abs(size.y - previousSize.y) > FloatTolerance)
                {
                    size.x = size.y / aspectRatio.y * aspectRatio.x;
                }
            }

            //Make sure we don't crash unity from out of bounds values.
            size.x = Mathf.Max(0.05f, size.x);
            size.y = Mathf.Max(0.05f, size.y);
            aspectRatio.x = Mathf.Max(1, aspectRatio.x);
            aspectRatio.y = Mathf.Max(1, aspectRatio.y);
    
            previousSize = size;
            previousAspectRatio = aspectRatio;

            BottomLeft = transform.TransformPoint(new Vector3(-size.x, -size.y) * 0.5f);
            BottomRight = transform.TransformPoint(new Vector3(size.x, -size.y) * 0.5f);
            TopLeft = transform.TransformPoint(new Vector3(-size.x, size.y) * 0.5f);
            TopRight = transform.TransformPoint(new Vector3(size.x, size.y) * 0.5f);

            DirRight = (BottomRight - BottomLeft).normalized;
            DirUp = (TopLeft - BottomLeft).normalized;
            DirNormal = -Vector3.Cross(DirRight, DirUp).normalized;

            m = Matrix4x4.zero;
            m[0, 0] = DirRight.x;
            m[0, 1] = DirRight.y;
            m[0, 2] = DirRight.z;

            m[1, 0] = DirUp.x;
            m[1, 1] = DirUp.y;
            m[1, 2] = DirUp.z;

            m[2, 0] = DirNormal.x;
            m[2, 1] = DirNormal.y;
            m[2, 2] = DirNormal.z;

            m[3, 3] = 1.0f;

        }

        

        void OnApplicationQuit()
        {
            transform.parent = null;
            if (Application.isPlaying && alignmentCube != null)
                DestroyImmediate(alignmentCube);
        }

     
    }
}
