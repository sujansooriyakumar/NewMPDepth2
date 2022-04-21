using MPDepthCore.Calibration.Camera;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using UnityEngine;

public class RotatableDeviceTrackingCalibrationProvider : TrackingCalibrationProvider
{
    DeviceOrientation lastOrientation = DeviceOrientation.LandscapeLeft;
    [SerializeField] GameObject calibrationUI;
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

    Vector3 LandscapeLeftOffset => new Vector3(PortraitOffset.y, -PortraitOffset.x, PortraitOffset.z);
    Vector3 LandscapeRightOffset => new Vector3(PortraitOffset.y, PortraitOffset.x, PortraitOffset.z);
    Vector3 PortraitUpsideDownOffset => -PortraitOffset;

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

    

    protected override string Filename => "RotatableDeviceTrackingCalibrationProviderSave.json";

    public override void SelectCalibration(int selectedIndex)
    {
        currentCalibration = defaultCalibrations[selectedIndex].trackingCalibration;
        calibrationTransform.position = Vector3.zero;
        calibrationTransform.rotation = Quaternion.Euler(Vector3.zero);
        calibrationTransform.position = currentCalibration.portraitOffset;

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
