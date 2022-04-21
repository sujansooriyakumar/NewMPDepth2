using Client;
using MPDepthCore.Calibration.Camera;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Net;
using UnityEngine;

namespace StreamTrackingSystem
{
    public class StreamTrackingDataReceiver : TrackingStreamConsumer<RawTrackingData>
    {
        [SerializeField] public RawTrackingData ReceivedData;

        

        public int Port => Port;
        public string IP => address;

        protected override void SetData(RawTrackingData receivedData)
        {
            ReceivedData = receivedData;
        }

     
        public void SetPort(int newPort)
        {
            port = newPort;
        }

 
        public void SetIP(IPAddress newAddress)
        {
            this.address = newAddress.ToString();
        }

        

    }
}





