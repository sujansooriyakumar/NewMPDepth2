using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Voice;
using Photon.Voice.Unity;

public class FixSpeakerDelay : MonoBehaviour
{
    public Speaker speaker;
    private void Awake()
    {
        PlaybackDelaySettings delaySettings = new PlaybackDelaySettings();
        delaySettings.MaxDelayHard = 1;
        delaySettings.MaxDelaySoft = 1;
        delaySettings.MinDelaySoft = 0;
        speaker.SetPlaybackDelaySettings(delaySettings);
    }
}
