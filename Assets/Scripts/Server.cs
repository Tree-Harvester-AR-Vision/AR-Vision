using UnityEngine;
using Unity.Collections;
using UnityEngine.Assertions;
using Unity.Networking.Transport;

public class Server : MonoBehaviour {

    public NetworkDriver m_Driver;

    private NativeList<NetworkConnection> m_Connections;
	private NetworkPipeline m_RelPL;
	private NetworkPipeline m_FragPL;
	private NetworkConnection Recvr = default;
	private NetworkConnection Trnsmtr = default;

    private void Start() {
        m_Driver = NetworkDriver.Create();
		m_RelPL = m_Driver.CreatePipeline(typeof(ReliableSequencedPipelineStage));
		m_FragPL = m_Driver.CreatePipeline(typeof(FragmentationPipelineStage));
        var endpoint = NetworkEndPoint.AnyIpv4;
        endpoint.Port = 7000;

        if (m_Driver.Bind(endpoint) != 0) {
            Debug.LogError("Failed to bind to port 7000");
		} else {
            m_Driver.Listen();
		}

        m_Connections = new NativeList<NetworkConnection>(16, Allocator.Persistent);
    }

    private void Update() {
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

		string newTree = ReceiveData();
		SendData(newTree);

	}

	private void OnDestroy() {
		if (m_Driver.IsCreated) {
            m_Driver.Dispose();
            m_Connections.Dispose();
		}
	}


	private void WaitForConnections() {
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
					string text = TransportHelper.ReceiveString(stream);

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

		if (Recvr != default && Trnsmtr != default) {
			TransportHelper.SendString(m_Driver, m_RelPL, Trnsmtr, "ready");
		}
	}

	private string ReceiveData() {
		NetworkEvent.Type cmd;
		string text = "";
		while ((cmd = m_Driver.PopEventForConnection(Trnsmtr, out DataStreamReader stream, out m_FragPL)) != NetworkEvent.Type.Empty) {
			if (cmd == NetworkEvent.Type.Data) {
				text = TransportHelper.ReceiveString(stream);
			} else if (cmd == NetworkEvent.Type.Disconnect) {
				Debug.Log("Client disconnected from server");
				Trnsmtr = default;
			}
		} 

		return text;
	}

	private void SendData(string newTree) {
		TransportHelper.SendString(m_Driver, m_FragPL, Recvr, newTree);
	}
}
