using System.Collections;
using System.Collections.Generic;
using OffAxisCamera;
using UnityEngine;
using UnityEngine.UI;

public class ParallaxControl : MonoBehaviour
{
    [SerializeField] OffAxisCameraRig offAxisCamera;
    [SerializeField] Sprite playSprite;
    [SerializeField] Sprite stopSprite;
    

    public void ToggleParallax()
    {
        MirrorModeController mirrorModeController = MirrorModeController.instance;
        Image i = GetComponent<Image>();
        if (mirrorModeController.GetCurrentCamera().GetTrackingDisabled())
        {
            mirrorModeController.GetCurrentCamera().EnableCameraTracking();
            i.sprite = playSprite;
            GetComponentInChildren<Text>().text = "MPDepth On";
        }
        else
        {
            mirrorModeController.GetCurrentCamera().DisableCameraTracking();
            i.sprite = stopSprite;
            GetComponentInChildren<Text>().text = "MPDepth Off";
        }
    }
}
