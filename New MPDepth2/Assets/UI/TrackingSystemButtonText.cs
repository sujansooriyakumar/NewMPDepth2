using MPDepthCore;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TrackingSystemButtonText : MonoBehaviour
{
    [SerializeField] TrackingSystemsManager trackingSystemsManager;
    Text text;

    private void Start()
    {
        text = GetComponent<Text>();
    }

    private void Update()
    {
        text.text = trackingSystemsManager.CurrentTrackingSystem.name;
    }

}
