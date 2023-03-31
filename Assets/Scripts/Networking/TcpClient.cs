using System;
using System.Collections.Generic;
using System.IO;
using System.Net.WebSockets;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using Newtonsoft.Json;
using UnityEngine;

namespace Networking
{
    public class TcpClient : TreeUpdateHandler, IWebClient
    {
        static ClientWebSocket _socket;

        private int _connectionAttempt;
        private readonly GameObject _cube;

        bool _specified;
        bool _receiving;


        public BoundingBoxRenderer BBrenderer;
        private readonly bool _connected;

        public TcpClient(string ip, ushort port, GameObject gameObject, BoundingBoxRenderer boundingBoxRenderer)
        {
            _socket = new ClientWebSocket();
            _specified = false;
            _cube = gameObject;

            // to connect, make sure to use computer's current IP address, otherwise hololens build
            // will not connect
            try
            {
                Task connected = _socket.ConnectAsync(new Uri($"ws://{ip}:{port}"), CancellationToken.None);
                connected.Wait();
                _connected = true;
            }
            catch (Exception ex)
            {
                _connected = false;
                Debug.LogException(ex);
            }

            BBrenderer = boundingBoxRenderer;
        }

        private void Start()
        {
        }

        public async void Update()
        {
            //cube.GetComponent<Renderer>().material.color = new Color(255, 0, 0);
            if (_socket != null)
            {
                try
                {
                    if (!_connected)
                    {
                        Debug.Log("Initial Connection failed. Won't be able to retrieve any data");
                    }
                    else
                    {
                        if (!_specified)
                        {
                            await _socket.SendAsync(Encoding.UTF8.GetBytes("R"), WebSocketMessageType.Text, true,
                                CancellationToken.None);
                            _specified = true;
                            string message = "Connection Complete!";
                            Debug.Log(message);
                            //Orange
                            _cube.GetComponent<Renderer>().material.color = new Color(0, 0, 255);
                        }
                        else if (_specified)
                        {
                            if (!_receiving)
                            {
                                Debug.Log("Retrieving values");
                                string newTree = await Receive();
                                if (newTree.Substring(0, 1) == "C")
                                    GetNewTrees(newTree.Substring(6));
                                else if (newTree.Substring(0, 1) == "U")
                                    UpdateNewTrees(newTree.Substring(6));
                                else if (newTree.Substring(0, 1) == "R")
                                {
                                    BBrenderer
                                        .ClearTrees(); // Can call this because remove and add trees are done as separate events
                                    RemoveTrees(newTree.Substring(6));
                                }
                                else if (newTree.Substring(0, 1) == "L")
                                {
                                    UpdateTrees(newTree.Substring(6));
                                }

                                //GREEN
                                _cube.GetComponent<Renderer>().material.color = new Color(124, 252, 0);
                            }
                        }
                    }
                }
                catch (Exception ex)
                {
                    //RED
                    _connectionAttempt++;
                    _specified = false;
                    _cube.GetComponent<Renderer>().material.color = new Color(255, 0, 0);
                    Debug.Log($"#\t{ex.Message}");
                    Debug.Log($"#\tConnection failed ({_connectionAttempt})");
                }
            }
        }


        private async Task<string> Receive()
        {
            ArraySegment<byte> buffer = new ArraySegment<byte>(new byte[2048]);
            string recvStr = "";

            WebSocketReceiveResult result;
            _receiving = true;
            try
            {
                using (MemoryStream ms = new MemoryStream())
                {
                    do
                    {
                        result = await _socket.ReceiveAsync(buffer, CancellationToken.None);
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

            _receiving = false;

            return recvStr;
        }
    }
}