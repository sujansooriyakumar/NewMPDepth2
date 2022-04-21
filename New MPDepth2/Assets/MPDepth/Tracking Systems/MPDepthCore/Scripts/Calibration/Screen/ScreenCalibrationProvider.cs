using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
using MPDepthCore.Calibration.Camera;
using OffAxisCamera.ScreenConfiguration;
using UnityEngine;

namespace MPDepthCore.Calibration.Screen {
    
    public abstract class ScreenCalibrationProvider : OffAxisScreenProvider {

        public abstract SavedScreenCalibration CurrentCalibration { get; }

        public abstract List<SavedScreenCalibration> AllCalibrations { get; }
        
        public override Vector2 Dimensions => new Vector2(Width, Height);
        
        

        void OnEnable() {
            
        }
        public abstract void Calibrate();


        
        void OnDisable() {
        
        }
        
        protected string FilePath => Path.Combine(BaseFolder, Filename);
        protected abstract string Filename { get; }

        protected string BaseFolder => Path.Combine(Application.persistentDataPath, "Save");


        public abstract void SelectCalibration(int selectedIndex);
        
        
        
    }
    
    public interface SavedScreenCalibration : ICalibration {
        
    }
}
