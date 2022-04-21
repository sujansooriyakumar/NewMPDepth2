using System;
using UnityEngine;

namespace MPDepthCore.Calibration {
    
    public static class ScreenSizeDetector {

        public static ScreenInfo GetDeviceScreenSize() {
            
            string currentDeviceName = SystemInfo.deviceModel;

            float pixelWidth = UnityEngine.Screen.width;
            float pixelHeight = UnityEngine.Screen.height;
            float dpi = UnityEngine.Screen.dpi;
            
            float screenWidth =(float)Math.Round(((pixelWidth / dpi) * 0.0254) * 100f) / 100f;
            float screenHeight =(float)Math.Round(((pixelHeight / dpi) * 0.0254) * 100f) / 100f;

            ScreenInfo screenInfo = new ScreenInfo {
                Device = currentDeviceName,
                ScreenWidth = screenWidth,
                ScreenHeight = screenHeight
            };
            
            return screenInfo;
        }

        public class ScreenInfo {
            public string Device = "Unknown";
            public float ScreenWidth = 0.1f;
            public float ScreenHeight = 0.1f;

            public override string ToString() {
                return $"Screen Info: Device={Device}, Width={ScreenWidth}, Height={ScreenHeight}";
            }
        }

    }
}
