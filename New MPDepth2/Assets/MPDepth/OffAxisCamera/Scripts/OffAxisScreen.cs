using JetBrains.Annotations;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace OffAxisCamera.ScreenConfiguration
{
    public abstract class OffAxisScreen : ScriptableObject
    {
        [PublicAPI]
        public abstract Vector2 Dimensions { get; }

        [PublicAPI]
        public abstract float Width { get; }

        [PublicAPI]
        public abstract float Height { get; }
    }
}
