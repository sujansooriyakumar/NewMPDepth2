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

        [SerializeField] GameObject dyadicAvatar;
        [SerializeField] GameObject mirrorAvatar;

        [SerializeField] Transform dyadicAvatarParent;
        [SerializeField] Transform dyadicSlothParent;

        [SerializeField] Transform mirrorAvatarParent;
        [SerializeField] Transform mirrorSlothParent;
        bool mirror;

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
            if (mirror)
            {
                avatar.transform.parent = mirrorAvatarParent;
                CharacterSelector.instance.DestroyMirrorAvatar();
                CharacterSelector.instance.SetMirrorAvatar(avatar);
                avatar.layer = 7;
                avatar.AddComponent<ReceiveBlendshapes>();
                avatar.GetComponent<ReceiveBlendshapes>().SetIsMirrorAvatar(true);
                avatar.transform.localPosition = Vector3.zero;

                

            }

            else if (!mirror)
            {
                avatar.transform.parent = dyadicAvatarParent;
                CharacterSelector.instance.DestroyDyadicAvatar();
                CharacterSelector.instance.SetDyadicAvatar(avatar);
                avatar.layer = 6;
                avatar.AddComponent<ReceiveBlendshapes>();
                avatar.GetComponent<ReceiveBlendshapes>().SetIsMirrorAvatar(false);
                avatar.transform.localPosition = Vector3.zero;
            }
       
            Transform[] children = avatar.transform.GetComponentsInChildren<Transform>();
            foreach(Transform child in children)
            {
                child.gameObject.layer = avatar.layer;
                if(child.gameObject.name == "LeftHand" || child.gameObject.name == "RightHand")
                {
                    child.localScale = new Vector3(0, 0, 0);
                    
                }
            }
            /*Character temp = ScriptableObject.CreateInstance<Character>();
            temp.name = "Temp";
            temp.SetPrefab(avatar);
            AssetDatabase.CreateAsset(temp, "Assets/Avatars/test.asset");*/
            

        }

     
        public void BeginLoadCharacter(string url, bool self)
        {
            mirror = self;
            avatarLoader = new AvatarLoader();
            Debug.Log(url);
            avatarLoader.LoadAvatar(url, AvatarImportedCallback, AvatarLoadedCallback);
            
            //urlCanvas.SetActive(false);

        }

      
    }
}
