using MPDepthCore;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReceiveBlendshapes : MonoBehaviour
{
    [SerializeField] NetworkManager networkManager;
    SkinnedMeshRenderer skinnedMeshRenderer;
    private void Start()
    {
        skinnedMeshRenderer = GetComponentInChildren<SkinnedMeshRenderer>();
    }
    private void Update()
    {
        float[] blendshapes = networkManager.GetBlendshapes();
        //transform.position = networkManager.GetPosition();
        transform.rotation = Quaternion.Euler(networkManager.GetEulers());
        for(int i = 0; i < blendshapes.Length; i++)
        {
            skinnedMeshRenderer.SetBlendShapeWeight(i, blendshapes[i]);
        }
    }
}
