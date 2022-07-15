using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HideMainWindow : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] GameObject mainWindow;
    public void HideWindow()
    {
        mainWindow.SetActive(false);
    }
}
