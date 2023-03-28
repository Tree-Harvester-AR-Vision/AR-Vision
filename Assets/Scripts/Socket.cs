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
using static Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc;

public class Socket : MonoBehaviour {

    static ClientWebSocket socket;

    public string IP;
    private int connectionAttempt;
    public GameObject cube;

    Task Connected;
    bool specified;
    bool recieving;


    public BoundingBoxRenderer BBrenderer;
    private void Start() {
        
        socket = new ClientWebSocket();
        specified = false;

        // to connect, make sure to use computer's current IP address, otherwise hololens build
        // will not connect
        Connected = socket.ConnectAsync(new Uri($"ws://{IP}:7000"), CancellationToken.None);
    }

    private async void Update() {
        try
        {
            if (!specified)
            {
                string message = "Connection Complete!";
                Debug.Log(message);
                specified = true;
                await socket.SendAsync(Encoding.UTF8.GetBytes("R"), WebSocketMessageType.Text, true, CancellationToken.None);
                //Orange
                cube.GetComponent<Renderer>().material.color = new Color(0, 0, 255);
            }
            else if (specified)
            {
                if (!recieving)
                {
                    Debug.Log("Retrieving values");
                    string newTree = await Receive();
                    if (newTree.Substring(0, 1) == "C")
                        GetNewTrees(newTree.Substring(6));
                    else if (newTree.Substring(0, 1) == "U")
                        UpdateNewTrees(newTree.Substring(6));
                    else if (newTree.Substring(0, 1) == "R")
                    {
                        BBrenderer.ClearTrees(); // Can call this because remove and add trees are done as separate events
                        RemoveTrees(newTree.Substring(6));
                    }
                    else if(newTree.Substring(0, 1) == "L")
                    {
                        UpdateTrees(newTree.Substring(6));
                    }
                    //GREEN
                    cube.GetComponent<Renderer>().material.color = new Color(124, 252, 0);
                }
            }
        }
        catch (Exception ex)
        {
            //RED
            cube.GetComponent<Renderer>().material.color = new Color(255, 0, 0);
            connectionAttempt++;
            Debug.Log($"#\t{ex.Message}");
            Debug.Log($"#\tAttempted Connection {connectionAttempt}");
        }
        
    }

    private void UpdateTrees(string treeData)
    {
        List<InputTree>[] input = JsonConvert.DeserializeObject<List<InputTree>[]>(treeData);
        foreach(InputTree tree in input[0])
        {
            BBrenderer.CreateTree(tree);
        }
        foreach (InputTree tree in input[1])
        {
            BBrenderer.UpdateTree(tree);
        }
        foreach (InputTree tree in input[2])
        {
            BBrenderer.RemoveTrees(tree);
        }
    }

    private void UpdateNewTrees(string tree) {
        //Debug.Log("Update: " + tree);

        InputTree inputTree = JsonConvert.DeserializeObject<InputTree>(tree);
        BBrenderer.UpdateTree(inputTree);
    }

        private void GetNewTrees(string tree) {
        //Debug.Log("Create: " + tree);

        InputTree inputTree = JsonConvert.DeserializeObject<InputTree>(tree);
        BBrenderer.CreateTree(inputTree);
    }

    private void RemoveTrees(string tree) {
        //Debug.Log("Remove: " + tree);
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
