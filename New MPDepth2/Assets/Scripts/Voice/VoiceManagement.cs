using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Voice;
using Photon.Voice.Unity;

public class VoiceManagement : MonoBehaviour
{
    [SerializeField] VoiceConnection connection;
    [SerializeField] Recorder recorder;
    [SerializeField] Speaker speaker;
    // Start is called before the first frame update
    void Start()
    {
        recorder.Init(connection);
    }

    
}
