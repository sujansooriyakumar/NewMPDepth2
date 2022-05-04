using System.Collections;
using System.Collections.Generic;
using OffAxisCamera;
using UnityEngine;
using UnityEngine.UI;

public class ParallaxControl : MonoBehaviour
{
    [SerializeField] OffAxisCameraRig offAxisCamera;
    

    public void ToggleParallax()
    {
        if (offAxisCamera.GetTrackingDisabled())
        {
            offAxisCamera.EnableCameraTracking();
            GetComponentInChildren<Text>().text = "MP On";
        }
        else
        {
            offAxisCamera.DisableCameraTracking();
            GetComponentInChildren<Text>().text = "MP Off";
        }
    }
}
