using DataHandler;
using Networking;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;
using TcpClient = Networking.TcpClient;
using UdpClient = Networking.UdpClient;

public class Client : MonoBehaviour
{
    public string IP = "localhost";
    public ushort Port = 7000;
    public ConnectionType Type;
    public DataType receiverType;
    public TextMeshPro MessageBox;
    private IWebClient _client;

    void Start()
    {
        IDataReceiver receiver = null;
        switch (receiverType)
        {
            case DataType.Tree:
                receiver = GetComponent<TreeUpdateHandler>();
                break;
            case DataType.Pose:
                receiver = GetComponent<CalibrationHandler>();
                break;
            case DataType.LocalPose:
                receiver = GetComponent<LocalCalibrationHandler>();
                break;
        }

        if (receiver != null)
        {
            switch (Type)
            {
                case ConnectionType.None:
                    _client = new LocalClient(MessageBox, receiver);
                    break;
                case ConnectionType.TCP:
                    _client = new TcpClient(IP, Port, MessageBox, receiver);
                    break;
                case ConnectionType.UDP:
                    _client = new UdpClient(IP, Port, MessageBox, receiver);
                    break;
            }
        }
        else
        {
            Debug.LogError($"Could not find receiver of type {receiverType.ToString()} in the GameObject {name}");
        }
    }

    void Update()
    {
        _client.Update();
    }

    public void OnDestroy()
    {
        _client.Remove();
    }
}

public enum DataType
{
    Pose,
    Tree,
    LocalPose
}

public enum ConnectionType
{
    None,
    TCP,
    UDP
}