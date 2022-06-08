using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using MPDepthCore.Calibration.Camera;
using UnityEngine;
using UnityEngine.Serialization;

namespace MPDepthCore.Calibration.Screen {
    public class BasicScreenCalibrationProvider : ScreenCalibrationProvider {

        [SerializeField] SavedBasicScreenCalibration currentCalibration;
        
        [SerializeField]
        List<SavedBasicScreenCalibration> savedCalibrations = new List<SavedBasicScreenCalibration>();

        [SerializeField] DetachedScreenCalibrator screenCalibrator;
        
        public override SavedScreenCalibration CurrentCalibration => currentCalibration;

        public override List<SavedScreenCalibration> AllCalibrations =>
            new List<SavedScreenCalibration>(savedCalibrations);


        public override void Calibrate()
        {
            currentCalibration = screenCalibrator.Calibrate(currentCalibration);
            TrackingSystemsManager.instance.UpdateScreenCalibration(new Vector2(currentCalibration.Width, currentCalibration.Height));
        }

        public override float Width => currentCalibration.Width;

        public override float Height => currentCalibration.Height;
        
        protected override string Filename => $"BasicScreenCalibrationSave.json";
        public override void SelectCalibration(int selectedIndex) {
            currentCalibration = savedCalibrations[selectedIndex];
        }


        [Serializable]
        public class SavedBasicScreenCalibration : SavedScreenCalibration{
            
            [FormerlySerializedAs("width")] [SerializeField] public float Width = 0.8f;
            [SerializeField] public float Height = 0.45f;

            public string name = "Default calibration";
            public string Name {
                get => name;
                set => name = value;
            }
        }

        [Serializable]
        public class SaveData {
            
            public SavedBasicScreenCalibration currentCalibration;
            public List<SavedBasicScreenCalibration> savedCalibrations;

            public SaveData(List<SavedBasicScreenCalibration> savedCalibrations, SavedBasicScreenCalibration currentCalibration) {
                this.savedCalibrations = savedCalibrations;
                this.currentCalibration = currentCalibration;
            }
        }
        
    }
}