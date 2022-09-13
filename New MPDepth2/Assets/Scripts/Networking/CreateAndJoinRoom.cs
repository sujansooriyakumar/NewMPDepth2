using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;


public class CreateAndJoinRoom : MonoBehaviourPunCallbacks
{
    [SerializeField] InputField lobbyName;
    [SerializeField] NetworkManager networkManager;
    [SerializeField] Text status;
    [SerializeField] GameObject connect;
    [SerializeField] GameObject disconnect;
    bool isConnected;
    string lobbyID;
    public void UpdateName(string s)
    {
        lobbyID = s;
    }

    public void CreateRoom()
    {
        PhotonNetwork.CreateRoom(lobbyID);
    }

    public void JoinRoom()
    {

        PhotonNetwork.JoinRoom(lobbyID);
    }

    public override void OnJoinedRoom()
    {
        status.gameObject.SetActive(true);
        status.text = "Joined room " + lobbyID;
        connect.SetActive(false);
        disconnect.SetActive(true);
        Debug.Log("Joined room: " + PhotonNetwork.CurrentRoom.Name);
        Debug.Log("Player count: " + PhotonNetwork.CurrentRoom.PlayerCount);
        networkManager.GetView().RPC("SetIsConnected", RpcTarget.OthersBuffered, true);
        FindObjectOfType<Spawner>().Spawn();
        isConnected = true;
        networkManager.isConnected = true;
        networkManager.UpdateAvatar();
        if(networkManager.GetURL() == "") networkManager.GetView().RPC("SetAvatarID", RpcTarget.OthersBuffered, CharacterSelector.instance.index);
        else
        {
            networkManager.GetView().RPC("LoadAvatar", RpcTarget.OthersBuffered, networkManager.GetURL());
        }
        Debug.Log(PhotonNetwork.CountOfRooms);


    }

    public override void OnCreatedRoom()
    {
        status.gameObject.SetActive(true);
        status.text = "Created room " + lobbyID;
    }

    public override void OnJoinRoomFailed(short returnCode, string message)
    {
        Debug.Log(message);
    }

    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        Debug.Log(message);
    }

 

    public bool GetIsConnected()
    {
        return isConnected;
    }

   

}
