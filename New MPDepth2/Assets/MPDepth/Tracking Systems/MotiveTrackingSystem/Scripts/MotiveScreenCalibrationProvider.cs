using MPDepthCore.Calibration.Screen;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Serialization;

public class MotiveScreenCalibrationProvider : ScreenCalibrationProvider
{
    [SerializeField] SavedBasicScreenCalibration currentCalibration;

    [SerializeField]
    List<SavedBasicScreenCalibration> savedCalibrations = new List<SavedBasicScreenCalibration>();

    [SerializeField] MotiveScreenCalibrator screenCalibrator;

    public override SavedScreenCalibration CurrentCalibration => currentCalibration;

    public override List<SavedScreenCalibration> AllCalibrations =>
        new List<SavedScreenCalibration>(savedCalibrations);

    

    public override void Calibrate()
    {
        screenCalibrator.Calibrate();
    }

    public override float Width => currentCalibration.Width;

    public override float Height => currentCalibration.Height;

    protected override string Filename => $"BasicScreenCalibrationSave.json";
    public override void SelectCalibration(int selectedIndex)
    {
        currentCalibration = savedCalibrations[selectedIndex];
    }

 

    

    [ContextMenu("testsave")]
    public void TestSave()
    {
        savedCalibrations.Add(currentCalibration);
    }

    [Serializable]
    public class SavedBasicScreenCalibration : SavedScreenCalibration
    {

        [FormerlySerializedAs("width")] [SerializeField] public float Width = 0.8f;
        [SerializeField] public float Height = 0.45f;

        public string name = "Default calibration";
        public string Name
        {
            get => name;
            set => name = value;
        }
    }

    [Serializable]
    public class SaveData
    {

        public SavedBasicScreenCalibration currentCalibration;
        public List<SavedBasicScreenCalibration> savedCalibrations;

        public SaveData(List<SavedBasicScreenCalibration> savedCalibrations, SavedBasicScreenCalibration currentCalibration)
        {
            this.savedCalibrations = savedCalibrations;
            this.currentCalibration = currentCalibration;
        }
    }

}
