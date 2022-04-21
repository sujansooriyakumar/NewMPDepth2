using JetBrains.Annotations;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace OffAxisCamera.ScreenConfiguration
{

    public abstract class OffAxisScreenProvider : MonoBehaviour
    {
        [PublicAPI]
        public abstract Vector2 Dimensions { get; }

        [PublicAPI]
        public abstract float Width { get; }

        [PublicAPI]
        public abstract float Height { get; }

    }

    public class ManualScreenProvider : OffAxisScreenProvider
    {
        [SerializeField] OffAxisScreen screen = default;

        public override Vector2 Dimensions => screen.Dimensions;
        public override float Width => screen.Width;
        public override float Height => screen.Height;

    }
}