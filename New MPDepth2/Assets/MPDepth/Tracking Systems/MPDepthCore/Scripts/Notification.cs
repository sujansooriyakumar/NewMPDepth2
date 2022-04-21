using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MPDepthCore
{
    public class Notification : MonoBehaviour
    {
        public delegate void NotifyUserEvent(string message, MessageType messageType, float fadeTime);

        public static event NotifyUserEvent UserNotified;

        public static void NotifyUser(string message, MessageType messageType, float fadeTime) {
            UserNotified?.Invoke(message, messageType, fadeTime);
        }

        public enum MessageType {
            Waiting,
            Error,
            Success,
            Standard
        }
    }
}
