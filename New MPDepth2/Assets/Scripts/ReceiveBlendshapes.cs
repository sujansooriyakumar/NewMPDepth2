using MPDepthCore;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReceiveBlendshapes : MonoBehaviour
{
    [SerializeField] NetworkManager networkManager;
    [SerializeField] SkinnedMeshRenderer skinnedMeshRenderer;
    [SerializeField] bool isReadyPlayerAvatar;
    [SerializeField] TrackingSystemsManager trackingSystemsManager;
    private void Start()
    {
    }
    private void Update()
    {
        //float[] blendshapes = trackingSystemsManager.CurrentCalibratedTrackingData.BlendshapeTrackingData.Blendshapes;
        //transform.position = networkManager.GetPosition();
        transform.rotation = Quaternion.Euler(networkManager.GetEulers().x * -1, networkManager.GetEulers().y, networkManager.GetEulers().z);

       

        
            float[] blendshapes = networkManager.GetBlendshapes();

            if (isReadyPlayerAvatar)
            {

                SetReadyPlayerAvatarBlendshapes(blendshapes);

            }
            else
            {
                for (int i = 0; i < blendshapes.Length; i++)
                {
                    skinnedMeshRenderer.SetBlendShapeWeight(i, blendshapes[i]);
                }
            }
        
    }

   private void SetReadyPlayerAvatarBlendshapes(float[] blendshapes)
    {
        

        // left eye

        skinnedMeshRenderer.SetBlendShapeWeight(20, blendshapes[0]);
        skinnedMeshRenderer.SetBlendShapeWeight(21, blendshapes[1]);
        skinnedMeshRenderer.SetBlendShapeWeight(22, blendshapes[2]);
        skinnedMeshRenderer.SetBlendShapeWeight(23, blendshapes[3]);
        skinnedMeshRenderer.SetBlendShapeWeight(24, blendshapes[4]);
        skinnedMeshRenderer.SetBlendShapeWeight(25, blendshapes[5]);
        skinnedMeshRenderer.SetBlendShapeWeight(26, blendshapes[6]);

        // right eye
        skinnedMeshRenderer.SetBlendShapeWeight(27, blendshapes[7]);
        skinnedMeshRenderer.SetBlendShapeWeight(28, blendshapes[8]);
        skinnedMeshRenderer.SetBlendShapeWeight(29, blendshapes[9]);
        skinnedMeshRenderer.SetBlendShapeWeight(30, blendshapes[10]);
        skinnedMeshRenderer.SetBlendShapeWeight(31, blendshapes[11]);
        skinnedMeshRenderer.SetBlendShapeWeight(32, blendshapes[5]);
        skinnedMeshRenderer.SetBlendShapeWeight(33, blendshapes[12]);

        // jaw
        skinnedMeshRenderer.SetBlendShapeWeight(34, blendshapes[13]);
        skinnedMeshRenderer.SetBlendShapeWeight(35, blendshapes[14]);
        skinnedMeshRenderer.SetBlendShapeWeight(36, blendshapes[16]);
        skinnedMeshRenderer.SetBlendShapeWeight(37, blendshapes[15]);

        // mouth
        skinnedMeshRenderer.SetBlendShapeWeight(38, blendshapes[19]);
        skinnedMeshRenderer.SetBlendShapeWeight(39, blendshapes[18]);
        skinnedMeshRenderer.SetBlendShapeWeight(40, blendshapes[17]);
        skinnedMeshRenderer.SetBlendShapeWeight(41, blendshapes[21]);
        skinnedMeshRenderer.SetBlendShapeWeight(42, blendshapes[22]);
        skinnedMeshRenderer.SetBlendShapeWeight(43, blendshapes[23]);
        skinnedMeshRenderer.SetBlendShapeWeight(44, blendshapes[20]);
        skinnedMeshRenderer.SetBlendShapeWeight(45, blendshapes[25]);
        skinnedMeshRenderer.SetBlendShapeWeight(46, blendshapes[24]);
        skinnedMeshRenderer.SetBlendShapeWeight(47, blendshapes[26]);
        skinnedMeshRenderer.SetBlendShapeWeight(48, blendshapes[27]);
        skinnedMeshRenderer.SetBlendShapeWeight(49, blendshapes[29]);
        skinnedMeshRenderer.SetBlendShapeWeight(50, blendshapes[28]);
        skinnedMeshRenderer.SetBlendShapeWeight(51, blendshapes[31]);
        skinnedMeshRenderer.SetBlendShapeWeight(52, blendshapes[30]);
        skinnedMeshRenderer.SetBlendShapeWeight(53, blendshapes[33]);
        skinnedMeshRenderer.SetBlendShapeWeight(54, blendshapes[32]);
        skinnedMeshRenderer.SetBlendShapeWeight(55, blendshapes[34]);
        skinnedMeshRenderer.SetBlendShapeWeight(56, blendshapes[35]);
        skinnedMeshRenderer.SetBlendShapeWeight(57, blendshapes[36]);
        skinnedMeshRenderer.SetBlendShapeWeight(58, blendshapes[37]);
        skinnedMeshRenderer.SetBlendShapeWeight(59, blendshapes[39]);
        skinnedMeshRenderer.SetBlendShapeWeight(60, blendshapes[38]);

        // brow
        skinnedMeshRenderer.SetBlendShapeWeight(61, blendshapes[40]);
        skinnedMeshRenderer.SetBlendShapeWeight(62, blendshapes[41]);
        skinnedMeshRenderer.SetBlendShapeWeight(63, blendshapes[42]);
        skinnedMeshRenderer.SetBlendShapeWeight(64, blendshapes[44]);
        skinnedMeshRenderer.SetBlendShapeWeight(65, blendshapes[43]);

        // cheek
        skinnedMeshRenderer.SetBlendShapeWeight(66, blendshapes[45]);
        skinnedMeshRenderer.SetBlendShapeWeight(67, blendshapes[46]);
        skinnedMeshRenderer.SetBlendShapeWeight(68, blendshapes[47]);

        // nose
        skinnedMeshRenderer.SetBlendShapeWeight(69, blendshapes[48]);
        skinnedMeshRenderer.SetBlendShapeWeight(70, blendshapes[49]);































    }
}
