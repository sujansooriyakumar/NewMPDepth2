using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CalibrationMatrixSliderDisplay : MonoBehaviour
{
    public enum MatrixComponent
    {
        POSITIONX,
        POSITIONY,
        POSITIONZ,
        ROTATIONX,
        ROTATIONY,
        ROTATIONZ
    };

    public MatrixComponent component;
    [SerializeField] Slider slider;
    private void Start()
    {
    }

    private void Update()
    {
        switch (component)
        {
            case (MatrixComponent.POSITIONX):
                GetComponent<Text>().text = "Position X: " + slider.value;
                break;
            case (MatrixComponent.POSITIONY):
                GetComponent<Text>().text = "Position Y: " + slider.value;
                break;
            case (MatrixComponent.POSITIONZ):
                GetComponent<Text>().text = "Position Z: " + slider.value;
                break;
            case (MatrixComponent.ROTATIONX):
                GetComponent<Text>().text = "Rotation X: " + slider.value;
                break;
            case (MatrixComponent.ROTATIONY):
                GetComponent<Text>().text = "Rotation Y: " + slider.value;
                break;
            case (MatrixComponent.ROTATIONZ):
                GetComponent<Text>().text = "Rotation Z: " + slider.value;
                break;
        }
    }
}
