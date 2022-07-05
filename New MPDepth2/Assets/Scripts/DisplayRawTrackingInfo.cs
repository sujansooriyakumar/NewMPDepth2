using System.Collections;
using System.Collections.Generic;
using MPDepthCore;
using UnityEngine;
using UnityEngine.UI;

public class DisplayRawTrackingInfo : MonoBehaviour
{

    [SerializeField] TrackingSystemsManager trackingSystemsManager;
    [SerializeField] Transform calibrationl;
    [SerializeField] Transform rpa;
    [SerializeField] bool test;
    [SerializeField] Transform headBone;
    Text t;
    private void Start()
    {
        t = GetComponent<Text>();
    }
    // Update is called once per frame
    void Update()
    {
        Vector3 position;
        Vector3 rotation;
        if (test)
        {
             position = trackingSystemsManager.CurrentTrackingSystem.trackingSource.GetRawTrackingData().CameraTrackingData.Position;
             rotation = trackingSystemsManager.CurrentTrackingSystem.trackingSource.GetRawTrackingData().CameraTrackingData.Eulers;

        }
        else
        {
            position = rpa.localPosition;
            rotation = headBone.rotation.eulerAngles;
        }
        //t.text = "Position: " + calibrationl.position.x + "," + calibrationl.position.y + "," + calibrationl.position.z + "\n" + "Rotation: " + calibrationl.rotation.eulerAngles.x
          //  + "," + calibrationl.rotation.eulerAngles.y + "," + calibrationl.rotation.eulerAngles.z;
        t.text = "Position\n" + position.x.ToString("F5") + ", " + position.y.ToString("F5") + ", " + position.z.ToString("F5") + "\n" + "Rotation\n"
            + rotation.x.ToString("F5") + ", " + rotation.y.ToString("F5") + ", " + rotation.z.ToString("F5");
    }
}
