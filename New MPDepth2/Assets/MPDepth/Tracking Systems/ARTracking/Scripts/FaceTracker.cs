using System;
using MPDepthCore.Calibration.Camera;
using MPDepthCore.TrackingSources;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class FaceTracker : MonoBehaviour
{
    public event MPDepthTrackingSource.TrackingDataUpdatedEvent TrackingDataUpdated;

    [SerializeField] RawTrackingData trackingData = new RawTrackingData();

    public MPDepthTrackingData TrackingData => trackingData;

    [SerializeField] ARFaceManager faceManager = default;
    [SerializeField] Camera arCamera = default;

    [SerializeField] Transform leftEye;
    [SerializeField] Transform rightEye;
    [SerializeField] Transform fixationPoint;

    ARKitBlendShapeVisualizer artKitBlendShapeVisualizer;

    private void OnEnable()
    {
        faceManager.facesChanged += FacesChanged;

    }

    private void OnDisable()
    {
        faceManager.facesChanged -= FacesChanged;

    }

    private void OnDrawGizmos()
    {
        
    }

    void FacesChanged(ARFacesChangedEventArgs eventArgs)
    {
        foreach(ARFace face in eventArgs.added)
        {
            Debug.Log($"face {face} detected");
        }

        foreach(ARFace face in eventArgs.updated)
        {
            trackingData.IsTracking = face.trackingState == TrackingState.Tracking;

            TrackFace(face);
            TrackEyes(face);
            UpdateBlendshapes(face);

            TrackingDataUpdated?.Invoke(trackingData);
        }

        foreach (ARFace face in eventArgs.removed)
        {
            Debug.Log($"face {face} removed");
        }
    }

    void UpdateBlendshapes(ARFace face)
    {
        // find the ARKitBlendshapeVisualizer component if its null
        // if its still null return

        if(artKitBlendShapeVisualizer == null)
        {
            artKitBlendShapeVisualizer = face.GetComponent<ARKitBlendShapeVisualizer>();
            if (artKitBlendShapeVisualizer == null) return;
        }

        SkinnedMeshRenderer skinnedMeshRenderer = artKitBlendShapeVisualizer.skinnedMeshRenderer;

        float[] blendshapes = new float[50];
        for(int i = 0; i < blendshapes.Length; i++)
        {
            blendshapes[i] = skinnedMeshRenderer.GetBlendShapeWeight(i);
        }

        trackingData.BlendshapeTrackingData.Blendshapes = blendshapes;
    }

    void TrackEyes(ARFace face)
    {
        // TODO
        EyeTrackingData eyeTrackingData = trackingData.EyeTrackingData;

        Vector3 trackedLeftEyePosition = RelativeToCamPosition(face.leftEye);
        leftEye.position = trackedLeftEyePosition;
        eyeTrackingData.LeftEyeTrackingData.Position = trackedLeftEyePosition;

        Vector3 trackedLeftEyeEulers = RelativeToCamRotation(face.leftEye);
        leftEye.eulerAngles = trackedLeftEyeEulers;
        eyeTrackingData.LeftEyeTrackingData.Eulers = trackedLeftEyeEulers;

        Vector3 trackedRightEyePosition = RelativeToCamPosition(face.rightEye);
        rightEye.position = trackedRightEyePosition;
        eyeTrackingData.RightEyeTrackingData.Position = trackedRightEyePosition;

        Vector3 trackedRightEyeEulers = RelativeToCamRotation(face.rightEye);
        rightEye.eulerAngles = trackedRightEyeEulers;
        eyeTrackingData.RightEyeTrackingData.Eulers = trackedRightEyeEulers;

        Vector3 trackedFixationPoint = RelativeToCamPosition(face.fixationPoint);
        fixationPoint.position = trackedFixationPoint;
        eyeTrackingData.FixationPointTrackingData.Position = trackedFixationPoint;
    }

    void TrackFace(ARFace face)
    {
        // TODO

        Transform thisTransform = this.transform;

        Vector3 relativeToCamPosition = RelativeToCamPosition(face.transform);
        thisTransform.position = relativeToCamPosition;
        trackingData.CameraTrackingData.Position = relativeToCamPosition;

        Vector3 normalizedEulers = RelativeToCamRotation(face.transform);
        thisTransform.eulerAngles = normalizedEulers;
        trackingData.CameraTrackingData.Eulers = normalizedEulers;
    }

    static Vector3 NormalizeEulersToPreventSingularity(Quaternion relativeToCamRotation)
    {
        Vector3 normalizedEulers = relativeToCamRotation.eulerAngles;
        if (normalizedEulers.x > 180) normalizedEulers.x -= 360;
        if (normalizedEulers.z > 180) normalizedEulers.z -= 360;
        return normalizedEulers;
    }

    static Quaternion AccountForARKitNegativeZAxis(Quaternion newrot)
    {
        return Quaternion.Euler(0, 180, 0) * newrot;
    }

    static Quaternion AccountForSelfieCamMirroringInFaceRotation(Quaternion newrot)
    {
        newrot = new Quaternion(newrot.x, newrot.y, -newrot.z, -newrot.w);
        return newrot;
    }

    Quaternion GetRawFaceLocalRotation(Transform faceTransform)
    {
        return Quaternion.Inverse(arCamera.transform.rotation) * faceTransform.rotation;
    }

    Vector3 RelativeToCamPosition(Transform faceTransform)
    {
        Vector3 localPosition = arCamera.transform.InverseTransformPoint(faceTransform.position);
        Vector3 newPosition = localPosition;
        newPosition = AccountForSelfieCamMirroringForPosition(newPosition);
        return newPosition;
    }

    Vector3 AccountForSelfieCamMirroringForPosition(Vector3 newPosition)
    {
        newPosition.x = -newPosition.x;
        return newPosition;
    }

    Vector3 RelativeToCamRotation(Transform faceTransform)
    {

        Quaternion newrot = GetRawFaceLocalRotation(faceTransform);
        newrot = AccountForSelfieCamMirroringInFaceRotation(newrot);

        // Faces z forward
        newrot = AccountForARKitNegativeZAxis(newrot);

        Vector3 normalizedEulers = NormalizeEulersToPreventSingularity(newrot);
        return normalizedEulers;
    }
}
