using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DebugSlider : MonoBehaviour
{
    [SerializeField] Slider slider;

    // Update is called once per frame
    void Update()
    {
        GetComponent<Text>().text = slider.value.ToString();
    }
}
