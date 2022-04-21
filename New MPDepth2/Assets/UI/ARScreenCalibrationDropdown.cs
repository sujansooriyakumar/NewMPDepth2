using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class ARScreenCalibrationDropdown : MonoBehaviour
{
    [SerializeField] List<RotatableScreenDimensionAsset> calibrations;
    [SerializeField] RotatableDeviceScreen rotatableScreenCalibrator;
    [SerializeField] GameObject UI;
    private int index;

    private void Start()
    {
        Dropdown dropdown = GetComponent<Dropdown>();
        for (int i = 0; i < calibrations.Count; i++)
        {
            if (calibrations[i].calibration.Name != "")
            {
                dropdown.options.Add(new Dropdown.OptionData());
                dropdown.options[i].text = calibrations[i].calibration.Name;
            }
        }
    }

    public void OnValueChanged()
    {
        Dropdown dropdown = GetComponent<Dropdown>();
        index = dropdown.value;
    }

    public void Submit()
    {
        rotatableScreenCalibrator.SelectCalibration(index);
        UI.SetActive(false);
    }

    public void Cancel()
    {
        UI.SetActive(false);
    }
}
