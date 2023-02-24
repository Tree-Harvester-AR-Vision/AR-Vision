using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Collections;
using Unity.Networking.Transport;

public static class TransportHelper {
    
    public static void SendString(NetworkDriver driver, NetworkPipeline pipeline, NetworkConnection connection, string str) {

        driver.BeginSend(pipeline, connection, out var writer);

        // Creates a transportable string
        FixedString128Bytes formmatedStr = FixedString.Format(str, 0); // 0 doesn't mean anything
        writer.WriteFixedString128(formmatedStr);

        driver.EndSend(writer);

        Debug.Log("Sent");
    }

    public static string ReceiveString(DataStreamReader stream) {
        FixedString128Bytes str = stream.ReadFixedString128();
		return str.ToString();
    }
}
