using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class CharacterSelector : MonoBehaviour
{
    [SerializeField] Character[] characters;
    [SerializeField] ARFaceManager faceManager;
    [SerializeField] GameObject temp;
    [SerializeField] GameObject currentAvatar;
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

    public void OnCharacterSelected(Int32 index)
    {

        
        /*Vector3 position = currentAvatar.transform.position;
        Destroy(currentAvatar);
        currentAvatar = Instantiate(characters[index].GetScenePrefab(), position, Quaternion.Euler(0, 180 ,0));
        faceManager.facePrefab = characters[index].GetPrefab();*/
        networkManager.GetView().RPC("SetAvatarID", Photon.Pun.RpcTarget.Others, index);
        // change the ar face
        // destroy the current face
        // instantiate a new face
        // remove the unneccessary components
    }

    public void UpdateAvatar(Int32 index)
    {
        Vector3 position = currentAvatar.transform.position;
        Destroy(currentAvatar);
        currentAvatar = Instantiate(characters[index].GetScenePrefab(), position, Quaternion.Euler(0, 180 ,0));
        faceManager.facePrefab = characters[index].GetPrefab();
    }
}
