using System.Collections;
using System.Collections.Generic;
using StreamTrackingSystem;
using System.Net;
using UnityEngine.UI;
using UnityEngine;
using MotiveTrackingStreamer;
using System;
using MPDepthCore;

public class uiController : MonoBehaviour
{
    [SerializeField] InputField deviceStreamInputField;
    [SerializeField] InputField streamCalibrationInputField;
    [SerializeField] StreamTrackingDataReceiver streamTrackingDataReceiver;
    [SerializeField] StreamTrackingDataReceiver motiveTrackingDataReceiver;
    [SerializeField] GameObject deviceStreamCanvas;
    [SerializeField] GameObject streamCalibrationCanvas;
    [SerializeField] StreamTrackingCalibrator streamTrackingCalibrator;
    [SerializeField] TrackingIPSave trackingIPSave;
    [SerializeField] GameObject connectionUI;
    [SerializeField] GameObject urlCanvas;

    public void SubmitDeviceStreamIP()
    {

        streamTrackingDataReceiver.SetIP(IPAddress.Parse(deviceStreamInputField.text));
        motiveTrackingDataReceiver.SetIP(IPAddress.Parse(deviceStreamInputField.text));
        trackingIPSave.Save();
        StartCoroutine(ResetReceiver());
        deviceStreamCanvas.SetActive(false);
    }

    public void CancelDeviceStreamIP()
    {
        deviceStreamInputField.text = "";
        deviceStreamCanvas.SetActive(false);
    }

    public void ShowDeviceStreamUI()
    {
        deviceStreamCanvas.SetActive(true);
    }

    IEnumerator ResetReceiver()
    {
        streamTrackingDataReceiver.enabled = false;
        motiveTrackingDataReceiver.enabled = false;
        yield return new WaitForSeconds(1);
        streamTrackingDataReceiver.enabled = true;
        motiveTrackingDataReceiver.enabled = true;
    }

    public void SetDistanceToScreen()
    {
        streamTrackingCalibrator.manualCalibrationDistance = float.Parse(streamCalibrationInputField.text);
        
        streamTrackingCalibrator.CalculateCalibrationFromTrackingInfo();
        streamCalibrationCanvas.SetActive(false);
    }

    

    public void CancelStreamCalibration()
    {
        streamCalibrationInputField.text = "";
        streamCalibrationCanvas.SetActive(false);
    }

    public void ShowConnectionUI(bool val)
    {
        connectionUI.SetActive(val);
    }

    public void ShowURLUI()
    {
        urlCanvas.SetActive(true);
    }

}
