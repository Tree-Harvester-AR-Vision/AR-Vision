using System;
using System.IO;
using System.Text;
using Newtonsoft.Json;
using System.Threading;
using System.Collections;
using System.Net.WebSockets;
using System.Threading.Tasks;
using System.Collections.Generic;
using UnityEngine;

public class Socket : MonoBehaviour {

    static ClientWebSocket socket;

    Task Connected;
    bool specified;

    private void Start() {
        
        socket = new ClientWebSocket();
        specified = false;

        Connected = socket.ConnectAsync(new Uri("ws://localhost:8000"), CancellationToken.None);
    }

    private async void Update() {
        if (Connected.IsCompleted && !specified) {
            Debug.Log("Connection Complete!");
            specified = true;
            await socket.SendAsync(Encoding.UTF8.GetBytes("R"), WebSocketMessageType.Text, true, CancellationToken.None);
        } else if (specified) {
            await GetNewTrees();           
        }
    }

    private async Task GetNewTrees() {
        ArraySegment<byte> buffer = new ArraySegment<byte>(new byte[2048]);
        string tree = await Receive();

        InputTree inputTree = JsonConvert.DeserializeObject<InputTree>(tree);

        Debug.Log($"Species: {inputTree.Species} Age: {inputTree.Age} Center: {inputTree.boundingBox.Center}");
    }

    private async Task<string> Receive() {
        ArraySegment<byte> buffer = new ArraySegment<byte>(new byte[2048]);
        string recvStr;

        WebSocketReceiveResult result;
        using (MemoryStream ms = new MemoryStream()) {
            do {
                result = await socket.ReceiveAsync(buffer, CancellationToken.None);
                ms.Write(buffer.Array, buffer.Offset, result.Count);
            } while (!result.EndOfMessage);

            ms.Seek(0, SeekOrigin.Begin);
            using (StreamReader reader = new StreamReader(ms, Encoding.UTF8))
                recvStr = await reader.ReadToEndAsync();
        }

        return recvStr;
    }
}
