using System;
using System.Threading.Tasks;
using MPDepthCore;
using UnityEngine;


    public class RotatableCameraCalibrator : MonoBehaviour
    {

        GameObject mainUI;
        [SerializeField] GameObject calibrationUI;
    [SerializeField] Transform calibrationTransform;

        bool calibrating;
        bool cancelled;
        RotatableDeviceTrackingCalibrationProvider.SavedRotatableDeviceCalibration calibration;

        void Awake()
        {
            mainUI = this.GetComponentInParent<TrackingSystem>().mainUI;
        }

        public async Task<bool> RunCalibrationProcedure(RotatableDeviceTrackingCalibrationProvider.SavedRotatableDeviceCalibration newCalibration)
        {
            calibration = newCalibration;
            calibration.Name = string.Empty;

            calibrating = true;
            cancelled = false;

            this.calibrationUI.SetActive(true);
            this.mainUI.SetActive(false);

            while (calibrating && !cancelled)
            {
                await Task.Delay(5);
            }

            this.calibrationUI.SetActive(false);
            this.mainUI.SetActive(true);

            if (cancelled) return false;
            return true;

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
