using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class CharacterSelector : MonoBehaviour
{
    [SerializeField] Character[] characters;
    [SerializeField] ARFaceManager faceManager;
    [SerializeField] GameObject dyadicAvatar;
    [SerializeField] GameObject mirrorAvatar;
    [SerializeField] Transform dyadicAvatarParent;
    [SerializeField] Transform dyadicSlothParent;

    [SerializeField] Transform mirrorAvatarParent;
    [SerializeField] Transform mirrorSlothParent;
    public int index;
    public NetworkManager networkManager;
    public static CharacterSelector instance;

    public GameObject currentAvatar;


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
        if (networkManager.isConnected)
        {
            networkManager.GetView().RPC("SetAvatarID", Photon.Pun.RpcTarget.OthersBuffered, index);
            //UpdateAvatar(index, true);
        }

        if (!networkManager.isConnected || MirrorModeController.instance.GetMirrorMode())
        {

        }
        UpdateAvatar(index, true);


        // change the ar face
        // destroy the current face
        // instantiate a new face
        // remove the unneccessary components
    }

    public void UpdateAvatar(Int32 index, bool self)
    {
        currentAvatar = null;
        Transform avatarParent = null;
        Transform slothParent = null;
        int layer = 0;
        if (self)
        {
        
            avatarParent = mirrorAvatarParent;
            slothParent = mirrorSlothParent;
            layer = 7;
            Destroy(mirrorAvatar);
            mirrorAvatar = Instantiate(characters[index].GetScenePrefab(), Vector3.zero, Quaternion.Euler(0, 0, 0));
            mirrorAvatar.transform.parent = avatarParent;
            mirrorAvatar.layer = layer;
            mirrorAvatar.GetComponent<ReceiveBlendshapes>().SetIsMirrorAvatar(true);
            if (characters[index].GetIsReadyPlayer())
            {
                mirrorAvatar.transform.parent = avatarParent;
            }
            else
            {
                mirrorAvatar.transform.parent = slothParent;
            }
            mirrorAvatar.transform.localPosition = Vector3.zero;
            mirrorAvatar.transform.localRotation = Quaternion.Euler(new Vector3(0, 0, 0));

            Transform[] children = mirrorAvatar.GetComponentsInChildren<Transform>();
            foreach(Transform child in children)
            {
                child.gameObject.layer = layer;
            }
            mirrorAvatar.transform.localScale = new Vector3(1, 1, 1);

        }
        if (!self)
        {
            avatarParent = dyadicAvatarParent;
            slothParent = dyadicSlothParent;
            layer = 6;

            Destroy(dyadicAvatar);
            dyadicAvatar = Instantiate(characters[index].GetScenePrefab(), Vector3.zero, Quaternion.Euler(0, 0, 0));
            dyadicAvatar.transform.parent = avatarParent;
            dyadicAvatar.layer = layer;
            dyadicAvatar.transform.localPosition = Vector3.zero;
            dyadicAvatar.transform.localRotation = Quaternion.Euler(new Vector3(0, 0, 0));
            dyadicAvatar.GetComponent<ReceiveBlendshapes>().SetIsMirrorAvatar(false);
            if (characters[index].GetIsReadyPlayer())
            {
                dyadicAvatar.transform.parent = avatarParent;
            }
            else
            {
                dyadicAvatar.transform.parent = slothParent;
            }

            Transform[] children = dyadicAvatar.GetComponentsInChildren<Transform>();
            foreach (Transform child in children)
            {
                child.gameObject.layer = layer;
            }
            dyadicAvatar.transform.localScale = new Vector3(1, 1, 1);
        }
        
        //characters[index].GetPrefab().GetComponent<ARKitBlendShapeVisualizer>().CreateFeatureBlendMapping();
        faceManager.facePrefab = characters[index].GetPrefab();

        


    }

  
    public void SetDyadicAvatar(GameObject go)
    {
        dyadicAvatar = go;
    }

    public void SetMirrorAvatar(GameObject go)
    {
        mirrorAvatar = go;
    }

    public GameObject GetDyadicAvatar()
    {
        return dyadicAvatar;
    }
    public GameObject GetMirrorAvatar()
    {
        return mirrorAvatar;
    }
   


    public void DestroyDyadicAvatar()
    {
        Destroy(dyadicAvatar);
    }

    public void DestroyMirrorAvatar()
    {
        Destroy(mirrorAvatar);
    }
}
