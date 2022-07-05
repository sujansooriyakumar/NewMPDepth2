using System.Collections;
using System.Collections.Generic;
using MPDepthCore;
using UnityEngine;
using UnityEngine.UI;

public class CalibrationBreaker : MonoBehaviour
{
    [SerializeField]Vector3 position;
    [SerializeField]Vector3 rotation;

    [SerializeField] Transform calibration;
    [SerializeField] Slider positionX;
    [SerializeField] Slider positionY;
    [SerializeField] Slider positionZ;
    [SerializeField] Slider rotationX;
    [SerializeField] Slider rotationY;
    [SerializeField] Slider rotationZ;
    Vector3 prevPosition;
    Vector3 prevRotation;

    private void Start()
    {
        prevPosition = calibration.position;
        prevRotation = calibration.rotation.eulerAngles;
    }

    private void OnEnable()
    {
        DefaultValues();
    }
    public void DefaultValues()
    {
        positionX.value = calibration.position.x;
        positionY.value = calibration.position.y;
        positionZ.value = calibration.position.z;
        rotationX.value = calibration.rotation.eulerAngles.x;
        rotationY.value = calibration.rotation.eulerAngles.y;
        rotationZ.value = calibration.rotation.eulerAngles.z;
    }
   

    public void UpdatePosX(float val)
    {
        position.x = val;
        calibration.position = position;
    }

    public void UpdatePosY(float val)
    {
        position.y = val;
        calibration.position = position;
    }

   public void UpdatePosZ(float val)
    {
        position.z = val;
        calibration.position = position;
    }

    public void UpdateRotationX(float val)
    {
        rotation.x = val;
        //calibration.rotation = Quaternion.Euler(rotation);
    }
    public void UpdateRotationY(float val)
    {
        rotation.y = val;
        //calibration.rotation = Quaternion.Euler(rotation);
    }
    public void UpdateRotationZ(float val)
    {
        rotation.z = val;
        //calibration.rotation = Quaternion.Euler(rotation);
    }

    public void UpdateTransform()
    {
        calibration.position = position;
        calibration.rotation = Quaternion.Euler(rotation);
    }

    public void UpdateRotation()
    {
        calibration.rotation = Quaternion.Euler(rotation);
    }

   

}
