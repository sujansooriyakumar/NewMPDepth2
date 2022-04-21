using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class CalibrationAdjustmentSlider : MonoBehaviour {

    [SerializeField] Slider slider = default;
    [SerializeField] TMP_InputField inputField;
    [SerializeField] float adjustmentFactor = 1;

    [SerializeField] float minValue = float.NegativeInfinity;
    [SerializeField] float maxValue = float.PositiveInfinity;
    
    public void ValueChanged() {
        float amount = slider.value * adjustmentFactor;
        if (string.IsNullOrEmpty(inputField.text)) return;
        float oldValue = float.Parse(inputField.text);
        float newValue = oldValue + amount;
        newValue = Mathf.Clamp(newValue, minValue, maxValue);
        inputField.text = newValue.ToString(CultureInfo.InvariantCulture);
        slider.value = 0;
    }
    
    
    
}
