using System.Collections;
using System.Collections.Generic;
using MPDepthCore.Calibration.Camera;
using UnityEngine;
using UnityEngine.UI;

public class DebugDisplay : MonoBehaviour
{
    Text t;
    [SerializeField] TrackingCalibrationManager trackingCalibrationManager;
    [SerializeField] ARTracking arTracking;

    // Start is called before the first frame update
    void Start()
    {
        t = GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {
        t.text = "" + arTracking.trackingData.BlendshapeTrackingData.Blendshapes[0];
    }
}
