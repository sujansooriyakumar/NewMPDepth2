using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class URLParse : MonoBehaviour
{
    [SerializeField] string url;
    public void OnValueChanged(string s)
    {
        url = s;
    }

    public string GetURL()
    {
        return url;
    }
}
