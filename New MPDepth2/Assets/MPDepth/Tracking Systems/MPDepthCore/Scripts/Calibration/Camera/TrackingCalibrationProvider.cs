using System;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UIElements;

namespace MPDepthCore.Calibration.Camera {
    public abstract class TrackingCalibrationProvider : MonoBehaviour {
        [SerializeField] public Transform calibrationTransform;
        public abstract TrackerOffsetCalibration GetTrackerOffsetCalibration {get; }
        public abstract SavedTrackerCalibration CurrentTrackerCalibration { get; }
        
        public abstract List<SavedTrackerCalibration> AllCalibrations { get; }


        public abstract void Calibrate();


        void OnEnable() {

            if (File.Exists(FilePath))
            {
                string json = File.ReadAllText(FilePath);
                LoadSelfFromJson(json);
            }
            FinishSetupAfterLoad();

            if (AllCalibrations.Count == 0)
            {
                SetCurrentToDefaultCalibration();
            }
        }
        protected abstract void FinishSetupAfterLoad();

        protected abstract void SetCurrentToDefaultCalibration();

        protected abstract void LoadSelfFromJson(string json);
        protected abstract string GetSelfAsJson();
        void OnDisable() {
            Directory.CreateDirectory(BaseFolder);
            string json = GetSelfAsJson();
            File.WriteAllText(FilePath, json);
        }



        
        protected string FilePath => Path.Combine(BaseFolder, Filename);
        protected abstract string Filename { get; }

        protected string BaseFolder => Path.Combine(Application.persistentDataPath, "Save");


        public abstract void SelectCalibration(int selectedIndex);
    }

    public interface SavedTrackerCalibration : ICalibration {
        
    }
}