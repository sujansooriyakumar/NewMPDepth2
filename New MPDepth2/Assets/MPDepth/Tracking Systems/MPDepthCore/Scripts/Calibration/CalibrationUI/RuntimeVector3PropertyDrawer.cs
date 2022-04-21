using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using JetBrains.Annotations;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UIElements;


[ExecuteInEditMode]
public class RuntimeVector3PropertyDrawer : MonoBehaviour {

    [SerializeField] UnityEvent<Vector3> VectorChangedEvent = default;
    
    [SerializeField] string PropertyName = "SomeVector3";

    [SerializeField] Vector3 vector = default;

    [SerializeField] Vector3 minVector = Vector3.negativeInfinity;
    [SerializeField] Vector3 maxVector = Vector3.positiveInfinity;
    
    [PublicAPI]
    public Vector3 Vector => vector;
    
    [Space]
    [SerializeField] TMP_Text propertyNameLabel = default;

    [SerializeField] TMP_InputField xField = default;
    [SerializeField] TMP_InputField yField = default;
    [SerializeField] TMP_InputField zField = default;
    
    
    public void UpdateValuesFromFields()
    {
        if (propertyNameLabel != null) {
            propertyNameLabel.text = PropertyName;
        }
        
        UpdateVectorField(xField, out vector.x, minVector.x, maxVector.x);
        UpdateVectorField(yField, out vector.y,  minVector.y, maxVector.y);
        UpdateVectorField(zField, out vector.z, minVector.z, maxVector.z);

        VectorChangedEvent?.Invoke(vector);
    }

  

    static void UpdateVectorField(TMP_InputField inputField, out float valueToUpdate, float min, float max) {
        try {
            if (inputField != null && !string.IsNullOrEmpty(inputField.text)) {
                float toUpdate = float.Parse(inputField.text);
                float clamped = Mathf.Clamp(toUpdate, min, max);
                inputField.SetTextWithoutNotify(clamped.ToString(CultureInfo.InvariantCulture));
                valueToUpdate = clamped;
            }
            else {
                valueToUpdate = 0;
            }
        }
        catch (FormatException) {
            Debug.LogError($"{inputField.name} field value not in correct format >{inputField.text}<");
            valueToUpdate = 0;
        }
    }

    public void VectorModifiedExternally(Vector3 newVector) {
        newVector.x = Mathf.Clamp(newVector.x, minVector.x, maxVector.x);
        newVector.y = Mathf.Clamp(newVector.y, minVector.y, maxVector.y);
        newVector.z = Mathf.Clamp(newVector.z, minVector.z, maxVector.z);
        xField.text = newVector.x.ToString(CultureInfo.InvariantCulture);
        yField.text = newVector.y.ToString(CultureInfo.InvariantCulture);
        zField.text = newVector.z.ToString(CultureInfo.InvariantCulture);
    }
    
}
