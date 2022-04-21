using UnityEngine;

namespace MPDepthCore {
    [CreateAssetMenu]
    public class ToggleUserEvent : ScriptableObject {

        [SerializeField] bool currentState = default;
        
        
        
        public delegate void UserEventDelegate(bool toggleState);

        public event UserEventDelegate Toggled;

        public bool CurrentState => currentState;

        public void Invoke(bool toggleState) {
            currentState = toggleState;
            Toggled?.Invoke(toggleState);
           
        }

        public void InitializeState(bool toggleState) {
            currentState = toggleState;
        }

        public void ChangeTo(bool toggleState) {
            currentState = toggleState;
            Toggled?.Invoke(toggleState);
        }
    }
}