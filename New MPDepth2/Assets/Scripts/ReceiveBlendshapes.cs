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
    float xAngleOffset;
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
    }
    private void Update()
    {
        if (!networkManager.isConnected)
        {
            position = trackingSystemsManager.CurrentCalibratedTrackingData.CameraTrackingData.Position;
            rotation = trackingSystemsManager.CurrentCalibratedTrackingData.CameraTrackingData.Eulers;
            blendshapes = trackingSystemsManager.CurrentCalibratedTrackingData.BlendshapeTrackingData.Blendshapes;

    
        }
        else
        {
            position = networkManager.GetPosition();
            rotation = networkManager.GetEulers();
            blendshapes = networkManager.GetBlendshapes();
            //if(networkManager.GetIsOtherPlayerTracking()) transform.localPosition = position;

        }
        if (rotation.magnitude > 0)
        {
            if (networkManager.isConnected)
            {
                headBone.rotation = Quaternion.Euler((rotation.x), -(180 - rotation.y), rotation.z);
                if (position.magnitude > 0) transform.localPosition = -position;

            }
            else
            {
                headBone.rotation = Quaternion.Euler((rotation.x), (180 - rotation.y), -rotation.z);

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
