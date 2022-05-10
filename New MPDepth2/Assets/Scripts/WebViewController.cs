using System;
using System.Collections;
using System.Collections.Generic;
using ReadyPlayerMe;
using UnityEngine;
using UnityEngine.UI;

public class WebViewController : MonoBehaviour
{
    private GameObject avatar;

    [SerializeField] private WebView webView;
    [SerializeField] private GameObject loadingLabel = null;
    [SerializeField] private Button displayButton = null;
    [SerializeField] private Button closeButton = null;
    [SerializeField] Transform avatarParent;
    private string url;

    private void Start()
    {
        displayButton.onClick.AddListener(DisplayWebView);
        closeButton.onClick.AddListener(HideWebView);
    }

    // Display WebView or create it if not initialized yet 
    private void DisplayWebView()
    {
        if (webView == null)
        {
            webView = FindObjectOfType<WebView>();
        }

        if (webView.Loaded)
        {
            webView.SetVisible(true);
        }
        else
        {
            webView.CreateWebView();
            webView.OnAvatarCreated = OnAvatarCreated;
        }

        closeButton.gameObject.SetActive(true);
        displayButton.gameObject.SetActive(false);
    }

    private void HideWebView()
    {
        webView.SetVisible(false);
        closeButton.gameObject.SetActive(false);
        displayButton.gameObject.SetActive(true);
    }

    // WebView callback for retrieving avatar url
    private void OnAvatarCreated(string url_)
    {
        url = url_;
        Debug.Log(url);
        if (avatar) Destroy(avatar);

        webView.SetVisible(false);
        loadingLabel.SetActive(true);
        displayButton.gameObject.SetActive(false);
        closeButton.gameObject.SetActive(false);

        AvatarLoader avatarLoader = new AvatarLoader();
        avatarLoader.LoadAvatar(url, null, OnAvatarImported);

    }



    // AvatarLoader callback for retrieving loaded avatar game object
    private void OnAvatarImported(GameObject avatar_, AvatarMetaData metaData)
    {
        avatar = avatar_;
        loadingLabel.SetActive(false);
        displayButton.gameObject.SetActive(true);

        
        NetworkManager.instance.SetURL(url);
    }

   
    private void Destroy()
    {
        displayButton.onClick.RemoveListener(DisplayWebView);
        closeButton.onClick.RemoveListener(HideWebView);
    }

    public string GetURL()
    {
        return url;
    }
}
