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
    bool recieving;

    public BoundingBoxRenderer BBrenderer;
    private void Start() {
        
        socket = new ClientWebSocket();
        specified = false;

        Connected = socket.ConnectAsync(new Uri("ws://localhost:7000"), CancellationToken.None);
    }

    private async void Update() {
        if (Connected.IsCompleted && !specified) {
            Debug.Log("Connection Complete!");
            specified = true;
            await socket.SendAsync(Encoding.UTF8.GetBytes("R"), WebSocketMessageType.Text, true, CancellationToken.None);
        } else if (specified) {
            if (!recieving) {
                string newTree = await Receive();
                if (newTree.Substring(0, 6) == "Create")
                    GetNewTrees(newTree.Substring(6));
                else if (newTree.Substring(0, 6) == "Update")
                    UpdateNewTrees(newTree.Substring(6));
                else if (newTree.Substring(0, 6) == "Remove") {
                    BBrenderer.ClearTrees(); // Can call this because remove and add trees are done as separate events
                    RemoveTrees(newTree.Substring(6));
                }
            }
        }
    }

    private void UpdateNewTrees(string tree) {
        Debug.Log("Update: " + tree);

        InputTree inputTree = JsonConvert.DeserializeObject<InputTree>(tree);
        BBrenderer.UpdateTree(inputTree);
    }

        private void GetNewTrees(string tree) {
        Debug.Log("Create: " + tree);

        InputTree inputTree = JsonConvert.DeserializeObject<InputTree>(tree);
        BBrenderer.CreateTree(inputTree);
    }

    private void RemoveTrees(string tree) {
        Debug.Log("Remove: " + tree);
        InputTree inputTree = JsonConvert.DeserializeObject<InputTree>(tree);
        BBrenderer.RemoveTrees(inputTree);
    }

    private async Task<string> Receive() {
        ArraySegment<byte> buffer = new ArraySegment<byte>(new byte[2048]);
        string recvStr;

        WebSocketReceiveResult result;
        recieving = true;
        using (MemoryStream ms = new MemoryStream()) {
            do {
                result = await socket.ReceiveAsync(buffer, CancellationToken.None);
                ms.Write(buffer.Array, buffer.Offset, result.Count);
            } while (!result.EndOfMessage);

            ms.Seek(0, SeekOrigin.Begin);
            using (StreamReader reader = new StreamReader(ms, Encoding.UTF8))
                recvStr = await reader.ReadToEndAsync();
        }

        recieving = false;

        return recvStr;
    }
}
