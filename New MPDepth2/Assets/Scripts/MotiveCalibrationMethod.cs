using System.Collections;
using System.Collections.Generic;
using MPDepthCore;
using StreamTrackingSystem;
using UnityEngine;

public class MotiveCalibrationMethod : MonoBehaviour
{

    [SerializeField] StreamTrackingProvider streamTrackingProvider;

    [SerializeField] MotiveTrackingDataReceiver receiver;
    [SerializeField] GameObject window;
    Vector3 xHat;
    Vector3 yHat;
    Vector3 zHat;
    Matrix4x4 trs;
    Matrix4x4 rX;
    Matrix4x4 rY;
    Matrix4x4 rZ;

    Matrix4x4 rP;
    Matrix4x4 rS;
    Matrix4x4 tS;
    Matrix4x4 tP;

    public Vector3 finalPosition;
    public Vector3 finalRotation;
    public string calibrationName;

    [SerializeField] Transform phone;
    [SerializeField] Transform screen;


    public void SetName(string s)
    {
        calibrationName = s;
    }


    public void CalculateCalibration()
    {
        xHat = new Vector3(1, 0, 0);
        yHat = new Vector3(0, 1, 1);
        zHat = new Vector3(0, 0, 1);


        MotiveRigidBodyData data = receiver.GetData();

        Vector3 phonePos = data.phonePos;

        Vector3 phoneRot = data.phoneRot;

        Vector3 screenPos = data.screenPos;
        Vector3 screenRot = data.screenRot;
        //phonePos = new Vector3(-2.9936f, 1.646f, 1.641f);
        //phoneRot = new Vector3(0.66f, 0.212f, -0.218f);

        //screenPos = new Vector3(-3.003f, 1.29215f, 1.654f);
        //screenRot = new Vector3(-0.021f, -0.019f, -0.006f);
        /* rotx(phoneRot.x * Mathf.Deg2Rad);
         roty(phoneRot.y * Mathf.Deg2Rad);
         rotz(phoneRot.z * Mathf.Deg2Rad);
         Vector3 temp = phonePos - screenPos;
         Matrix4x4 R = rX * rY * rZ;


         finalPosition = temp;
         finalRotation = R.rotation.eulerAngles;
         StreamTrackingProvider.SavedStreamTrackingConfiguration calibration = new StreamTrackingProvider.SavedStreamTrackingConfiguration();
         calibration.name = calibrationName;
         calibration.TrackerOffsetCalibration.Position = temp;
         calibration.TrackerOffsetCalibration.Eulers = R.rotation.eulerAngles;
         streamTrackingProvider.SaveCalibration(calibration);*/

        Vector3 posDiff = screenPos - phonePos;
       posDiff.y *= -1;
        Quaternion q = Quaternion.Euler(screenRot) * Quaternion.Inverse(Quaternion.Euler(phoneRot));

        Vector3 rotDiff = q.eulerAngles;
        StreamTrackingProvider.SavedStreamTrackingConfiguration calibration = new StreamTrackingProvider.SavedStreamTrackingConfiguration();


        calibration.name = calibrationName;
        calibration.TrackerOffsetCalibration.Position = posDiff;
        calibration.TrackerOffsetCalibration.Eulers = rotDiff;
        streamTrackingProvider.SaveCalibration(calibration);
        TrackingSystemsManager.instance.CurrentTrackingSystem.ScreenCalibrationProvider.Calibrate();
        TrackingSystemsManager.instance.UpdateCalibrationDropdown();

    }

    void rotx(float x)
    {
        rX.m00 = 1;
        rX.m01 = 0;
        rX.m02 = 0;
        rX.m10 = 0;
        rX.m11 = Mathf.Cos(x);
        rX.m12 = -Mathf.Sin(x);
        rX.m20 = 0;
        rX.m21 = Mathf.Sin(x);
        rX.m22 = Mathf.Cos(x);
    }

    void roty(float y)
    {
        rY.m00 = Mathf.Cos(y);
        rY.m01 = 0;
        rY.m02 = Mathf.Sin(y);
        rY.m10 = 0;
        rY.m11 = 1;
        rY.m12 = 0;
        rY.m20 = -Mathf.Sin(y);
        rY.m21 = 0;
        rY.m22 = Mathf.Cos(y);
    }

    void rotz(float z)
    {
        rZ.m00 = Mathf.Cos(z);
        rZ.m01 = -Mathf.Sin(z);
        rZ.m02 = 0;
        rZ.m10 = Mathf.Sin(z);
        rZ.m11 = Mathf.Cos(z);
        rZ.m12 = 0;
        rZ.m20 = 0;
        rZ.m21 = 0;
        rZ.m22 = 1;
    }

    public void HideWindow()
    {
        window.SetActive(false);
    }
}


