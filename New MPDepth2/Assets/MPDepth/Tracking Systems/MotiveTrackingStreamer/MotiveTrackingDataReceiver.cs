using Client;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using UnityEngine;

public class MotiveTrackingDataReceiver : TrackingStreamConsumer<MotiveRigidBodyData>
{
    [SerializeField] MotiveRigidBodyData ReceivedData;
    [SerializeField] Vector3 phonePos;
    [SerializeField] Vector3 phoneRot;
    [SerializeField] Vector3 screenPos;
    [SerializeField] Vector3 screenRot;
    public int Port => Port;
    public string IP => address;

    public void SetPort(int newPort)
    {
        port = newPort;
    }


    public void SetIP(IPAddress newAddress)
    {
        this.address = newAddress.ToString();
    }

    protected override void SetData(MotiveRigidBodyData receivedData)
    {
        ReceivedData = receivedData;
        phonePos = receivedData.phonePos;
        phoneRot = receivedData.phoneRot;
        screenPos = receivedData.screenPos;
        screenRot = receivedData.screenRot;
    }

    public MotiveRigidBodyData GetData()
    {
        return ReceivedData;
    }


}
