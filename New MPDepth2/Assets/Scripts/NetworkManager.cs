using MPDepthCore;
using MPDepthCore.Calibration.Camera;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using System;
using ReadyPlayerMe;
using OffAxisCamera;

public class NetworkManager : MonoBehaviour
{
    public static NetworkManager instance;
    [SerializeField] MPDepthTrackingData trackingData;
    [SerializeField] TrackingSystemsManager trackingSystemsManager;
    [SerializeField] Vector3 position;
    [SerializeField] Vector3 eulers;
    [SerializeField] float[] blendshapes;
    [SerializeField] bool isOtherPlayerTracking;
    [SerializeField] ProjectionPlaneCamera dyadicCamera;
    
    public bool isConnected;
    PhotonView view;
    [SerializeField] public Int32 otherPlayerAvatarID;
    public string currentAvatarURL;
    public string otherAvatarURL;
    public bool OtherPlayerMirrorMode;
    Vector3 otherPlayerCalibrationTranslation, otherPlayerCalibrationRotation;


    private void Awake()
    {
        instance = this;
        currentAvatarURL = "";

    }

    private void Start()
    {
        view = GetComponent<PhotonView>();
        isOtherPlayerTracking = false;
    }
    private void Update()
    {

        //trackingData = trackingSystemsManager.CurrentCalibratedTrackingData;
        trackingData = trackingSystemsManager.CurrentTrackingSystem.trackingSource.GetRawTrackingData();
        if (isConnected)
        {
            //view.RPC("SetIsOtherPlayerTracking", RpcTarget.OthersBuffered, TrackingSystemsManager.instance.CurrentCalibratedTrackingData.IsTracking);
            view.RPC("SetOtherPlayerData", RpcTarget.Others, trackingData.CameraTrackingData.Position, trackingData.CameraTrackingData.Eulers, trackingData.BlendshapeTrackingData.Blendshapes);
            view.RPC("SetOtherPlayerCalibration", RpcTarget.Others, trackingSystemsManager.GetCalibrationTransform().position, trackingSystemsManager.GetCalibrationTransform().rotation);
        }

        dyadicCamera.SetOtherPlayerCalibration(otherPlayerCalibrationTranslation, otherPlayerCalibrationRotation);
        dyadicCamera.SetOtherPlayerPosition(position);

    }

    [PunRPC]
    private void SetOtherPlayerData(Vector3 position_, Vector3 rotation_, float[] blendshapes_)
    {
        position = new Vector3(position_.x, -position_.y, position_.z);
        eulers = rotation_;
        blendshapes = blendshapes_;
    }

    [PunRPC]
    private void SetOtherPlayerCalibration(Vector3 position, Quaternion rotation)
    {
        otherPlayerCalibrationTranslation = position;
        otherPlayerCalibrationRotation = rotation.eulerAngles;
    }

    [PunRPC]
    public void SetIsConnected(bool val)
    {
        isConnected = val;
    }

    public float[] GetBlendshapes()
    {
        return blendshapes;
    }

    public Vector3 GetPosition()
    {
        return position;
    }

    public Vector3 GetEulers()
    {
        return eulers;
    }

    [PunRPC]
    public void SetIsOtherPlayerTracking(bool val)
    {
        isOtherPlayerTracking = val;
    }

    public bool GetIsOtherPlayerTracking()
    {
        return isOtherPlayerTracking;
    }

    public PhotonView GetView()
    {
        return view;
    }

    [PunRPC]
    public void SetAvatarID(Int32 val)
    {
        otherPlayerAvatarID = val;
        if(OtherPlayerMirrorMode == false) CharacterSelector.instance.UpdateAvatar(otherPlayerAvatarID, false);
    }

    public void UpdateAvatar()
    {
        if (otherPlayerAvatarID > 0) CharacterSelector.instance.UpdateAvatar(otherPlayerAvatarID, true);
    }

    [PunRPC]

    public void LoadAvatar(string url)
    {
        Debug.Log("LoadAvatar Call");
        otherAvatarURL = url;
        ReadyPlayerLoader.instance.BeginLoadCharacter(url, false);
    }

    public void SetURL(string url)
    {
        currentAvatarURL = url;
        ReadyPlayerLoader.instance.BeginLoadCharacter(url, true);
        view.RPC("LoadAvatar", RpcTarget.OthersBuffered, url);
    }

    public string GetURL()
    {
        return currentAvatarURL;
    }
    [PunRPC]
    public void SetOtherPlayerMirrorMode(bool val)
    {
        OtherPlayerMirrorMode = val;
    }

}
    
   
