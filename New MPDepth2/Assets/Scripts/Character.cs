using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]
public class Character : ScriptableObject
{
    [SerializeField] string Gender;
    [SerializeField] GameObject characterPrefab;
    [SerializeField] GameObject scenePrefab;
    [SerializeField] bool isReadyPlayer;

    public GameObject GetPrefab()
    {
        return characterPrefab;
    }

    public GameObject GetScenePrefab()
    {
        return scenePrefab;
    }

    public bool GetIsReadyPlayer()
    {
        return isReadyPlayer;
    }

    public void SetPrefab(GameObject go)
    {
        characterPrefab = go;
    }
  
}
