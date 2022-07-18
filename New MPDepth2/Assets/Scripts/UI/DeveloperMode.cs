using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class DeveloperMode : MonoBehaviour
{
    [SerializeField] TMP_InputField inputField;
    [SerializeField] GameObject calibrationBreakerCanvas;
    
    bool authenticated;

    public void SubmitPassword()
    {
        if(inputField.text == "b10Motion")
        {
            authenticated = true;
            calibrationBreakerCanvas.SetActive(true);
            gameObject.SetActive(false);
        }
    }
}
