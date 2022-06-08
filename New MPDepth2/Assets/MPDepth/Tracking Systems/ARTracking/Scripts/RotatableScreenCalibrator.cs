using System.Threading.Tasks;
using MPDepthCore.Calibration;
using MPDepthCore.Calibration.Screen;
using OffAxisCamera;
using UnityEngine;

public class RotatableScreenCalibrator : ScreenCalibrator
{
    [SerializeField]
    Transform insideScreen;
    [SerializeField]
    Transform outsideScreen;

    [SerializeField] GameObject calibrationUI;

    [SerializeField]
    float amount = 1f / 2000f;
    [SerializeField]
    float altAmt = 0.025f;


    bool calibrating = false;
    RotatableDeviceScreen.SavedRotatableScreenCalibration calibration;
    bool cancelled;

  /*  public async Task<bool> StartCalibration(RotatableDeviceScreen.SavedRotatableScreenCalibration newCalibration)
    {

        calibration = newCalibration;
        cancelled = false;
        calibrating = true;

        calibration.Name = string.Empty;

        this.insideScreen.gameObject.SetActive(true);
        this.outsideScreen.gameObject.SetActive(true);
        calibrationUI.SetActive(true);
        mainUI.SetActive(false);

        this.ResetToMaxSize();
        Transform offaxis = this.offAxisCameraRig.transform;
        this.offAxisCameraRig.DisableCameraTracking();
        this.insideScreen.position = offaxis.position;
        this.insideScreen.rotation = offaxis.rotation;
        this.outsideScreen.position = offaxis.position;
        this.outsideScreen.rotation = offaxis.rotation;


        while (calibrating && !cancelled)
        {

            await Task.Delay(5);

        }

        calibrationUI.SetActive(false);
        mainUI.SetActive(true);

        this.insideScreen.gameObject.SetActive(false);
        this.outsideScreen.gameObject.SetActive(false);
        this.offAxisCameraRig.EnableCameraTracking();

        return !cancelled;
    }*/

    public void Complete()
    {
        if (this.calibration.Name != string.Empty)
        {
            calibrating = false;
        }
    }

    public void Cancel()
    {
        cancelled = true;
    }

    public void TryAutoDetect()
    {

        ScreenSizeDetector.ScreenInfo screenInfo = ScreenSizeDetector.GetDeviceScreenSize();

        calibration.name = screenInfo.Device;

        switch (Input.deviceOrientation)
        {
            case DeviceOrientation.Unknown:
            case DeviceOrientation.Portrait:
            case DeviceOrientation.PortraitUpsideDown:
                calibration.PortraitModeHeight = screenInfo.ScreenHeight;
                calibration.PortraitModeWidth = screenInfo.ScreenWidth;
                break;
            case DeviceOrientation.LandscapeLeft:
            case DeviceOrientation.LandscapeRight:
                calibration.PortraitModeHeight = screenInfo.ScreenWidth;
                calibration.PortraitModeWidth = screenInfo.ScreenHeight;
                break;
        }
        Debug.Log($"Trying auto screen detect: {screenInfo}");

        calibrating = false;
    }


    void FinalizeSizeChange()
    {
        this.calibration.PortraitModeHeight = Mathf.Clamp(this.calibration.PortraitModeHeight, 0.02f, 2f);
        this.calibration.PortraitModeWidth = this.calibration.PortraitModeHeight / offAxisCamera.aspect;
    }

    public void Decrease()
    {
        this.calibration.PortraitModeHeight += this.amount;
        FinalizeSizeChange();
        Debug.Log("Decrease");
    }

    public void Increase()
    {
        this.calibration.PortraitModeHeight -= this.amount;
        FinalizeSizeChange();
    }

    public void DecreaseAlt()
    {
        this.calibration.PortraitModeHeight += this.altAmt;
        FinalizeSizeChange();
    }

    public void IncreaseAlt()
    {
        this.calibration.PortraitModeHeight -= this.altAmt;
        FinalizeSizeChange();
    }

    public void SetName(string newName) => this.calibration.name = newName;

    public void ResetToMaxSize()
    {
        this.calibration.PortraitModeHeight = 2f;
        this.calibration.PortraitModeWidth = this.calibration.PortraitModeHeight / offAxisCamera.aspect;
    }

}
