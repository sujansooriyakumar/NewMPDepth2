using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class MotiveRigidBodyData
{
    [SerializeField] Transform phoneTransform;
    [SerializeField] Transform screenTransform;
    public Vector3 phonePos;
    public Vector3 phoneRot;
    public Vector3 screenPos;
    public Vector3 screenRot;
    public MotiveRigidBodyData()
    {

    }

    public void UpdateData()
    {
        phonePos = phoneTransform.position;
        phoneRot = phoneTransform.rotation.eulerAngles;

        screenPos = screenTransform.position;
        screenRot = screenTransform.rotation.eulerAngles;
    }

    public void SetPhoneTransform(Transform t)
    {
        phoneTransform = t;
    }

    public void SetScreenTransform(Transform t)
    {
        screenTransform = t;
    }
}
