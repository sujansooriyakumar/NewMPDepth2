using StreamTrackingSystem;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Net;
using UnityEngine;

public class TrackingIPSave : MonoBehaviour
{
    [SerializeField] StreamTrackingDataReceiver dataReceiver;
    static string Filename => "streamNetworkSettingsSave.json";

    static string FilePath => Path.Combine(FileFolder, Filename);
    static string FileFolder => Path.Combine(Application.persistentDataPath, "Save");
    private void OnEnable()
    {
        Load();
    }

    public void Save()
    {
        Debug.Log("test");
        Directory.CreateDirectory(FileFolder);
        NetworkSettingsSave saveData = new NetworkSettingsSave
        {
            IP = dataReceiver.IP,
            Port = 32123

        };
        string json = JsonUtility.ToJson(saveData);
        File.WriteAllText(FilePath, json);
    }

    public void Load()
    {
        if (File.Exists(FilePath))
        {
            string json = File.ReadAllText(FilePath);
            NetworkSettingsSave loadSaveData = JsonUtility.FromJson<NetworkSettingsSave>(json);
            IPAddress ipAddress = IPAddress.Parse(loadSaveData.IP);
            dataReceiver.SetIP(ipAddress);
            dataReceiver.SetPort(32123);
        }
    }
    

}

[Serializable]
public class NetworkSettingsSave
{
    public string IP;
    public int Port;
}
