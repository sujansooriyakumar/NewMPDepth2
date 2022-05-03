using System.Collections;
using System.Collections.Generic;
using MPDepthCore.Calibration.Camera;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;

public class DebugDisplay : MonoBehaviour
{
    Text t;
    [SerializeField] ARFaceManager faceManager;

    // Start is called before the first frame update
    void Start()
    {
        t = GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {
    }
}
