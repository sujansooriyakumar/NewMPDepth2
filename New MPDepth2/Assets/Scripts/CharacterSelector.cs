using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class CharacterSelector : MonoBehaviour
{
    [SerializeField] Character[] characters;
    [SerializeField] ARFaceManager faceManager;
    [SerializeField] GameObject currentAvatar;
    [SerializeField] Transform avatarParent;
    [SerializeField] Transform slothParent;
    public int index;
    public NetworkManager networkManager;
    public static CharacterSelector instance;


    private void OnEnable()
    {
        instance = this;
    }

    private void Start()
    {
        networkManager = NetworkManager.instance;

    }

    public void OnCharacterSelected(Int32 index_)
    {
        index = index_;
        /*Vector3 position = currentAvatar.transform.position;
        Destroy(currentAvatar);
        currentAvatar = Instantiate(characters[index].GetScenePrefab(), position, Quaternion.Euler(0, 180 ,0));
        faceManager.facePrefab = characters[index].GetPrefab();*/
        if(networkManager.isConnected) networkManager.GetView().RPC("SetAvatarID", Photon.Pun.RpcTarget.OthersBuffered, index);

        if (!networkManager.isConnected || MirrorModeController.instance.GetMirrorMode())
        {
            UpdateAvatar(index);

        }
  
        
        // change the ar face
        // destroy the current face
        // instantiate a new face
        // remove the unneccessary components
    }

    public void UpdateAvatar(Int32 index)
    {
       
        Destroy(currentAvatar);
        currentAvatar = Instantiate(characters[index].GetScenePrefab(), Vector3.zero, Quaternion.Euler(0, 0 ,0));
        currentAvatar.transform.parent = avatarParent;
        //characters[index].GetPrefab().GetComponent<ARKitBlendShapeVisualizer>().CreateFeatureBlendMapping();
        faceManager.facePrefab = characters[index].GetPrefab();

        if (characters[index].GetIsReadyPlayer())
        {
            currentAvatar.transform.parent = avatarParent;
        }
        else
        {
            currentAvatar.transform.parent = slothParent;
        }
        currentAvatar.transform.localPosition = Vector3.zero;
        if (MirrorModeController.instance.GetMirrorMode())
        {
            currentAvatar.transform.localScale = new Vector3(1, 1, 1);
        }
        else
        {
            currentAvatar.transform.localScale = new Vector3(-1, 1, 1);
        }

    }

    public void SetCurrentAvatar(GameObject go)
    {
        currentAvatar = go;
    }

    public GameObject GetCurrentAvatar()
    {
        return currentAvatar;
    }

    public void DestroyCurrentAvatar()
    {
        Destroy(currentAvatar);
    }
}
