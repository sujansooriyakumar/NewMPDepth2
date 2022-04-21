using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
public class Spawner : MonoBehaviour
{
    [SerializeField] GameObject player;

    public void Spawn()
    {
        PhotonNetwork.Instantiate(player.name, Vector3.zero, Quaternion.identity);
    }
}
