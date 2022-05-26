using System.Collections;
using System.Collections.Generic;
using MPDepthCore.Calibration.Camera;
using Photon.Voice.Unity;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;

public class DebugDisplay : MonoBehaviour
{
    Text t;
    public Recorder r;

    // Start is called before the first frame update
    void Start()
    {
        t = GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {
        //t.text = "";
        //for(int i = 0; i < Microphone.devices.Length; i++)
        //{
        //    t.text += Microphone.devices[i].ToString();
        //    t.text += "\n";
        //}
        t.text = r.UnityMicrophoneDevice;
    }
}
 