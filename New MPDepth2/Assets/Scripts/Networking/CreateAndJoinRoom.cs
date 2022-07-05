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
        if (PhotonNetwork.CountOfPlayersInRooms == 0)
        {
            PhotonNetwork.CreateRoom("Test1");
        }

        else
        {
            Debug.Log("T");
            JoinRoom();
        }

    }

    public void JoinRoom()
    {

        PhotonNetwork.JoinRoom("Test1");
    }

    public override void OnJoinedRoom()
    {

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
