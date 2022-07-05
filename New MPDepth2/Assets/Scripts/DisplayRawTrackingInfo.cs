using System.Collections;
using System.Collections.Generic;
using MPDepthCore;
using UnityEngine;
using UnityEngine.UI;

public class DisplayRawTrackingInfo : MonoBehaviour
{

    [SerializeField] TrackingSystemsManager trackingSystemsManager;
    [SerializeField] Transform calibrationl;
    Text t;
    private void Start()
    {
        t = GetComponent<Text>();
    }
    // Update is called once per frame
    void Update()
    {
        Vector3 position = trackingSystemsManager.CurrentTrackingSystem.trackingSource.GetRawTrackingData().CameraTrackingData.Position;
        //t.text = "Position: " + calibrationl.position.x + "," + calibrationl.position.y + "," + calibrationl.position.z + "\n" + "Rotation: " + calibrationl.rotation.eulerAngles.x
          //  + "," + calibrationl.rotation.eulerAngles.y + "," + calibrationl.rotation.eulerAngles.z;
        t.text = "Position: " + position.x + "," + position.y + "," + position.z;
    }
}
