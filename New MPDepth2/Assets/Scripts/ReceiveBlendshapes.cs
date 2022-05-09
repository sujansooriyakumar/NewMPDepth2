using MPDepthCore;
using MPDepthCore.Calibration.Camera;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReceiveBlendshapes : MonoBehaviour
{
    [SerializeField] NetworkManager networkManager;
    [SerializeField] SkinnedMeshRenderer skinnedMeshRenderer;
   
    [SerializeField] bool isSloth;
    [SerializeField] TrackingSystemsManager trackingSystemsManager;
    [SerializeField] Transform headBone;

    private Vector3 position;
    private Vector3 rotation;
    private float[] blendshapes;
    private float rotationOffset;
    private MirrorModeController mirrorModeController;
    private void Start()
    {
        networkManager = NetworkManager.instance;
        trackingSystemsManager = TrackingSystemsManager.instance;
        skinnedMeshRenderer = GetComponentInChildren<SkinnedMeshRenderer>();
        Transform[] children = transform.GetComponentsInChildren<Transform>();
        foreach(Transform child in children)
        {
            if(child.gameObject.name == "Head")
            {
                headBone = child;
            }
        }
        rotationOffset = headBone.rotation.eulerAngles.x;
        mirrorModeController = MirrorModeController.instance;
    }
    private void Update()
    {
        bool isInMirrorMode = mirrorModeController.GetMirrorMode();
        if (!networkManager.isConnected || isInMirrorMode)
        {
            position = trackingSystemsManager.CurrentCalibratedTrackingData.CameraTrackingData.Position;
            rotation = trackingSystemsManager.CurrentCalibratedTrackingData.CameraTrackingData.Eulers;
            blendshapes = trackingSystemsManager.CurrentCalibratedTrackingData.BlendshapeTrackingData.Blendshapes;

    
        }
        else if(networkManager.isConnected && !isInMirrorMode)
        {
            position = networkManager.GetPosition();
            rotation = networkManager.GetEulers();
            blendshapes = networkManager.GetBlendshapes();
            //if(networkManager.GetIsOtherPlayerTracking()) transform.localPosition = position;

        }
        if (rotation.magnitude > 0)
        {
            if (networkManager.isConnected && !isInMirrorMode)
            {
                headBone.rotation = Quaternion.Euler((rotation.x - rotationOffset), -(180 - rotation.y), rotation.z);
                if (position.magnitude > 0) transform.localPosition = -position;

            }
            else if(!networkManager.isConnected || isInMirrorMode)
            {
                headBone.rotation = Quaternion.Euler((rotation.x - rotationOffset), (180 - rotation.y), -rotation.z);
                transform.localPosition = new Vector3(position.x, position.y, -position.z);
            }
        }
        if (isSloth)
        {
            UpdateSlothBlendShapes(blendshapes);
        }
        else
        {
            if (blendshapes.Length > 0)
            {
                for (int i = 0; i < blendshapes.Length; i++)
                {
                    skinnedMeshRenderer.SetBlendShapeWeight(i, blendshapes[i]);

                }
            }
        }
        
    }

    private void UpdateSlothBlendShapes(float[] blendshapes_)
    {
        for(int i = 0; i < 12; i++)
        {
            skinnedMeshRenderer.SetBlendShapeWeight(i, blendshapes_[i]);
        }

        skinnedMeshRenderer.SetBlendShapeWeight(12, blendshapes_[13]);
        skinnedMeshRenderer.SetBlendShapeWeight(13, blendshapes_[14]);
        skinnedMeshRenderer.SetBlendShapeWeight(14, blendshapes_[15]);
        skinnedMeshRenderer.SetBlendShapeWeight(15, blendshapes_[16]);
        skinnedMeshRenderer.SetBlendShapeWeight(16, blendshapes_[17]);
        skinnedMeshRenderer.SetBlendShapeWeight(17, blendshapes_[20]);
        skinnedMeshRenderer.SetBlendShapeWeight(18, blendshapes_[19]);
        skinnedMeshRenderer.SetBlendShapeWeight(19, blendshapes_[18]);
        skinnedMeshRenderer.SetBlendShapeWeight(20, blendshapes_[24]);
        skinnedMeshRenderer.SetBlendShapeWeight(21, blendshapes_[21]);
        skinnedMeshRenderer.SetBlendShapeWeight(22, blendshapes_[22]);
        skinnedMeshRenderer.SetBlendShapeWeight(23, blendshapes_[23]);
        skinnedMeshRenderer.SetBlendShapeWeight(24, blendshapes_[26]);
        skinnedMeshRenderer.SetBlendShapeWeight(25, blendshapes_[25]);
        skinnedMeshRenderer.SetBlendShapeWeight(26, blendshapes_[27]);
        skinnedMeshRenderer.SetBlendShapeWeight(27, blendshapes_[28]);
        skinnedMeshRenderer.SetBlendShapeWeight(28, blendshapes_[30]);
        skinnedMeshRenderer.SetBlendShapeWeight(29, blendshapes_[29]);
        skinnedMeshRenderer.SetBlendShapeWeight(30, blendshapes_[32]);
        skinnedMeshRenderer.SetBlendShapeWeight(31, blendshapes_[31]);
        skinnedMeshRenderer.SetBlendShapeWeight(32, blendshapes_[34]);
        skinnedMeshRenderer.SetBlendShapeWeight(33, blendshapes_[33]);
        skinnedMeshRenderer.SetBlendShapeWeight(34, blendshapes_[35]);
        skinnedMeshRenderer.SetBlendShapeWeight(35, blendshapes_[36]);
        skinnedMeshRenderer.SetBlendShapeWeight(36, blendshapes_[37]);
        skinnedMeshRenderer.SetBlendShapeWeight(37, blendshapes_[38]);
        skinnedMeshRenderer.SetBlendShapeWeight(38, blendshapes_[50]);
        skinnedMeshRenderer.SetBlendShapeWeight(39, blendshapes_[39]);
        skinnedMeshRenderer.SetBlendShapeWeight(40, blendshapes_[41]);
        skinnedMeshRenderer.SetBlendShapeWeight(41, blendshapes_[42]);
        skinnedMeshRenderer.SetBlendShapeWeight(42, blendshapes_[43]);
        skinnedMeshRenderer.SetBlendShapeWeight(43, blendshapes_[45]);
        skinnedMeshRenderer.SetBlendShapeWeight(44, blendshapes_[44]);
        skinnedMeshRenderer.SetBlendShapeWeight(45, blendshapes_[46]);
        skinnedMeshRenderer.SetBlendShapeWeight(46, blendshapes_[47]);
        skinnedMeshRenderer.SetBlendShapeWeight(47, blendshapes_[48]);
        skinnedMeshRenderer.SetBlendShapeWeight(48, blendshapes_[49]);
        skinnedMeshRenderer.SetBlendShapeWeight(49, blendshapes_[50]);

    }
}
