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
        MirrorModeController mirrorModeController = MirrorModeController.instance;
        if (mirrorModeController.GetCurrentCamera().GetTrackingDisabled())
        {
            mirrorModeController.GetCurrentCamera().EnableCameraTracking();
            GetComponentInChildren<Text>().text = "MPDepth\nOn";
        }
        else
        {
            mirrorModeController.GetCurrentCamera().DisableCameraTracking();
            GetComponentInChildren<Text>().text = "MPDepth\nOff";
        }
    }
}
