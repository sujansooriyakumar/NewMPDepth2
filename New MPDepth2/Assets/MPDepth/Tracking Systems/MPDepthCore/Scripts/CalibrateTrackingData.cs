using System.Collections;
using System.Collections.Generic;
using MPDepthCore.Calibration.Camera;
using UnityEngine;

public class CalibrateTrackingData : MonoBehaviour
{
    public static CalibrateTrackingData instance;
    [SerializeField] Transform projectionScreen;
    [SerializeField] Vector3 calibratedPosition;

    private void Awake()
    {
        instance = this;
    }

    public Vector3[] CalibrateData(MPDepthTrackingData rawTrackingData, Transform calibrationTransform)
    {
        Vector3[] calibratedData = new Vector3[2];
        Vector3 position = rawTrackingData.CameraTrackingData.Position;
        Matrix4x4 GCA = Matrix4x4.Translate(position);
        Matrix4x4 screenDisplacement = Matrix4x4.Translate(projectionScreen.position);
        Matrix4x4 screenOrientationA = Matrix4x4.Rotate(projectionScreen.rotation);

        Matrix4x4 tmp = (screenOrientationA) * Matrix4x4.Translate(projectionScreen.position);
        Matrix4x4 TCSA = screenOrientationA;
        TCSA.m03 = tmp.m03;
        TCSA.m13 = tmp.m13;
        TCSA.m23 = tmp.m23;
        TCSA.m33 = 1;
        Matrix4x4 GSA = TCSA;
        Matrix4x4 TAB = Matrix4x4.Rotate(Quaternion.Euler(new Vector3(0, 180, 0)));
        Matrix4x4 GSB = TAB * GSA;

        Matrix4x4 ScreenOrientationB = Matrix4x4.Rotate(calibrationTransform.localRotation);
        Matrix4x4 tmp2 = Matrix4x4.Translate(calibrationTransform.position);

        Matrix4x4 TCSB = ScreenOrientationB;
        TCSB.m03 = -tmp2.m03;
        TCSB.m13 = -tmp2.m13;
        TCSB.m23 = -tmp2.m23;
        TCSB.m33 = 1;

        Matrix4x4 VCB = Matrix4x4.Translate(position);
        Matrix4x4 VSB = TCSB * screenDisplacement * VCB;
        calibratedPosition = new Vector3(VSB.m03, VSB.m13, VSB.m23);
        calibratedData[0] = calibratedPosition;
        calibratedData[1] = rawTrackingData.CameraTrackingData.Eulers;
        return calibratedData;
    }
}
