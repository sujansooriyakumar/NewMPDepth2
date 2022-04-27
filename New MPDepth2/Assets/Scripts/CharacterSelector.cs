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

    public void OnCharacterSelected(int index)
    {

        
        Vector3 position = currentAvatar.transform.position;
        Destroy(currentAvatar);
        currentAvatar = Instantiate(characters[index].GetScenePrefab(), position, Quaternion.Euler(0, 180 ,0));
        faceManager.facePrefab = characters[index].GetPrefab();

        // change the ar face
        // destroy the current face
        // instantiate a new face
        // remove the unneccessary components
    }
}
