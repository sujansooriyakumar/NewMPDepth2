using System;
using System.Threading.Tasks;
using OffAxisCamera;
using UnityEngine;
using UnityEngine.Serialization;

namespace MPDepthCore.Calibration.Screen {
    public class DetachedScreenCalibrator : ScreenCalibrator {
        
        [Space][Header("Internal Settings")]
        [SerializeField] Transform insideScreen;
        [SerializeField] Transform outsideScreen;
        [SerializeField] GameObject calibrationUI = default;
        
        
        [SerializeField] float amount = 0.001f;
        [SerializeField] float altAmt = .05f;
        BasicScreenCalibrationProvider.SavedBasicScreenCalibration calibration;
        bool cancelled;
        bool calibrating;

        public async Task<bool> RunCalibrationProcedure(BasicScreenCalibrationProvider.SavedBasicScreenCalibration newCalibration) {
            calibration = newCalibration;
            calibration.name = string.Empty;
            
            calibrating = true;
            cancelled = false;

            insideScreen.gameObject.SetActive(true);
            outsideScreen.gameObject.SetActive(true);
            calibrationUI.SetActive(true);
            mainUI.SetActive(false);
            ResetToMaxSize();
            
            Transform offaxis = offAxisCameraRig.transform;
            offAxisCameraRig.DisableCameraTracking();
            offAxisCamera.transform.localPosition = new Vector3(0, 0, .6f);

            insideScreen.position = offaxis.position;
            insideScreen.rotation = offaxis.rotation;
            outsideScreen.position = offaxis.position;
            outsideScreen.rotation = offaxis.rotation;

            while (calibrating && !cancelled) {

                if (Input.GetKey(KeyCode.DownArrow)) {
                    calibration.Width += altAmt;
                }

                if (Input.GetKey(KeyCode.UpArrow)) {
                    calibration.Width -= altAmt;
                }

                if (Input.GetKey(KeyCode.LeftArrow)) {
                    calibration.Width += amount;
                }

                if (Input.GetKey(KeyCode.RightArrow)) {
                    calibration.Width -= amount;
                }


                calibration.Width = Mathf.Clamp(calibration.Width, 0.02f, 2f);
                calibration.Height = calibration.Width / offAxisCamera.aspect;


                if (Input.GetKeyDown(KeyCode.Backspace)) {
                    ResetToMaxSize();
                }

                if (Input.GetKeyDown(KeyCode.Return)) {
                    if (calibration.name != string.Empty) {
                        Confirm();
                    }
                }

                if (Input.GetKeyDown(KeyCode.Escape)) {
                    Cancel();
                }

                await Task.Delay(5);
                
                

            }

            insideScreen.gameObject.SetActive(false);
            outsideScreen.gameObject.SetActive(false);
            offAxisCameraRig.EnableCameraTracking();
            
            calibrationUI.SetActive(false);
            mainUI.SetActive(true);

            if (cancelled) return false;
            return true;
        }

        public void Confirm() {
            if (calibration.name != string.Empty) {
                calibrating = false;
            }
            else {
                Debug.LogWarning("Need to enter a name for the calibration");
            }
        }

        public void Cancel() {
            cancelled = true;
        }

        public void TryToAutoDetectScreen(BasicScreenCalibrationProvider.SavedBasicScreenCalibration currentCalibration) {
            ScreenSizeDetector.ScreenInfo screenInfo = ScreenSizeDetector.GetDeviceScreenSize();
            calibration = currentCalibration;
            calibration.name = screenInfo.Device;
            calibration.Height = screenInfo.ScreenHeight;
            calibration.Width = screenInfo.ScreenWidth;
            calibrating = false;
            Debug.Log($"Finished screen auto detect. Results: {screenInfo}");
        }

        public void SetName(string newName) {
            calibration.name = newName;
        }

        void ResetToMaxSize() {
            calibration.Width = 2f;
            calibration.Height = calibration.Width / offAxisCamera.aspect;
        }

        public void Calibrate(BasicScreenCalibrationProvider.SavedBasicScreenCalibration currentCalibration)
        {
            TryToAutoDetectScreen(currentCalibration);

        }

        private void Update()
        {
            if (calibrating)
            {
                if (Input.GetKeyDown(KeyCode.LeftArrow))
                {
                    calibration.Width -= 0.1f;
                }

                if (Input.GetKeyDown(KeyCode.RightArrow))
                {
                    calibration.Width += 0.1f;
                }

                calibration.Width = Mathf.Clamp(calibration.Width, 0.02f, 2.0f);
                calibration.Height = calibration.Width / offAxisCamera.aspect;
                if (Input.GetKeyDown(KeyCode.Return))
                {

                    calibrating = false;
                }
            }
        }



    }
}