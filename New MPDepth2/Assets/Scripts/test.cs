using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class test : MonoBehaviour
{
    [SerializeField] ARFaceManager faceManager;

    private void Update()
    {
        ARKitBlendShapeVisualizer blendshapeVisualizer = faceManager.facePrefab.GetComponent<ARKitBlendShapeVisualizer>();
        Debug.Log(blendshapeVisualizer.name);
    }
}
