using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using OffAxisCamera;

public class ForcePlane : MonoBehaviour
{
    [SerializeField] ProjectionPlane otherPlane;

    private void Update()
    {
        ProjectionPlane plane = GetComponent<ProjectionPlane>();
        plane.size = otherPlane.size;
    }
}
