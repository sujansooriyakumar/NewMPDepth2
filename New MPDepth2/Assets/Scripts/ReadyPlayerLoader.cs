using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

namespace ReadyPlayerMe
{
    public class ReadyPlayerLoader : MonoBehaviour
    {
        public static ReadyPlayerLoader instance;
        AvatarLoader avatarLoader;
        [SerializeField] Vector3 position;
        [SerializeField] Text urlInput;
        [SerializeField] GameObject urlCanvas;
        [SerializeField] URLParse urlParser;
        [SerializeField] GameObject currentAvatar;

        private void Awake()
        {
            instance = this;
        }
        private void AvatarImportedCallback(GameObject avatar)
        {
            Debug.Log("Avatar imported!");
            Debug.Log(avatar.name);
                 
            //AssetDatabase.CreateAsset(temp, path);
            //AssetDatabase.SaveAssets();
            
        }

        private void AvatarLoadedCallback(GameObject avatar, AvatarMetaData metaData)
        {

            Debug.Log("Avatar loaded!");
            avatar.transform.position = position;
            Destroy(currentAvatar);
            Transform[] children = avatar.transform.GetComponentsInChildren<Transform>();
            foreach(Transform child in children)
            {
                if(child.gameObject.name == "LeftHand" || child.gameObject.name == "RightHand")
                {
                    child.localScale = new Vector3(0, 0, 0);
                }
            }
            avatar.AddComponent<ReceiveBlendshapes>();
            currentAvatar = avatar;
            /*Character temp = ScriptableObject.CreateInstance<Character>();
            temp.name = "Temp";
            temp.SetPrefab(avatar);
            AssetDatabase.CreateAsset(temp, "Assets/Avatars/test.asset");*/
            

        }

     
        public void BeginLoadCharacter(string url)
        {

            avatarLoader = new AvatarLoader();
            Debug.Log(urlParser.GetURL());
            if(NetworkManager.instance.isConnected == false) avatarLoader.LoadAvatar(urlParser.GetURL(), AvatarImportedCallback, AvatarLoadedCallback);
            else
            {
                NetworkManager.instance.GetView().RPC("LoadAvatar", Photon.Pun.RpcTarget.OthersBuffered, urlParser.GetURL());
            }
            urlCanvas.SetActive(false);

        }

      
    }
}
