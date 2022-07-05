using System.Collections;
using System.Collections.Generic;
using Photon.Voice.Unity;
using UnityEngine;


public class SetMicrophone : MonoBehaviour
{
    Recorder r;
    // Start is called before the first frame update
    void Start()
    {
        r = GetComponent<Recorder>();
        if(Microphone.devices.Length > 0) r.UnityMicrophoneDevice = Microphone.devices[1];

    }

    // Update is called once per frame
    void Update()
    {

    }
}
