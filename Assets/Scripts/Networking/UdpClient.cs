using System;
using System.Net;
using System.Text;
using Networking;
using UnityEngine;

public class UdpClient : TreeUpdateHandler, IWebClient {
	private GameObject _cube;
	private readonly System.Net.Sockets.UdpClient _client;
	
    public bool Done;
    
    private readonly string _ip;
    private readonly ushort _port;
    private IPEndPoint _remoteIpEndPoint;

    public UdpClient(string ip, ushort port, GameObject gameObject, BoundingBoxRenderer boundingBoxRenderer)
    {
	    _ip = ip;
	    _port = port;
	    _cube = gameObject;
	    _client = new System.Net.Sockets.UdpClient(port);
	    _remoteIpEndPoint = new IPEndPoint(IPAddress.Any, 0);
	    BBrenderer = boundingBoxRenderer;
    }

    public void Update() {
	    try{
		    // Blocks until a message returns on this socket from a remote host.
		    Byte[] receiveBytes = _client.Receive(ref _remoteIpEndPoint);

		    string returnData = Encoding.ASCII.GetString(receiveBytes);
		    
		    UpdateTrees(returnData);


	    }
	    catch ( Exception e ){
		    Console.WriteLine(e.ToString());
	    }

	    /*while ((cmd = m_Connection.PopEvent(m_Driver, out DataStreamReader stream)) != NetworkEvent.Type.Empty) {
            if (cmd == NetworkEvent.Type.Connect) {
                Debug.Log("Now connected to server");

                // Sends type of client this client is
                m_Driver.BeginSend(m_RelPL, m_Connection, out var writer);

                // Creates a transportable string
                FixedString128Bytes formmatedStr = FixedString.Format("reciever", 0); // 0 doesn't mean anything
                writer.WriteFixedString128(formmatedStr);

                m_Driver.EndSend(writer);

                Debug.Log("Sent");

                // write code for receiving data here

			} else if (cmd == NetworkEvent.Type.Data) {
                uint value = stream.ReadUInt();
                Debug.Log("Got the value = " + value + " back from server");
                Done = true;
                m_Connection.Disconnect(m_Driver);
                m_Connection = default;
			} else if (cmd == NetworkEvent.Type.Disconnect) {
                Debug.Log("Client got disconnected from server");
                m_Connection = default;
			}
		}*/
    }

	public void OnDestroy() {
        _client.Dispose();
	}
}
