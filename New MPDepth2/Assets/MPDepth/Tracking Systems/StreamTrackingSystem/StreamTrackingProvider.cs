using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using MPDepthCore.Calibration.Camera;
using UnityEngine;

namespace StreamTrackingSystem
{
    public class StreamTrackingProvider : TrackingCalibrationProvider
    {
        [SerializeField]
        SavedStreamTrackingConfiguration currentCalibration;

        [SerializeField] List<SavedStreamTrackingConfiguration> savedCalibrations;

        [SerializeField] StreamTrackingCalibrator calibrator;
        [SerializeField] GameObject calibrationUI;

        public override void SelectCalibration(int selectedIndex)
        {
            currentCalibration = savedCalibrations[selectedIndex];
            calibrationTransform.position = currentCalibration.TrackerOffsetCalibration.Position;
            calibrationTransform.rotation = Quaternion.Euler(currentCalibration.TrackerOffsetCalibration.Eulers);
        }

        public override void Calibrate()
        {
            calibrationUI.SetActive(true);
        }

        public void SaveCalibration(StreamTrackingProvider.SavedStreamTrackingConfiguration calibration)
        {
            savedCalibrations.Add(calibration);
            currentCalibration = calibration;
            
        }
        protected override void FinishSetupAfterLoad()
        {
        }

        protected override void SetCurrentToDefaultCalibration()
        {
            currentCalibration = new SavedStreamTrackingConfiguration();
        }

        protected override void LoadSelfFromJson(string json)
        {
            SaveData saveData = JsonUtility.FromJson<SaveData>(json);
            this.currentCalibration = saveData.currentCalibration;
            this.savedCalibrations = saveData.savedConfigurations;
        }

        protected override string GetSelfAsJson()
        {
            SaveData saveData = new SaveData(savedCalibrations, currentCalibration);
            string json = JsonUtility.ToJson(saveData);
            return json;
        }

        public override TrackerOffsetCalibration GetTrackerOffsetCalibration =>
            currentCalibration.TrackerOffsetCalibration;

        public override SavedTrackerCalibration CurrentTrackerCalibration => currentCalibration;
        public override List<SavedTrackerCalibration> AllCalibrations => new List<SavedTrackerCalibration>(savedCalibrations);

        protected override string Filename => "SavedStreamTrackerConfigurations.json";


        [Serializable]
        public class SavedStreamTrackingConfiguration : SavedTrackerCalibration
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
        public class SaveData
        {

            [SerializeField]
            public List<SavedStreamTrackingConfiguration> savedConfigurations;

            [SerializeField]
            public SavedStreamTrackingConfiguration currentCalibration;

            public SaveData(List<SavedStreamTrackingConfiguration> savedConfigurations, SavedStreamTrackingConfiguration currentCalibration)
            {
                this.savedConfigurations = savedConfigurations;
                this.currentCalibration = currentCalibration;
            }

        }


    }
}