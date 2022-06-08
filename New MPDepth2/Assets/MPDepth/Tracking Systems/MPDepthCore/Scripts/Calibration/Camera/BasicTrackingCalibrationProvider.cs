using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.CompilerServices;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UIElements;

namespace MPDepthCore.Calibration.Camera {
    public class BasicTrackingCalibrationProvider : TrackingCalibrationProvider {

        public override SavedTrackerCalibration CurrentTrackerCalibration => currentTrackerCalibration;
        public override List<SavedTrackerCalibration> AllCalibrations {
            get {
                List<SavedTrackerCalibration> allCalibrations = new List<SavedTrackerCalibration>();
                allCalibrations.AddRange(savedCalibrations);
                return allCalibrations;
            }
        }
        
        public override TrackerOffsetCalibration GetTrackerOffsetCalibration => currentTrackerCalibration.OffsetCalibration;
        
        [SerializeField] SavedTrackerBasicCalibration currentTrackerCalibration;
        
        [SerializeField]
        List<SavedTrackerBasicCalibration> savedCalibrations = new List<SavedTrackerBasicCalibration>();

       
        

        
        protected override string Filename => $"BasicCalibrationProviderSave.json";
        public override void SelectCalibration(int selectedIndex) {
            currentTrackerCalibration = savedCalibrations[selectedIndex];
        }


       
     
        [ContextMenu("testsave")]
        public void TestSave() {
            savedCalibrations.Add(currentTrackerCalibration);
        }

        public override void Calibrate()
        {
            TrackingSystemsManager.instance.SetCalibrationTransform(Vector3.zero, Vector3.zero);
            Vector3 rotation = Vector3.zero;
            Vector3 position = currentTrackerCalibration.OffsetCalibration.Position;
            TrackingSystemsManager.instance.SetCalibrationTransform(position, rotation);
        }

        protected override void FinishSetupAfterLoad()
        {
            throw new NotImplementedException();
        }

        protected override void SetCurrentToDefaultCalibration()
        {
            throw new NotImplementedException();
        }

        protected override void LoadSelfFromJson(string json)
        {
            throw new NotImplementedException();
        }

        protected override string GetSelfAsJson()
        {
            throw new NotImplementedException();
        }

        [Serializable]
        public class SavedTrackerBasicCalibration : SavedTrackerCalibration {
            
            public TrackerOffsetCalibration OffsetCalibration = new TrackerOffsetCalibration();
            public string name = "Default calibration";
            public string Name {
                get => name;
                set => name = value;
            }
        }
    }
}