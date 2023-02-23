using UnityEngine;
using Unity.Collections;
using UnityEngine.Assertions;
using Unity.Networking.Transport;

public class Server : MonoBehaviour {

    public NetworkDriver m_Driver;

    private NativeList<NetworkConnection> m_Connections;
	private NetworkPipeline m_RelPL;
	private NetworkConnection Recvr = default;
	private NetworkConnection Trnsmtr = default;

    void Start() {
        m_Driver = NetworkDriver.Create();
		m_RelPL = m_Driver.CreatePipeline(typeof(ReliableSequencedPipelineStage));
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

		// Wait until both transmitter and receiver are ready
		if (Recvr == default || Trnsmtr == default) {
			WaitForConnections();
			return;
		}

		// code for receiving and transmitting

	}

	void OnDestroy() {
		if (m_Driver.IsCreated) {
            m_Driver.Dispose();
            m_Connections.Dispose();
		}
	}


	void WaitForConnections() {
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
			while ((cmd = m_Driver.PopEventForConnection(m_Connections[i], out DataStreamReader stream, out m_RelPL)) != NetworkEvent.Type.Empty) {
				if (cmd == NetworkEvent.Type.Data) {

					// Makes data useable
					FixedString128Bytes str = stream.ReadFixedString128();
					string text = str.ToString();

					if (text == "receiver") {
						Recvr = m_Connections[i];
					} else if (text == "transmitter") {
						Trnsmtr = m_Connections[i];
					}

				} else if (cmd == NetworkEvent.Type.Disconnect) {
					Debug.Log("Client disconnected from server");
					m_Connections[i] = default;
				}
			}
		}
	}
}
