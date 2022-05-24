using System.Collections.Generic;
using Unity.Collections;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARKit;
using UnityEngine.XR.ARSubsystems;


/*using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARKit;
using UnityEngine.XR.ARSubsystems;
*/
/// <summary>
/// Populates the action unit coefficients for an <see cref="ARFace"/>.
/// </summary>
/// <remarks>
/// If this <c>GameObject</c> has a <c>SkinnedMeshRenderer</c>,
/// this component will generate the blend shape coefficients from the underlying <c>ARFace</c>.
///
/// </remarks>
[RequireComponent(typeof(ARFace))]
public class ARKitBlendShapeVisualizer : MonoBehaviour
{
    [SerializeField] bool isReadyPlayer;
    [SerializeField]
    float m_CoefficientScale = 100.0f;

    public float coefficientScale
    {
        get { return m_CoefficientScale; }
        set { m_CoefficientScale = value; }
    }

    [SerializeField]
    SkinnedMeshRenderer m_SkinnedMeshRenderer;

    public SkinnedMeshRenderer skinnedMeshRenderer
    {
        get
        {
            return m_SkinnedMeshRenderer;
        }
        set
        {
            m_SkinnedMeshRenderer = value;
            CreateFeatureBlendMapping();
        }
    }

#if UNITY_IOS && !UNITY_EDITOR
    ARKitFaceSubsystem m_ARKitFaceSubsystem;

    public Dictionary<ARKitBlendShapeLocation, int> m_FaceArkitBlendShapeIndexMap;
#endif

    ARFace m_Face;

    void Awake()
    {
        m_Face = GetComponent<ARFace>();
        CreateFeatureBlendMapping();
    }

    
    public void CreateFeatureBlendMapping()
    {
        if (skinnedMeshRenderer == null || skinnedMeshRenderer.sharedMesh == null)
        {
            return;
        }
        Debug.Log(skinnedMeshRenderer.name);

#if UNITY_IOS && !UNITY_EDITOR
        const string strPrefix = "blendShape2.";
        m_FaceArkitBlendShapeIndexMap = new Dictionary<ARKitBlendShapeLocation, int>();
        if (isReadyPlayer)
        {
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.BrowDownLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("browDownLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.BrowDownRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("browDownRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.BrowInnerUp] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("browInnerUp");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.BrowOuterUpLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("browOuterUpLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.BrowOuterUpRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("browOuterUpRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.CheekPuff] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("cheekPuff");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.CheekSquintLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("cheekSquintLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.CheekSquintRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("cheekSquintRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeBlinkLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("eyeBlinkLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeBlinkRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("eyeBlinkRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeLookDownLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("eyeLookDownLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeLookDownRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("eyeLookDownRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeLookInLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("eyeLookInLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeLookInRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("eyeLookInRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeLookOutLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("eyeLookOutLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeLookOutRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("eyeLookOutRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeLookUpLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("eyeLookUpLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeLookUpRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("eyeLookUpRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeSquintLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("eyeSquintLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeSquintRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("eyeSquintRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeWideLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("eyeWideLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeWideRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("eyeWideRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.JawForward] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("jawForward");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.JawLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("jawLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.JawOpen] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("jawOpen");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.JawRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("jawRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthClose] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthClose");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthDimpleLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthDimpleLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthDimpleRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthDimpleRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthFrownLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthFrownLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthFrownRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthFrownRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthFunnel] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthFunnel");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthLowerDownLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthLowerDownLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthLowerDownRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthLowerDownRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthPressLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthPressLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthPressRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthPressRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthPucker] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthPucker");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthRollLower] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthRollLower");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthRollUpper] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthRollUpper");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthShrugLower] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthShrugLower");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthShrugUpper] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthShrugUpper");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthSmileLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthSmileLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthSmileRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthSmileRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthStretchLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthStretchLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthStretchRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthStretchRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthUpperUpLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthUpperUpLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthUpperUpRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("mouthUpperUpRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.NoseSneerLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("noseSneerLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.NoseSneerRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("noseSneerRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.TongueOut] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex("tongueOut");
        }
        else if (!isReadyPlayer)
        {
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.BrowDownLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "browDown_L");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.BrowDownRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "browDown_R");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.BrowInnerUp] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "browInnerUp");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.BrowOuterUpLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "browOuterUp_L");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.BrowOuterUpRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "browOuterUp_R");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.CheekPuff] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "cheekPuff");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.CheekSquintLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "cheekSquint_L");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.CheekSquintRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "cheekSquint_R");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeBlinkLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "eyeBlink_L");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeBlinkRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "eyeBlink_R");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeLookDownLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "eyeLookDown_L");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeLookDownRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "eyeLookDown_R");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeLookInLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "eyeLookIn_L");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeLookInRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "eyeLookIn_R");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeLookOutLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "eyeLookOut_L");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeLookOutRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "eyeLookOut_R");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeLookUpLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "eyeLookUp_L");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeLookUpRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "eyeLookUp_R");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeSquintLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "eyeSquint_L");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeSquintRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "eyeSquint_R");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeWideLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "eyeWide_L");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.EyeWideRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "eyeWide_R");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.JawForward] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "jawForward");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.JawLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "jawLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.JawOpen] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "jawOpen");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.JawRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "jawRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthClose] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthClose");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthDimpleLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthDimple_L");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthDimpleRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthDimple_R");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthFrownLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthFrown_L");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthFrownRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthFrown_R");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthFunnel] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthFunnel");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthLeft");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthLowerDownLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthLowerDown_L");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthLowerDownRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthLowerDown_R");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthPressLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthPress_L");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthPressRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthPress_R");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthPucker] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthPucker");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthRight");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthRollLower] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthRollLower");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthRollUpper] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthRollUpper");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthShrugLower] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthShrugLower");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthShrugUpper] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthShrugUpper");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthSmileLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthSmile_L");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthSmileRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthSmile_R");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthStretchLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthStretch_L");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthStretchRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthStretch_R");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthUpperUpLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthUpperUp_L");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.MouthUpperUpRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "mouthUpperUp_R");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.NoseSneerLeft] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "noseSneer_L");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.NoseSneerRight] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "noseSneer_R");
            m_FaceArkitBlendShapeIndexMap[ARKitBlendShapeLocation.TongueOut] = skinnedMeshRenderer.sharedMesh.GetBlendShapeIndex(strPrefix + "tongueOut");
        }
