using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HideUI : MonoBehaviour
{
    [SerializeField] GameObject[] buttons;
    bool status = true;
    public void DisableUI()
    {
        if (status)
        {
            foreach (GameObject button in buttons)
            {
                button.SetActive(false);
            }
            status = false;
        }

        else
        {
            foreach (GameObject button in buttons)
            {
                button.SetActive(true);
            }
            status = true;
        }
    }
}
