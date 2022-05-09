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
        [SerializeField] Transform avatarParent;

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
            avatar.transform.parent = avatarParent;
            CharacterSelector.instance.DestroyCurrentAvatar();
            CharacterSelector.instance.SetCurrentAvatar(avatar);
            avatar.transform.localPosition = Vector3.zero;
            Transform[] children = avatar.transform.GetComponentsInChildren<Transform>();
            foreach(Transform child in children)
            {
                if(child.gameObject.name == "LeftHand" || child.gameObject.name == "RightHand")
                {
                    child.localScale = new Vector3(0, 0, 0);
                }
            }
            avatar.AddComponent<ReceiveBlendshapes>();
            if (MirrorModeController.instance.GetMirrorMode())
            {
                avatar.transform.localScale = new Vector3(1, 1, 1);
            }
            else
            {
                avatar.transform.localScale = new Vector3(-1, 1, 1);
            }
            /*Character temp = ScriptableObject.CreateInstance<Character>();
            temp.name = "Temp";
            temp.SetPrefab(avatar);
            AssetDatabase.CreateAsset(temp, "Assets/Avatars/test.asset");*/
            

        }

     
        public void BeginLoadCharacter(string url)
        {
            avatarLoader = new AvatarLoader();
            Debug.Log(url);
            avatarLoader.LoadAvatar(url, AvatarImportedCallback, AvatarLoadedCallback);
            
            //urlCanvas.SetActive(false);

        }

      
    }
}
