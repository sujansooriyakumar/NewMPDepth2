using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Facebook.Unity;
using Photon;
using Photon.Pun;
using Photon.Realtime;

public class FacebookController : MonoBehaviourPunCallbacks
{
    private void Awake()
    {
        if (!FB.IsInitialized)
        {
            FB.Init(InitCallback);
        }
        else
        {
            FacebookLogin();
        }
    }

    private void InitCallback()
    {
        if (FB.IsInitialized)
        {
            FacebookLogin();
        }
    }

    private void FacebookLogin()
    {
        if (FB.IsLoggedIn)
        {
            OnFacebookLoggedIn();
        }
        else
        {
            var perms = new List<string>() { "public_profile", "email", "user_friends" };
            FB.LogInWithReadPermissions(perms, AuthCallback);
        }
    }

    private void AuthCallback(ILoginResult result)
    {
        if (FB.IsLoggedIn)
        {
            OnFacebookLoggedIn();
        }
        else
        {
            Debug.LogErrorFormat("Error in Facebook login {0}", result.Error);
        }
    }

    private void OnFacebookLoggedIn()
    {
        // AccessToken class will have session details
        string aToken = AccessToken.CurrentAccessToken.TokenString;
        string facebookId = AccessToken.CurrentAccessToken.UserId;
        PhotonNetwork.AuthValues = new AuthenticationValues();
        PhotonNetwork.AuthValues.AuthType = CustomAuthenticationType.Facebook;
        PhotonNetwork.AuthValues.UserId = facebookId; // alternatively set by server
        PhotonNetwork.AuthValues.AddAuthParameter("token", aToken);
        PhotonNetwork.ConnectUsingSettings();
    }

    public override void OnConnectedToMaster()
    {
        PhotonNetwork.JoinLobby();
        Debug.Log("Joining Lobby");
    }

    public override void OnJoinedLobby()
    {
        Debug.Log("Joined Lobby");
    }
}
