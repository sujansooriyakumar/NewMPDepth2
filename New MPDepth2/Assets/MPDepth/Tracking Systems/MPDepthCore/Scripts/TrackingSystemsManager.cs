using System;
using System.Collections.Generic;
using System.IO;
using JetBrains.Annotations;
using MPDepthCore.Calibration.Camera;
using MPDepthCore.TrackingSources;
using OffAxisCamera;
using UnityEngine;
using UnityEngine.UI;

namespace MPDepthCore
{
    public class TrackingSystemsManager : MonoBehaviour
    {
        int currentTrackingSystemIndex = 0;
        public static TrackingSystemsManager instance;

        [SerializeField] OffAxisCameraRig offAxisCameraRig = default;

        [SerializeField] TrackingSystem currentTrackingSystem;

        [SerializeField] List<TrackingSystem> trackingSystems = new List<TrackingSystem>();

        [SerializeField] ToggleUserEvent parallaxToggleEvent;

        [SerializeField] public CalibratedTrackingData CurrentCalibratedTrackingData;
        [SerializeField] Transform calibrationTransform;
        [SerializeField] Dropdown calibrationDropdown;
        [SerializeField] Dropdown trackingSystemsDropdown;
        public TrackingSystem CurrentTrackingSystem => currentTrackingSystem;

        public event MPDepthTrackingSource.TrackingDataUpdatedEvent TrackingDataUpdated;

        public List<TrackingSystem> TrackingSystems => trackingSystems;

    
        void OnEnable()
        {
            foreach (TrackingSystem trackingSystem in trackingSystems)
            {
                trackingSystem.TurnOff();
                trackingSystemsDropdown.options.Add(new Dropdown.OptionData(trackingSystem.name));
            }
            instance = this;



            if (parallaxToggleEvent != null)
            {
                parallaxToggleEvent.Toggled += ToggleParallax;
            }

            //ChangeSystemTo(currentTrackingSystem);
            SelectCalibration(0);
        }

        public void SetCamera(OffAxisCameraRig camera)
        {
            offAxisCameraRig = camera;
        }

        void ToggleParallax(bool parallaxIsOn)
        {
            if (parallaxIsOn) offAxisCameraRig.EnableCameraTracking();
            else offAxisCameraRig.DisableCameraTracking();
        }



        void TrackingDataWasUpdated(MPDepthTrackingData data)
        {
            TrackingDataUpdated?.Invoke(data);
            ApplyCalibration(data);
            offAxisCameraRig.UpdateCameraLocation(CurrentCalibratedTrackingData.CameraTrackingData.Position);
        }
        public void StartCalibration()
        {
            currentTrackingSystem.TrackingCalibrationProvider.Calibrate();
            currentTrackingSystem.ScreenCalibrationProvider.Calibrate();
            UpdateCalibrationDropdown();
            
        }

        
        void ApplyCalibration(MPDepthTrackingData data)
        {
            Vector3 pos = calibrationTransform.TransformPoint(data.CameraTrackingData.Position);
            Vector3 rot = (calibrationTransform.rotation * Quaternion.Euler(data.CameraTrackingData.Eulers)).eulerAngles;
            CurrentCalibratedTrackingData.CameraTrackingData.Position = pos;
            CurrentCalibratedTrackingData.CameraTrackingData.Eulers = rot;
            CurrentCalibratedTrackingData.BlendshapeTrackingData.Blendshapes = data.BlendshapeTrackingData.Blendshapes;
            //FindObjectOfType<ProjectionPlane>().UpdateOrientation();
        }

        public void SelectCalibration(Int32 index)
        {
            currentTrackingSystem.ScreenCalibrationProvider.Calibrate();

            //if (currentTrackingSystem.TrackingCalibrationProvider.AllCalibrations.Count > 0) currentTrackingSystem.TrackingCalibrationProvider.SelectCalibration(index);
            //if (currentTrackingSystem.ScreenCalibrationProvider.AllCalibrations.Count > 0) currentTrackingSystem.ScreenCalibrationProvider.SelectCalibration(index);
        }
        void OnDisable()
        {
            currentTrackingSystem.TrackingDataUpdated -= TrackingDataWasUpdated;

            if (parallaxToggleEvent != null)
            {
                parallaxToggleEvent.Toggled -= ToggleParallax;
            }
        }


        public void SelectSystem(int selectedIndex)
        {
            TrackingSystem newTrackingSystem;
            try
            {
                newTrackingSystem = trackingSystems[selectedIndex];
            }
            catch (IndexOutOfRangeException)
            {
                if (TrackingSystems.Count == 0)
                {
                    Debug.LogError("No Tracking Systems defined!");
                    throw;
                }

                Debug.LogWarning($"Saved Tracking System index out of range {selectedIndex}, reverting to default.");
                newTrackingSystem = trackingSystems[0];

            }
            ChangeSystemTo(newTrackingSystem);
            SelectCalibration(0);
        }

        public void ChangeSystemTo(TrackingSystem newTrackingSystem)
        {

            if (currentTrackingSystem != null)
            {
                currentTrackingSystem.TrackingDataUpdated -= TrackingDataWasUpdated;
                currentTrackingSystem.TurnOff();
            }

            currentTrackingSystem = newTrackingSystem;
            offAxisCameraRig.Screen = currentTrackingSystem.ScreenCalibrationProvider;

            currentTrackingSystem.TurnOn();
            currentTrackingSystem.TrackingDataUpdated += TrackingDataWasUpdated;
            UpdateCalibrationDropdown();
            SelectCalibration(0);

        }

        public void UpdateCalibrationDropdown()
        {
            calibrationDropdown.ClearOptions();
            Debug.Log(currentTrackingSystem.TrackingCalibrationProvider.AllCalibrations.Count);
            for(int i = 0; i < currentTrackingSystem.TrackingCalibrationProvider.AllCalibrations.Count; i++)
            {
                calibrationDropdown.options.Add(new Dropdown.OptionData(currentTrackingSystem.TrackingCalibrationProvider.AllCalibrations[i].Name));
            }
        }

        public void CycleTrackingSystem()
        {
            //currentTrackingSystem.TurnOff();
            for (int i = 0; i < trackingSystems.Count; i++)
            {
                if (trackingSystems[i] == currentTrackingSystem)
                {
                    currentTrackingSystemIndex = i;
                }
                //trackingSystems[i].TurnOff();
            }
            if (currentTrackingSystemIndex < trackingSystems.Count - 1)
            {
                ChangeSystemTo(trackingSystems[currentTrackingSystemIndex + 1]);

            }
            else
            {
                ChangeSystemTo(trackingSystems[0]);

            }
        }
        public Transform GetCalibrationTransform()
        {
            return calibrationTransform;
        }

        public void SetCalibrationTransform(Vector3 position, Vector3 rotation)
        {
            calibrationTransform.position = position;
            calibrationTransform.rotation = Quaternion.Euler(rotation);
        }

        public void UpdateScreenCalibration(Vector2 size)
        {
            ProjectionPlane plane = offAxisCameraRig.GetComponentInChildren<ProjectionPlane>();
            plane.size = size;
        }
    }

    
        
}
