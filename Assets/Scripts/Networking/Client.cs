using System.Net.Sockets;
using System.Text;
using Networking;
using UnityEngine;
using Unity.Collections;
using Unity.Networking.Transport;
using Unity.Networking.Transport.Utilities;
using TcpClient = Networking.TcpClient;

public class Client : MonoBehaviour {
	
	public string IP = "localhost";
	public ushort Port = 7000;
	public ConnectionType Type;
	public GameObject Cube;
	public BoundingBoxRenderer BBrenderer;

	private IWebClient _client;

    public NetworkDriver m_Driver;
    public NetworkConnection m_Connection;
    public bool Done;

    NetworkPipeline m_RelPL;

    void Start() {
	    switch (Type)
	    {
		    case ConnectionType.None:
			    break;
		    case ConnectionType.TCP:
			    _client = new TcpClient(IP, Port, Cube, BBrenderer);
			    break;
		    case ConnectionType.UDP:
			    _client = new UdpClient(IP, Port, Cube, BBrenderer);
			    break;
	    }
    }

    void Update()
    {
	    _client.Update();
    }

	public void OnDestroy() {
        m_Driver.Dispose();
	}
}

public enum ConnectionType
{
	None,
	TCP,
	UDP
}
