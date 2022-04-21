using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class ARCalibrationDropdown : MonoBehaviour
{
    [SerializeField] List<RotatableDeviceConfig> calibrations;
    [SerializeField] RotatableDeviceTrackingCalibrationProvider rotatableDeviceTrackingCalibrationProvider;
    [SerializeField] RotatableDeviceScreen rotatableDeviceScreen;
    [SerializeField] GameObject UI;
    private int index;

    private void Start()
    {
        Dropdown dropdown = GetComponent<Dropdown>();
        for(int i = 0; i < calibrations.Count; i++)
        {
            if (calibrations[i].trackingCalibration.Name != "")
            {
                dropdown.options.Add(new Dropdown.OptionData());
                dropdown.options[i].text = calibrations[i].trackingCalibration.Name;
            }
        }
    }

    public void OnValueChanged()
    {
        Dropdown dropdown = GetComponent<Dropdown>();
        index = dropdown.value;
        Debug.Log(index);
    }

    public void Submit()
    { 
        rotatableDeviceTrackingCalibrationProvider.SelectCalibration(index);
        rotatableDeviceScreen.SelectCalibration(index);
        UI.SetActive(false);
    }

    public void Cancel()
    {
        UI.SetActive(false);
    }


}
