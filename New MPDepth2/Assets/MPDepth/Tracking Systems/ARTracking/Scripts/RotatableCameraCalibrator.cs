using System;
using System.Threading.Tasks;
using MPDepthCore;
using UnityEngine;


    public class RotatableCameraCalibrator : MonoBehaviour
    {

        GameObject mainUI;
        

        bool calibrating;
        bool cancelled;
        RotatableDeviceTrackingCalibrationProvider.SavedRotatableDeviceCalibration calibration;

        void Awake()
        {
        }

    
    

    public void Complete()
        {
            if (calibration.Name == string.Empty) return;
            calibrating = false;
        }

        public void Cancel()
        {
            cancelled = true;
        }

        public void SetCameraOffset(string offsetString)
        {
            try
            {
                float offset = float.Parse(offsetString);
                calibration.portraitOffset = new Vector3(0, offset, 0);
            }
            catch (FormatException)
            {
                // Do nothing
            }

        }

        public void SetName(string newName)
        {
            calibration.name = newName;
        }


    }
