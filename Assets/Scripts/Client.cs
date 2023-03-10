using UnityEngine;
using Unity.Networking.Transport;

public class Client : MonoBehaviour {

    public NetworkDriver m_Driver;
    public NetworkConnection m_Connection;
    public bool Done;
    public BoundingBoxRenderer BBRenderer;

    private bool ListeningStage;
    private NetworkPipeline m_RelPL;
    private NetworkPipeline m_FragPL;

    void Start() {
        m_Driver = NetworkDriver.Create();
        m_RelPL = m_Driver.CreatePipeline(typeof(ReliableSequencedPipelineStage));
        m_FragPL = m_Driver.CreatePipeline(typeof(FragmentationPipelineStage));
        m_Connection = default;

        var endpoint = NetworkEndPoint.LoopbackIpv4;
        endpoint.Port = 7000;
        m_Connection = m_Driver.Connect(endpoint);
    }

    void Update() {
        m_Driver.ScheduleUpdate().Complete();

        if (!m_Connection.IsCreated) {
            Debug.LogError("Something went wrong during connect");
            return;
		}

        if (!ListeningStage) {
            StartupSequence();
        } else { ListeningSequence(); }

		
    }

	public void OnDestroy() {
        m_Driver.Dispose();
	}

    private void StartupSequence() {
        NetworkEvent.Type cmd;
		while ((cmd = m_Connection.PopEvent(m_Driver, out DataStreamReader stream)) != NetworkEvent.Type.Empty) {
            if (cmd == NetworkEvent.Type.Connect) {
                Debug.Log("Now connected to server");

                // Sends type of client to server
                TransportHelper.SendString(m_Driver, m_RelPL, m_Connection, "receiver");
                ListeningStage = true;

			} else if (cmd == NetworkEvent.Type.Disconnect) {
                Debug.Log("Client got disconnected from server");
                m_Connection = default;
			}
		}
    }

    private void ListeningSequence() {
        NetworkEvent.Type cmd;
        while ((cmd = m_Connection.PopEvent(m_Driver, out DataStreamReader stream, out m_FragPL)) != NetworkEvent.Type.Empty) {
            if (cmd == NetworkEvent.Type.Data) {
                string text = TransportHelper.ReceiveString(stream);
                
                BBRenderer.ParseBoundingBoxData(text);
            }
        }
    }
}
