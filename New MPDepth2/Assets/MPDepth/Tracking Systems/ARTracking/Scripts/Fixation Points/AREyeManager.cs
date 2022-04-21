using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class AREyeManager : MonoBehaviour
{

    [SerializeField] GameObject leftEyePrefab;
    [SerializeField] GameObject rightEyePrefab;


    GameObject leftEye;
    GameObject rightEye;
    ARFaceManager arFaceManager;

    void OnEnable()
    {
        arFaceManager = FindObjectOfType<ARFaceManager>();

        if (arFaceManager != null &&
            arFaceManager.subsystem != null &&
            arFaceManager.subsystem.subsystemDescriptor.supportsEyeTracking)
        {
            arFaceManager.facesChanged += FacesChanged;
        }
    }

    void FacesChanged(ARFacesChangedEventArgs eventArgs)
    {

        foreach (ARFace face in eventArgs.updated)
        {
            if (face.trackingState == TrackingState.Tracking)
            {
                ARFaceUpdated(face);
            };
        }
    }

    void ARFaceUpdated(ARFace arFace)
    {
        if (arFace.leftEye != null && leftEye == null)
        {
            leftEye = Instantiate(leftEyePrefab, arFace.leftEye);
            leftEye.name = "LeftEye";
            leftEye.SetActive(false);
        }

        if (arFace.rightEye != null && rightEye == null)
        {
            rightEye = Instantiate(rightEyePrefab, arFace.rightEye);
            rightEye.name = "RightEye";
            rightEye.SetActive(false);
        }

        if (arFace.trackingState == TrackingState.Tracking && ARSession.state > ARSessionState.Ready)
        {
            if (leftEye != null)
            {
                leftEye.transform.SetParent(arFace.leftEye);
                leftEye.transform.localPosition = Vector3.zero;
                leftEye.transform.localRotation = Quaternion.identity;
                leftEye.SetActive(true);
            }

            if (rightEye != null)
            {
                rightEye.transform.SetParent(arFace.rightEye);
                rightEye.transform.localPosition = Vector3.zero;
                rightEye.transform.localRotation = Quaternion.identity;
                rightEye.SetActive(true);
            }
        }

    }

    void OnDisable()
    {
        arFaceManager.facesChanged -= FacesChanged;
        if (leftEye != null)
        {
            leftEye.SetActive(false);
        }

        if (rightEye != null)
        {
            rightEye.SetActive(true);
        }
    }


}
