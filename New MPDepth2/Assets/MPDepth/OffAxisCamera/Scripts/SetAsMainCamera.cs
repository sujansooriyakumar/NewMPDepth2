using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace OffAxisCamera
{
    [RequireComponent(typeof(Camera))]
    public class SetAsMainCamera : MonoBehaviour
    {
        private void Start()
        {
            // no clue what this does 
            Camera cam = GetComponent<Camera>();
            cam.enabled = false;
            cam.enabled = true;
        }
    }
}
