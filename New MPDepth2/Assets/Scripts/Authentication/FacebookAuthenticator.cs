//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;
//using Facebook.Unity;
//using Photon.Pun;
//using Photon.Realtime;
//using System;

//public class FacebookAuthenticator : MonoBehaviourPunCallbacks
//{
//    [SerializeField] CreateAndJoinRoom roomCreator;

//    private void Awake()
//    {
//        if(FB.IsInitialized == false)
//        {
//            FB.Init(InitCallback);
//        }
//        else
//        {
//            FacebookLogin();
//        }
//    }

//    private void InitCallback()
//    {
//        if (FB.IsInitialized)
//        {
//            FacebookLogin();
//        }
//        else
//        {
//            Debug.Log("Failed to init the Facebook SDK");
//        }
//    }

//    private void FacebookLogin()
//    {
//        if (FB.IsLoggedIn)
//        {
//            OnFacebookLoggedIn();
//        }
//        else
//        {
//            var perms = new List<string>()
//            {
//                "public_profile",
//                "email",
//                "user_friends" };
//            FB.LogInWithReadPermissions(perms, AuthCallback);
//        }
//    }

//    private void AuthCallback(ILoginResult result)
//    {
//        if (FB.IsLoggedIn)
//        {
//            OnFacebookLoggedIn();
//        }
//        else
//        {
//            Debug.LogErrorFormat("Error in Facebook login {0}", result.Error);
//        }
//    }

//    private void OnFacebookLoggedIn()
//    {
//        string aToken = AccessToken.CurrentAccessToken.TokenString;
//        string facebookID = AccessToken.CurrentAccessToken.UserId;
//        PhotonNetwork.AuthValues = new AuthenticationValues();
//        PhotonNetwork.AuthValues.AuthType = CustomAuthenticationType.Facebook;
//        PhotonNetwork.AuthValues.UserId = facebookID;
//        PhotonNetwork.AuthValues.AddAuthParameter("token", aToken);
//        FindObjectOfType<ConnectToServer>().Connect();
//        //PhotonNetwork.ConnectUsingSettings();


//    }

//    public override void OnConnectedToMaster()
//    {
//        PhotonNetwork.JoinLobby();
//        Debug.Log("Joining Lobby");
//    }

//    public override void OnJoinedLobby()
//    {
//        roomCreator.CreateRoom();
//        Debug.Log("Joined Lobby");
//    }
//    public void OnApplicationQuit()
//    {
//        FB.LogOut();
//    }
//}