#endif
    }

    void SetVisible(bool visible)
    {
        if (skinnedMeshRenderer == null) return;

        skinnedMeshRenderer.enabled = visible;
    }

    void UpdateVisibility()
    {
        var visible =
            enabled &&
            (m_Face.trackingState == TrackingState.Tracking) &&
            (ARSession.state > ARSessionState.Ready);

        SetVisible(visible);
    }

    void OnEnable()
    {
#if UNITY_IOS && !UNITY_EDITOR
        var faceManager = FindObjectOfType<ARFaceManager>();
        if (faceManager != null)
        {
            m_ARKitFaceSubsystem = (ARKitFaceSubsystem)faceManager.subsystem;
        }
#endif
        UpdateVisibility();
        m_Face.updated += OnUpdated;
        ARSession.stateChanged += OnSystemStateChanged;
    }

    void OnDisable()
    {
        m_Face.updated -= OnUpdated;
        ARSession.stateChanged -= OnSystemStateChanged;
    }

    void OnSystemStateChanged(ARSessionStateChangedEventArgs eventArgs)
    {
        UpdateVisibility();
    }

    void OnUpdated(ARFaceUpdatedEventArgs eventArgs)
    {
        UpdateVisibility();
        UpdateFaceFeatures();
    }

    void UpdateFaceFeatures()
    {
        if (skinnedMeshRenderer == null || !skinnedMeshRenderer.enabled || skinnedMeshRenderer.sharedMesh == null)
        {
            return;
        }

#if UNITY_IOS && !UNITY_EDITOR
        using (var blendShapes = m_ARKitFaceSubsystem.GetBlendShapeCoefficients(m_Face.trackableId, Allocator.Temp))
        {
            foreach (var featureCoefficient in blendShapes)
            {
                int mappedBlendShapeIndex;
                if (m_FaceArkitBlendShapeIndexMap.TryGetValue(featureCoefficient.blendShapeLocation, out mappedBlendShapeIndex))
                {
                    if (mappedBlendShapeIndex >= 0)
                    {
                        skinnedMeshRenderer.SetBlendShapeWeight(mappedBlendShapeIndex, featureCoefficient.coefficient * coefficientScale);
                    }
                }
            }
        }
#endif
    }
}
