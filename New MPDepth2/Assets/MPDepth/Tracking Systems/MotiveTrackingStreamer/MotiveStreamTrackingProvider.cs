using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using MPDepthCore.Calibration.Camera;
using UnityEngine;

namespace MotiveTrackingStreamer
{
    public class MotiveStreamTrackingProvider : TrackingCalibrationProvider
    {
        [SerializeField]
        SavedMotiveStreamTrackingConfiguration currentCalibration;

        [SerializeField] List<SavedMotiveStreamTrackingConfiguration> savedCalibrations;

        [SerializeField] MotiveStreamTrackingCalibrator calibrator;
        [SerializeField] GameObject calibrationUI;

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

        public void SaveCalibration(MotiveStreamTrackingProvider.SavedMotiveStreamTrackingConfiguration calibration)
        {
            savedCalibrations.Add(calibration);

        }

        protected override void FinishSetupAfterLoad()
        {
        }

        protected override void SetCurrentToDefaultCalibration()
        {
            currentCalibration = new SavedMotiveStreamTrackingConfiguration();
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

        protected override string Filename => "SavedMotiveStreamTrackerConfigurations.json";


        [Serializable]
        public class SavedMotiveStreamTrackingConfiguration : SavedTrackerCalibration
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
            public List<SavedMotiveStreamTrackingConfiguration> savedConfigurations;

            [SerializeField]
            public SavedMotiveStreamTrackingConfiguration currentCalibration;

            public SaveData(List<SavedMotiveStreamTrackingConfiguration> savedConfigurations, SavedMotiveStreamTrackingConfiguration currentCalibration)
            {
                this.savedConfigurations = savedConfigurations;
                this.currentCalibration = currentCalibration;
            }

        }


    }
}