using System.Collections;
using System.Collections.Generic;
using System.Net;
using StreamTrackingSystem;
using UnityEngine;
using UnityEngine.UI;

public class DisplayDeviceStreamUI : MonoBehaviour
{
    [SerializeField] GameObject deviceStreamInput;
    [SerializeField] StreamTrackingDataReceiver streamTrackingDataReceiver;
    [SerializeField] TrackingIPSave trackingIPSave;

    public void DisplayDeviceStream(int index)
    {
        if(index == 2)
        {
            deviceStreamInput.SetActive(true);
        }
        else
        {
            deviceStreamInput.SetActive(false);
        }
    }

    public void SubmitDeviceStream()
    {
        streamTrackingDataReceiver.SetIP(IPAddress.Parse(GetComponent<InputField>().text));
        trackingIPSave.Save();
        StartCoroutine(ResetReceiver());
    }

    IEnumerator ResetReceiver()
    {
        streamTrackingDataReceiver.enabled = false;
        yield return new WaitForSeconds(1);
        streamTrackingDataReceiver.enabled = true;
    }
}
