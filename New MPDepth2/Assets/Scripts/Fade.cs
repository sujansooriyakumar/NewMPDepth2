using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fade : MonoBehaviour
{
    float t = 0;
    // Update is called once per frame

    private void OnEnable()
    {
        t = 0;
    }
    void Update()
    {
        t += Time.deltaTime;
        if(t>= 2.0f)
        {
            gameObject.SetActive(false);
        }
    }
}
