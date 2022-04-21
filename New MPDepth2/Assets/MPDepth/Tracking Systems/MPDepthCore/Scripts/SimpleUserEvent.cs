using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MPDepthCore {

    [CreateAssetMenu]
    public class SimpleUserEvent : ScriptableObject {

        public delegate void UserEventDelegate();

        public event UserEventDelegate EventOccured;

        public void Invoke() {
            EventOccured?.Invoke();
        }
    }
}
