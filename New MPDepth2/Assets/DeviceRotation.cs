using OffAxisCamera;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeviceRotation : MonoBehaviour
{
    private void Update()
    {
       
        if(SystemInfo.supportsGyroscope) transform.rotation = Quaternion.Euler(new Vector3((270f - Input.gyro.attitude.eulerAngles.y)*-1, 0, 0));
    }
}
