using System.Collections;
using System.Collections.Generic;
using OffAxisCamera;
using ReadyPlayerMe;
using UnityEngine;
using UnityEngine.UI;

public class MirrorModeController : MonoBehaviour
{
    [SerializeField] private bool mirrorMode;
    [SerializeField] Text text;
    [SerializeField] Camera dyadicCamera;
    [SerializeField] Camera mirrorCamera;
    [SerializeField] OffAxisCameraRig currentCamera;

    [SerializeField] Vector2 insetPosition;
    [SerializeField] Vector3 insetSize;

    [SerializeField] Vector2 mainPosition;
    [SerializeField] Vector2 mainSize;
    public static MirrorModeController instance;
    string otherPlayerURL;

    private void Awake()
    {
        instance = this;
    }

    public void ToggleMirrorMode()
    {

        if (mirrorMode)
        {
            mirrorCamera.rect = new Rect(insetPosition, insetSize);
            dyadicCamera.rect = new Rect(mainPosition, mainSize);
            mirrorCamera.depth = 1;
            dyadicCamera.depth = 0;
            mirrorCamera.gameObject.GetComponent<TrackingReceiver>().enabled = false;
            dyadicCamera.gameObject.GetComponent<TrackingReceiver>().enabled = true;
            currentCamera = dyadicCamera.GetComponentInParent<OffAxisCameraRig>();
            text.text = "Window Mode";
            mirrorMode = false;
        }

        else
        {
            dyadicCamera.rect = new Rect(insetPosition, insetSize);
            mirrorCamera.rect = new Rect(mainPosition, mainSize);
            dyadicCamera.depth = 1;
            mirrorCamera.depth = 0;
            dyadicCamera.gameObject.GetComponent<TrackingReceiver>().enabled = false;
            mirrorCamera.gameObject.GetComponent<TrackingReceiver>().enabled = true;
            currentCamera = mirrorCamera.GetComponentInParent<OffAxisCameraRig>();

            text.text = "Mirror Mode";
            mirrorMode = true;
        }
        //if (mirrorMode)
        //{
        //    mirrorMode = false;
        //    if(NetworkManager.instance.otherAvatarURL != "") ReadyPlayerLoader.instance.BeginLoadCharacter(NetworkManager.instance.otherAvatarURL);
        //    else if(NetworkManager.instance.otherPlayerAvatarID > 0 && NetworkManager.instance.OtherPlayerMirrorMode == false)
        //    {
        //        NetworkManager.instance.GetView().RPC("SetAvatarID", Photon.Pun.RpcTarget.OthersBuffered, CharacterSelector.instance.index);
        //        CharacterSelector.instance.UpdateAvatar(NetworkManager.instance.otherPlayerAvatarID, false);
        //    }
        //    GameObject avatar = FindObjectOfType<ReceiveBlendshapes>().gameObject;
        //    avatar.transform.localScale = new Vector3(-1, 1, 1);

        //    text.text = "Dyadic Mode";
        //}
        //else
        //{
        //    mirrorMode = true;
        //    if (NetworkManager.instance.currentAvatarURL != "")
        //    {
        //        ReadyPlayerLoader.instance.BeginLoadCharacter(NetworkManager.instance.currentAvatarURL);
        //    }
        //    else if (NetworkManager.instance.otherPlayerAvatarID > 0)
        //    {
        //        NetworkManager.instance.GetView().RPC("SetAvatarID", Photon.Pun.RpcTarget.OthersBuffered, CharacterSelector.instance.index);
        //        CharacterSelector.instance.UpdateAvatar(CharacterSelector.instance.index);
        //    }
        //    GameObject avatar = FindObjectOfType<ReceiveBlendshapes>().gameObject;
        //    avatar.transform.localScale = new Vector3(1, 1, 1);
        //    text.text = "Mirror Mode";
        //}
        //NetworkManager.instance.GetView().RPC("SetOtherPlayerMirrorMode", Photon.Pun.RpcTarget.OthersBuffered, mirrorMode);
    }

    public bool GetMirrorMode()
    {
        return mirrorMode;
    }

    public OffAxisCameraRig GetCurrentCamera()
    {
        return currentCamera;
    }
   
}
