using System.Net.Sockets;
using System.Text;
using Networking;
using UnityEngine;
using Unity.Collections;
using Unity.Networking.Transport;
using Unity.Networking.Transport.Utilities;
using TcpClient = Networking.TcpClient;
using UdpClient = Networking.UdpClient;

public class Client : MonoBehaviour {
	
    public string IP = "localhost";
    public ushort Port = 7000;
    public ConnectionType Type;
    public GameObject Cube;
    public BoundingBoxRenderer BBrenderer;
    public double UdpTimeout = 1.0;

    private IWebClient _client;

    void Start() {
        switch (Type)
        {
            case ConnectionType.None:
                break;
            case ConnectionType.TCP:
                _client = new TcpClient(IP, Port, Cube, BBrenderer);
                break;
            case ConnectionType.UDP:
                _client = new UdpClient(IP, Port, Cube, BBrenderer, UdpTimeout);
                break;
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

public enum ConnectionType
{
    None,
    TCP,
    UDP
}