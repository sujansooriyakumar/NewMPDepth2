using MPDepthCore;
using MPDepthCore.Calibration.Camera;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using System;
using ReadyPlayerMe;

public class NetworkManager : MonoBehaviour
{
    public static NetworkManager instance;
    [SerializeField] MPDepthTrackingData trackingData;
    [SerializeField] TrackingSystemsManager trackingSystemsManager;
    [SerializeField] Vector3 position;
    [SerializeField] Vector3 eulers;
    [SerializeField] float[] blendshapes;
    [SerializeField] bool isOtherPlayerTracking;
    public bool isConnected;
    PhotonView view;
    [SerializeField] Int32 otherPlayerAvatarID;
    private void Awake()
    {
        instance = this;

    }

    private void Start()
    {
        view = GetComponent<PhotonView>();
        isOtherPlayerTracking = false;
    }
    private void Update()
    {

        trackingData = trackingSystemsManager.CurrentCalibratedTrackingData;
        if (isConnected)
        {
            view.RPC("SetIsOtherPlayerTracking", RpcTarget.Others);
            view.RPC("SetOtherPlayerData", RpcTarget.Others, trackingData.CameraTrackingData.Position, trackingData.CameraTrackingData.Eulers, trackingData.BlendshapeTrackingData.Blendshapes);
            
        }
    }

    [PunRPC]
    private void SetOtherPlayerData(Vector3 position_, Vector3 rotation_, float[] blendshapes_)
    {
        position = position_;
        eulers = rotation_;
        blendshapes = blendshapes_;
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
    public void SetIsOtherPlayerTracking()
    {
        isOtherPlayerTracking = trackingSystemsManager.CurrentCalibratedTrackingData.IsTracking;
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
        CharacterSelector.instance.UpdateAvatar(otherPlayerAvatarID);
    }

    public void UpdateAvatar()
    {
        if(otherPlayerAvatarID > 0) CharacterSelector.instance.UpdateAvatar(otherPlayerAvatarID);
    }

    [PunRPC]

    public void LoadAvatar(string url)
    {
        ReadyPlayerLoader.instance.BeginLoadCharacter(url);
    }
   
}
