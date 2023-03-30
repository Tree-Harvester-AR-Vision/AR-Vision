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
    private bool connected;

    private void Start() {
        
        socket = new ClientWebSocket();
        specified = false;

        // to connect, make sure to use computer's current IP address, otherwise hololens build
        // will not connect
        try
        {
            Connected = socket.ConnectAsync(new Uri($"ws://{IP}:7000"), CancellationToken.None);
            Connected.Wait();
            connected = true;
        }
        catch (Exception ex)
        {
            connected = false;
            Debug.LogException(ex);
        }
        
    }

    private async void Update() {
        //cube.GetComponent<Renderer>().material.color = new Color(255, 0, 0);
        try
        {
            if (!connected)
            {
                Debug.Log("Initial Connection failed. Won't be able to retrieve any data");
            }
            else
            {
                if (!specified)
                {
                    await socket.SendAsync(Encoding.UTF8.GetBytes("R"), WebSocketMessageType.Text, true, CancellationToken.None);
                    specified = true;
                    string message = "Connection Complete!";
                    Debug.Log(message);
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
                        else if (newTree.Substring(0, 1) == "L")
                        {
                            UpdateTrees(newTree.Substring(6));
                        }
                        //GREEN
                        cube.GetComponent<Renderer>().material.color = new Color(124, 252, 0);
                    }
                }
            }
        }
        catch (Exception ex)
        {
            //RED
            connectionAttempt++;
            specified = false;
            cube.GetComponent<Renderer>().material.color = new Color(255, 0, 0);
            Debug.Log($"#\t{ex.Message}");
            Debug.Log($"#\tConnection failed ({connectionAttempt})");
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
        string recvStr = "";

        WebSocketReceiveResult result;
        recieving = true;
        try
        {
            using (MemoryStream ms = new MemoryStream())
            {
                do
                {
                    result = await socket.ReceiveAsync(buffer, CancellationToken.None);
                    ms.Write(buffer.Array, buffer.Offset, result.Count);
                } while (!result.EndOfMessage);

                ms.Seek(0, SeekOrigin.Begin);
                using (StreamReader reader = new StreamReader(ms, Encoding.UTF8))
                    recvStr = await reader.ReadToEndAsync();
            }
        }
        catch (Exception ex)
        {
            Debug.LogError(ex);
        }

        recieving = false;

        return recvStr;
    }
}
