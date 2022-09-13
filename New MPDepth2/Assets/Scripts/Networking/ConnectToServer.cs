using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
using Photon.Realtime;

public class ConnectToServer : MonoBehaviourPunCallbacks
{

    [SerializeField] Text statusField;
    [SerializeField] GameObject lobbyCreatorUI;
    [SerializeField] GameObject connect;
    [SerializeField] GameObject disconnect;
    public void Connect()
    {
        statusField.gameObject.SetActive(true);
        statusField.text = "Connecting...";
        PhotonNetwork.ConnectUsingSettings();
        

    }


    public override void OnConnectedToMaster()
    {
        statusField.text = "Connected!";
        lobbyCreatorUI.SetActive(true);
    }

    public override void OnJoinedLobby()
    {
      
    }

    public void DisconnectFromServer()
    {
        PhotonNetwork.Disconnect();
        statusField.gameObject.SetActive(true);
        statusField.text = "Disconnecting...";
      
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        statusField.gameObject.SetActive(true);
        statusField.text = "Disconnected!";
        connect.SetActive(true);
        disconnect.SetActive(false);
    }
}
