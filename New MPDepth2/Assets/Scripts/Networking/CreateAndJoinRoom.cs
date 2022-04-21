using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;

public class CreateAndJoinRoom : MonoBehaviourPunCallbacks
{
    [SerializeField] InputField lobbyName;
    [SerializeField] NetworkManager networkManager;
    bool isConnected;

    public void CreateRoom()
    {
        PhotonNetwork.CreateRoom(lobbyName.text);
    }

    public void JoinRoom()
    {
        PhotonNetwork.JoinRoom(lobbyName.text);
    }

    public override void OnJoinedRoom()
    {
        Debug.Log("Joined room: " + PhotonNetwork.CurrentRoom.Name);
        Debug.Log("Player count: " + PhotonNetwork.CurrentRoom.PlayerCount);
        networkManager.SetIsConnected(true);
        FindObjectOfType<Spawner>().Spawn();
        isConnected = true;
    }

    public bool GetIsConnected()
    {
        return isConnected;
    }

}
