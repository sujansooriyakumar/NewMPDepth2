using MPDepthCore.Calibration.Camera;
using MPDepthCore.Calibration.Screen;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using UnityEngine;

public class RotatableDeviceTrackingCalibrationProvider : TrackingCalibrationProvider
{
    DeviceOrientation lastOrientation = DeviceOrientation.LandscapeLeft;
    [SerializeField]
    SavedRotatableDeviceCalibration currentCalibration;

    public override SavedTrackerCalibration CurrentTrackerCalibration => currentCalibration;

    public override List<SavedTrackerCalibration> AllCalibrations
    {
        get
        {
            var all = new List<SavedTrackerCalibration>();
            foreach (RotatableDeviceConfig deviceConfig in defaultCalibrations)
            {
                all.Add(deviceConfig.trackingCalibration);
            }
            return all;
        }
    }
    [SerializeField]
    List<SavedRotatableDeviceCalibration> savedCalibrations = new List<SavedRotatableDeviceCalibration>();

    [SerializeField]
    List<RotatableDeviceConfig> defaultCalibrations = new List<RotatableDeviceConfig>();

    List<SavedRotatableDeviceCalibration> allLoadedCalibrations;

    [SerializeField] RotatableCameraCalibrator rotatableCameraCalibrator;

    Vector3 PortraitOffset => currentCalibration.portraitOffset;
    Vector3 PortraitCameraOrientationOffset => currentCalibration.cameraOrientationOffset;

    Vector3 LandscapeLeftOffset => new Vector3(PortraitOffset.y, -PortraitOffset.x, PortraitOffset.z);
    Vector3 LandscapeLeftCameraOrientation => new Vector3(-PortraitCameraOrientationOffset.y, -PortraitCameraOrientationOffset.x, PortraitCameraOrientationOffset.z);

    Vector3 LandscapeRightOffset => new Vector3(-PortraitOffset.y, PortraitOffset.x, PortraitOffset.z);
    Vector3 LandscapeRightCameraOrientation => new Vector3(PortraitCameraOrientationOffset.y, PortraitCameraOrientationOffset.x, PortraitCameraOrientationOffset.z);

    Vector3 PortraitUpsideDownOffset => -PortraitOffset;
    Vector3 PortraitUpsideDownCameraOrientation => -PortraitCameraOrientationOffset; 

    DeviceOrientation CurrentOrientation
    {
        get
        {
            DeviceOrientation orientation = Input.deviceOrientation; ;
            if (orientation == DeviceOrientation.Unknown || orientation == DeviceOrientation.FaceUp || orientation == DeviceOrientation.FaceDown)
            {

                return lastOrientation;
            }
            else
            {
                lastOrientation = orientation;
                return orientation;
            }
        }
    }

    Vector3 OffsetPosition
    {
        get
        {
            DeviceOrientation orientation = CurrentOrientation;
            switch (orientation)
            {
                case DeviceOrientation.Portrait:
                    return PortraitOffset;
                case DeviceOrientation.PortraitUpsideDown:
                    return PortraitUpsideDownOffset;
                case DeviceOrientation.LandscapeLeft:
                    return LandscapeLeftOffset;
                case DeviceOrientation.LandscapeRight:
                    return LandscapeRightOffset;
                default:
                    throw new ArgumentException($"unspported orientation {orientation}");
            }
        }
    }

    Vector3 OffsetOrientation
    {
        get
        {
            DeviceOrientation orientation = CurrentOrientation;
            switch (orientation)
            {
                case DeviceOrientation.Portrait:
                    return PortraitCameraOrientationOffset;
                case DeviceOrientation.PortraitUpsideDown:
                    return PortraitUpsideDownCameraOrientation;
                case DeviceOrientation.LandscapeLeft:
                    return LandscapeLeftCameraOrientation;
                case DeviceOrientation.LandscapeRight:
                    return LandscapeRightCameraOrientation;
                default:
                    throw new ArgumentException($"unspported orientation {orientation}");
            }
        }
    }

    protected override string Filename => "RotatableDeviceTrackingCalibrationProviderSave.json";

    public override void SelectCalibration(int selectedIndex)
    {
        currentCalibration = defaultCalibrations[selectedIndex].trackingCalibration;
        calibrationTransform.position = Vector3.zero;
        calibrationTransform.rotation = Quaternion.Euler(Vector3.zero);
        DeviceOrientation orientation = CurrentOrientation;
        calibrationTransform.position = OffsetPosition;
        calibrationTransform.rotation = Quaternion.Euler(OffsetOrientation);
        
        //calibrationTransform.position = currentCalibration.portraitOffset;

    }

    public override TrackerOffsetCalibration GetTrackerOffsetCalibration
    {
        get
        {
            TrackerOffsetCalibration calibration = new TrackerOffsetCalibration
            {
                Position = OffsetPosition,
                Eulers = Vector3.zero
            };
            return calibration;
        }
    }

   

    public override void Calibrate()
    {
    }

    protected override void FinishSetupAfterLoad()
    {
    }

    private void Update()
    {
        if (lastOrientation != CurrentOrientation)
        {
            DeviceOrientation orientation = CurrentOrientation;
            switch (orientation)
            {
                case DeviceOrientation.Portrait:
                    calibrationTransform.position = PortraitOffset;
                    calibrationTransform.rotation = Quaternion.Euler(PortraitCameraOrientationOffset);
                    break;
                case DeviceOrientation.PortraitUpsideDown:
                    calibrationTransform.position = PortraitUpsideDownOffset;
                    calibrationTransform.rotation = Quaternion.Euler(PortraitUpsideDownCameraOrientation);

                    break;
                case DeviceOrientation.LandscapeLeft:
                    calibrationTransform.position = LandscapeLeftOffset;
                    calibrationTransform.rotation = Quaternion.Euler(LandscapeLeftCameraOrientation);

                    break;
                case DeviceOrientation.LandscapeRight:
                    calibrationTransform.position = LandscapeRightOffset;
                    calibrationTransform.rotation = Quaternion.Euler(LandscapeRightCameraOrientation);

                    break;
                default:
                    throw new ArgumentException($"unspported orientation {orientation}");
            }
        }
    }

    protected override void SetCurrentToDefaultCalibration()
    {
        currentCalibration = new SavedRotatableDeviceCalibration();
    }

    protected override void LoadSelfFromJson(string json)
    {
        SaveData saveData = JsonUtility.FromJson<SaveData>(json);
        this.currentCalibration = saveData.currentCalibration;
        this.savedCalibrations = saveData.savedCalibrations;
        calibrationTransform.position = currentCalibration.portraitOffset;

    }

    protected override string GetSelfAsJson()
    {
        return "";
    }

    [Serializable]
    public class SavedRotatableDeviceCalibration : SavedTrackerCalibration
    {

        public string name = "Default Configuration";
        public Vector3 portraitOffset = default;
        public Vector3 cameraOrientationOffset = default;
        public string Name
        {
            get => name;
            set => name = value;
        }
    }

    [Serializable]
    public class SaveData
    {

        [SerializeField]
        public SavedRotatableDeviceCalibration currentCalibration;

        [SerializeField]
        public List<SavedRotatableDeviceCalibration> savedCalibrations;

        public SaveData(SavedRotatableDeviceCalibration currentCalibration, List<SavedRotatableDeviceCalibration> savedCalibrations)
        {
            this.currentCalibration = currentCalibration;
            this.savedCalibrations = savedCalibrations;
        }
    }
}
