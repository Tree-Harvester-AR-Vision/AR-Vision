using System.Text;
using UnityEngine;
using UnityEngine.Assertions;
using Unity.Collections;
using Unity.Networking.Transport;

public class Server : MonoBehaviour {

    public NetworkDriver m_Driver;

    private NativeList<NetworkConnection> m_Connections;

    void Start() {
        m_Driver = NetworkDriver.Create();
        var endpoint = NetworkEndPoint.AnyIpv4;
        endpoint.Port = 7000;

        if (m_Driver.Bind(endpoint) != 0) {
            Debug.LogError("Failed to bind to port 7000");
		} else {
            m_Driver.Listen();
		}

        m_Connections = new NativeList<NetworkConnection>(16, Allocator.Persistent);
    }

    void Update() {
        m_Driver.ScheduleUpdate().Complete();

        // Clean up connections
        for (int i = 0; i < m_Connections.Length; i++) {
            if (!m_Connections[i].IsCreated) {
                m_Connections.RemoveAtSwapBack(i);
                --i;
			}
		}

        // Accept new connections
        NetworkConnection c;
        while ((c = m_Driver.Accept()) != default) {
            m_Connections.Add(c);
            Debug.Log("Accepted a connection");
		}

		for (int i = 0; i < m_Connections.Length; i++) {
			if (!m_Connections[i].IsCreated)
				Assert.IsTrue(true);

			NetworkEvent.Type cmd;
			while ((cmd = m_Driver.PopEventForConnection(m_Connections[i], out DataStreamReader stream)) != NetworkEvent.Type.Empty) {
				if (cmd == NetworkEvent.Type.Data) {

					// Converts bytes to string
					// commented out because doesn't work yet
					// NativeArray<byte> byteRead = new();
					// stream.ReadBytes(byteRead);
					// var byteSlice = new NativeSlice<byte>(byteRead).SliceConvert<byte>();
					// byte[] byteArr = new byte[] { };
					// byteSlice.CopyTo(byteArr);
					// string text = Encoding.ASCII.GetString(byteArr);

					// Debug.Log("Got " + text + " from client");

				} else if (cmd == NetworkEvent.Type.Disconnect) {
					Debug.Log("Client disconnected from server");
					m_Connections[i] = default;
				}
			}
		}
	}

	void OnDestroy() {
		if (m_Driver.IsCreated) {
            m_Driver.Dispose();
            m_Connections.Dispose();
		}
	}
}
