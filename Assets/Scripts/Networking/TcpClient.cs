using System;
using System.Collections.Generic;
using System.IO;
using System.Net.WebSockets;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using DataHandler;
using Newtonsoft.Json;
using TMPro;
using UnityEngine;

namespace Networking
{
    public class TcpClient : IWebClient
    {
        static ClientWebSocket _socket;

        private int _connectionAttempt;
        private readonly TextMeshPro _text;
        bool _specified;
        bool _receiving;
        public BoundingBoxRenderer BBrenderer;
        private readonly bool _connected;
        private readonly IDataReceiver _receiver;

        /// <summary>
        /// The `TcpClient` constructor is initializing a new instance of the `TcpClient` class.
        /// </summary>
        /// <param name="ip">The IP address to connect to</param>
        /// <param name="port">The port number to connect to</param>
        /// <param name="gameObject">A reference to a TextMeshPro object</param>
        /// <param name="dataReceiver">An object that implements the `IDataReceiver` interface</param>
        public TcpClient(string ip, ushort port, TextMeshPro gameObject,
            IDataReceiver dataReceiver)
        {
            _socket = new ClientWebSocket();
            _specified = false;
            _text = gameObject;

            _receiver = dataReceiver;

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
        }

        /// <summary>
        /// The Update function is responsible for handling the connection to a socket, sending and receiving
        /// data, and updating the color of a text object based on the connection status.
        /// </summary>
        public async void Update()
        {
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
                            await _socket.SendAsync(new ArraySegment<byte>(Encoding.UTF8.GetBytes("R")),
                                WebSocketMessageType.Text, true,
                                CancellationToken.None);
                            _specified = true;
                            string message = "Connection Complete!";
                            Debug.Log(message);
                            //Orange
                            _text.GetComponent<Renderer>().material.color = new Color(0, 0, 255);
                        }
                        else if (_specified)
                        {
                            if (!_receiving)
                            {
                                bool sim = false;
                                Debug.Log("Retrieving values");
                                string newTree = await Receive();

                                if (newTree.Substring(0, 1) == "1")
                                {
                                    sim = true;
                                    newTree = newTree.Substring(1);
                                }
                                else
                                {
                                    sim = false;
                                    newTree = newTree.Substring(1);
                                }

                                _receiver.UpdateData(sim, newTree, _text);
                                _text.GetComponent<Renderer>().material.color = new Color(124, 252, 0);
                            }
                        }
                    }
                }
                catch (Exception ex)
                {
                    //RED
                    _connectionAttempt++;
                    _specified = false;
                    _text.GetComponent<Renderer>().material.color = new Color(255, 0, 0);
                    Debug.Log($"#\t{ex.Message}");
                    Debug.Log($"#\tConnection failed ({_connectionAttempt})");
                }
            }
        }

        /// <summary>
        /// The Remove function is a placeholder with no code inside.
        /// </summary>
        public void Remove()
        {
        }


        /// <summary>
        /// The function receives data from a WebSocket connection and returns it as a string.
        /// </summary>
        /// <returns>
        /// The method is returning a Task<string> and needs to be awaited
        /// </returns>
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