using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using MPDepthCore.Calibration.Camera;
using UnityEngine;

public class MotiveTrackingProvider : TrackingCalibrationProvider
{
    [SerializeField]
    SavedMotiveTrackingConfiguration currentCalibration;

    [SerializeField] List<SavedMotiveTrackingConfiguration> savedCalibrations;

    [SerializeField] MotiveTrackingCalibration calibrator;

    
    public override void SelectCalibration(int selectedIndex)
    {
        currentCalibration = savedCalibrations[selectedIndex];
        calibrationTransform.position = currentCalibration.TrackerOffsetCalibration.Position;
        calibrationTransform.rotation = Quaternion.Euler(currentCalibration.TrackerOffsetCalibration.Eulers);
    }

    public override void Calibrate()
    {
        calibrator.CalculateCalibrationFromTrackingInfo();
        
    }

    protected override void FinishSetupAfterLoad()
    {
    }
    public void SaveCalibration(MotiveTrackingProvider.SavedMotiveTrackingConfiguration calibration)
    {
        savedCalibrations.Add(calibration);
        currentCalibration = calibration;

    }
    protected override void SetCurrentToDefaultCalibration()
    {
        currentCalibration = new SavedMotiveTrackingConfiguration();

    }

    protected override void LoadSelfFromJson(string json)
    {
        SaveMotiveData saveData = JsonUtility.FromJson<SaveMotiveData>(json);
        this.currentCalibration = saveData.currentCalibration;
        this.savedCalibrations = saveData.savedConfigurations;
    }

    protected override string GetSelfAsJson()
    {
        SaveMotiveData saveData = new SaveMotiveData(savedCalibrations, currentCalibration);
        string json = JsonUtility.ToJson(saveData);
        return json;
    }

    public override TrackerOffsetCalibration GetTrackerOffsetCalibration =>
        currentCalibration.TrackerOffsetCalibration;

    public override SavedTrackerCalibration CurrentTrackerCalibration => currentCalibration;
    public override List<SavedTrackerCalibration> AllCalibrations => new List<SavedTrackerCalibration>(savedCalibrations);

    protected override string Filename => "MotiveTrackerConfigurations.json";


    [Serializable]
    public class SavedMotiveTrackingConfiguration : SavedTrackerCalibration
    {

        public string name = "Default Name";

        public TrackerOffsetCalibration TrackerOffsetCalibration = new TrackerOffsetCalibration();

        public string Name
        {
            get => name;
            set => name = value;
        }
    }

    [Serializable]
    public class SaveMotiveData
    {

        [SerializeField]
        public List<SavedMotiveTrackingConfiguration> savedConfigurations;

        [SerializeField]
        public SavedMotiveTrackingConfiguration currentCalibration;

        public SaveMotiveData(List<SavedMotiveTrackingConfiguration> savedConfigurations, SavedMotiveTrackingConfiguration currentCalibration)
        {
            this.savedConfigurations = savedConfigurations;
            this.currentCalibration = currentCalibration;
        }

    }



}
