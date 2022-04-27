using MPDepthCore;
using MPDepthCore.Calibration.Camera;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReceiveBlendshapes : MonoBehaviour
{
    [SerializeField] NetworkManager networkManager;
    [SerializeField] SkinnedMeshRenderer skinnedMeshRenderer;
   
    [SerializeField] bool isReadyPlayerAvatar;
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

        }

        headBone.rotation = Quaternion.Euler((rotation.x) * -1, rotation.y, rotation.z);




        for (int i = 0; i < blendshapes.Length; i++)
                {
                    skinnedMeshRenderer.SetBlendShapeWeight(i, blendshapes[i]);
               
                }
            
        
    }


}
