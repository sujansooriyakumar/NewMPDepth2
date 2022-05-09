using System.Collections;
using System.Collections.Generic;
using ReadyPlayerMe;
using UnityEngine;
using UnityEngine.UI;

public class MirrorModeController : MonoBehaviour
{
    [SerializeField] private bool mirrorMode;
    [SerializeField] Text text;
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
            mirrorMode = false;
            if(NetworkManager.instance.otherAvatarURL != "") ReadyPlayerLoader.instance.BeginLoadCharacter(NetworkManager.instance.otherAvatarURL);
            else if(NetworkManager.instance.otherPlayerAvatarID > 0 && NetworkManager.instance.OtherPlayerMirrorMode == false)
            {
                NetworkManager.instance.GetView().RPC("SetAvatarID", Photon.Pun.RpcTarget.OthersBuffered, CharacterSelector.instance.index);
                CharacterSelector.instance.UpdateAvatar(NetworkManager.instance.otherPlayerAvatarID);
            }
            GameObject avatar = FindObjectOfType<ReceiveBlendshapes>().gameObject;
            avatar.transform.localScale = new Vector3(-1, 1, 1);
            
            text.text = "Dyadic Mode";
        }
        else
        {
            mirrorMode = true;
            if (NetworkManager.instance.currentAvatarURL != "")
            {
                ReadyPlayerLoader.instance.BeginLoadCharacter(NetworkManager.instance.currentAvatarURL);
            }
            else if (NetworkManager.instance.otherPlayerAvatarID > 0)
            {
                NetworkManager.instance.GetView().RPC("SetAvatarID", Photon.Pun.RpcTarget.OthersBuffered, CharacterSelector.instance.index);
                CharacterSelector.instance.UpdateAvatar(CharacterSelector.instance.index);
            }
            GameObject avatar = FindObjectOfType<ReceiveBlendshapes>().gameObject;
            avatar.transform.localScale = new Vector3(1, 1, 1);
            text.text = "Mirror Mode";
        }
        NetworkManager.instance.GetView().RPC("SetOtherPlayerMirrorMode", Photon.Pun.RpcTarget.OthersBuffered, mirrorMode);
    }

    public bool GetMirrorMode()
    {
        return mirrorMode;
    }
}
