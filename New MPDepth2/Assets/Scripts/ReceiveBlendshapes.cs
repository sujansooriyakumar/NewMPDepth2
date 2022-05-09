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
       
            if (blendshapes.Length > 0)
            {
                for (int i = 0; i < blendshapes.Length; i++)
                {
                    skinnedMeshRenderer.SetBlendShapeWeight(i, blendshapes[i]);

                }
            }
        
        
    }

    private void UpdateSlothBlendShapes(float[] blendshapes_)
    {
        
    }
}
