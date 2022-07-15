using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShowAvatarWindow : MonoBehaviour
{
    [SerializeField] GameObject mainWindow;
    [SerializeField] GameObject avatarWindow;
   public void DisplayAvatarWindow()
    {
        mainWindow.SetActive(false);
        avatarWindow.SetActive(true);
    }

    public void Return()
    {
        mainWindow.SetActive(true);
        avatarWindow.SetActive(false);
    }
}
