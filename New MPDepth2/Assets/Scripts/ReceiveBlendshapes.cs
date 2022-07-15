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
    [SerializeField] bool isMirrorAvatar;
    [SerializeField] Transform otherPlayerCalibration;
    private Vector3 position;
    private Vector3 rotation;
    private float[] blendshapes;
    [SerializeField]private float rotationOffset;
    Transform calibration;
    
    private MirrorModeController mirrorModeController;
    private void Start()
    {
        networkManager = NetworkManager.instance;
        trackingSystemsManager = TrackingSystemsManager.instance;
        skinnedMeshRenderer = GetComponentInChildren<SkinnedMeshRenderer>();
        Transform[] children = transform.GetComponentsInChildren<Transform>();
        Transform neckBone = null;
        foreach(Transform child in children)
        {
            if(child.gameObject.name == "Head")
            {
                headBone = child;
            }
            if(child.gameObject.name == "Neck")
            {
                neckBone = child;
            }
        }
        if(neckBone) neckBone.localScale = new Vector3(1.1f, 1.1f, 1.1f);
        rotationOffset = 5.0f;
        mirrorModeController = MirrorModeController.instance;
        if (!isMirrorAvatar) transform.localScale = new Vector3(-1, 1, 1);
        calibration = trackingSystemsManager.GetCalibrationTransform();
        otherPlayerCalibration = trackingSystemsManager.otherPlayerCalibration;
    }

    private void OnEnable()
    {
    }
    private void Update()
    {
        if (isMirrorAvatar)
        {
            //position = trackingSystemsManager.CurrentCalibratedTrackingData.CameraTrackingData.Position;
            //rotation = trackingSystemsManager.CurrentCalibratedTrackingData.CameraTrackingData.Eulers;
            position = trackingSystemsManager.CurrentTrackingSystem.trackingSource.GetRawTrackingData().CameraTrackingData.Position;
            
            rotation = trackingSystemsManager.CurrentTrackingSystem.trackingSource.GetRawTrackingData().CameraTrackingData.Eulers;
            blendshapes = trackingSystemsManager.CurrentTrackingSystem.trackingSource.GetRawTrackingData().BlendshapeTrackingData.Blendshapes;

            Matrix4x4 calibrationMatrix = Matrix4x4.Rotate(calibration.rotation);

            // temporary variable to hold the translation
            Matrix4x4 tmp2 = (calibrationMatrix) * Matrix4x4.Translate(-calibration.position);
            Matrix4x4 pos = Matrix4x4.Translate(position);
            Matrix4x4 calibratedPos = tmp2 * pos;
            Matrix4x4 rot = Matrix4x4.Rotate(Quaternion.Euler(rotation));
            rot = tmp2 * rot;
            rotation = rot.rotation.eulerAngles;
            // assign the translation to matrix TCSB
            transform.localPosition = new Vector3(calibratedPos.m03, calibratedPos.m13, -calibratedPos.m23);


        }
        else if(!isMirrorAvatar)
        {
            position = new Vector3(networkManager.GetPosition().x, networkManager.GetPosition().y, networkManager.GetPosition().z);
            rotation = networkManager.GetEulers();
            blendshapes = networkManager.GetBlendshapes();
            //if(networkManager.GetIsOtherPlayerTracking()) transform.localPosition = position;

            Matrix4x4 calibrationMatrix = Matrix4x4.Rotate(otherPlayerCalibration.rotation);

            // temporary variable to hold the translation
            Matrix4x4 tmp2 = (calibrationMatrix) * Matrix4x4.Translate(-otherPlayerCalibration.position);
            Matrix4x4 pos = Matrix4x4.Translate(position);
            Matrix4x4 calibratedPos = tmp2 * pos;
            // assign the translation to matrix TCSB
            transform.localPosition = new Vector3(-calibratedPos.m03, -calibratedPos.m13, -calibratedPos.m23);

        }
        
        if (rotation.magnitude > 0)
        {
            if (isMirrorAvatar)
            {
                headBone.rotation = Quaternion.Euler((rotation.x+rotationOffset), (-rotation.y), -rotation.z);
                
            }

            else if (!isMirrorAvatar)
            {
                headBone.rotation = Quaternion.Euler((rotation.x+rotationOffset), (rotation.y), rotation.z);


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
            skinnedMeshRenderer.SetBlendShapeWeight(i, blendshapes_[i + 5]);
        }

        skinnedMeshRenderer.SetBlendShapeWeight(12, blendshapes_[13 + 5]);
        skinnedMeshRenderer.SetBlendShapeWeight(13, blendshapes_[14 + 5]);
        skinnedMeshRenderer.SetBlendShapeWeight(14, blendshapes_[15 + 5]);
        skinnedMeshRenderer.SetBlendShapeWeight(15, blendshapes_[17 + 5]);
        skinnedMeshRenderer.SetBlendShapeWeight(16, blendshapes_[16 + 5]);
        skinnedMeshRenderer.SetBlendShapeWeight(17, blendshapes_[20 + 5]);
        skinnedMeshRenderer.SetBlendShapeWeight(18, blendshapes_[19+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(19, blendshapes_[18+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(20, blendshapes_[24+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(21, blendshapes_[21+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(22, blendshapes_[22+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(23, blendshapes_[23+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(24, blendshapes_[26+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(25, blendshapes_[25+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(26, blendshapes_[27+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(27, blendshapes_[28+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(28, blendshapes_[30+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(29, blendshapes_[29+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(30, blendshapes_[32+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(31, blendshapes_[31+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(32, blendshapes_[34+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(33, blendshapes_[33+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(34, blendshapes_[35+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(35, blendshapes_[36+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(36, blendshapes_[37+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(37, blendshapes_[38+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(38, blendshapes_[50+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(39, blendshapes_[39+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(40, blendshapes_[41+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(41, blendshapes_[42+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(42, blendshapes_[43+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(43, blendshapes_[45+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(44, blendshapes_[44+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(45, blendshapes_[46+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(46, blendshapes_[47+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(47, blendshapes_[48+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(48, blendshapes_[49+5]);
        skinnedMeshRenderer.SetBlendShapeWeight(49, blendshapes_[50+5]);

    }

    public void SetIsMirrorAvatar(bool val)
    {
        isMirrorAvatar = val;
    }

    public void SetRotationOffset(float val)
    {
        rotationOffset = val;
    }
}
