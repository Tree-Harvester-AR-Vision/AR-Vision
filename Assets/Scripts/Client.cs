using System.Text;
using Unity.Collections;
using UnityEngine;
using Unity.Networking.Transport;

public class Client : MonoBehaviour {

    public NetworkDriver m_Driver;
    public NetworkConnection m_Connection;
    public bool Done;

    void Start() {
        m_Driver = NetworkDriver.Create();
        m_Connection = default;

        var endpoint = NetworkEndPoint.LoopbackIpv4;
        endpoint.Port = 7000;
        m_Connection = m_Driver.Connect(endpoint);
    }

    void Update() {
        m_Driver.ScheduleUpdate().Complete();

        if (!m_Connection.IsCreated) {
            if (!Done) {
                Debug.LogError("Something went wrong during connect");
			}

            return;
		}

		NetworkEvent.Type cmd;

		while ((cmd = m_Connection.PopEvent(m_Driver, out DataStreamReader stream)) != NetworkEvent.Type.Empty) {
            if (cmd == NetworkEvent.Type.Connect) {
                Debug.Log("Now connected to server");

                // Sends type of client this client is
                // TODO: Make reliable
                m_Driver.BeginSend(m_Connection, out var writer);

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
		}
    }

	public void OnDestroy() {
        m_Driver.Dispose();
	}
}
