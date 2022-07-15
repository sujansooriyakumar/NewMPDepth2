using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShowSettingsWindow : MonoBehaviour
{
    [SerializeField] GameObject mainWindow;
    public void ShowSettings()
    {
        mainWindow.SetActive(true);
    }

    
}
