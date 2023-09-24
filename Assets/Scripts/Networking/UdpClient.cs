using UnityEngine;
using System;
using System.Text;
using System.Net;
using System.Threading;
using DataHandler;
using Interface;
using TMPro;

namespace Networking
{
    public class UdpClient : IWebClient
    {
        // receiving Thread
        readonly Thread _receiveThread;
        private string _ip;
        private readonly ushort _port;
        private string lastReceivedUDPPacket = "";
        private readonly BoundingBoxRenderer _renderer;
        private System.Net.Sockets.UdpClient _client;
        private bool _active;
        private readonly TextMeshPro _text;
        private readonly IDataReceiver _receiver;

        /// <summary>
        /// The `UdpClient` constructor is initializing a new instance of the `UdpClient` class.
        /// </summary>
        /// <param name="ip">The IP address to connect to</param>
        /// <param name="port">The port number to connect to</param>
        /// <param name="gameObject">A reference to a TextMeshPro object</param>
        /// <param name="dataReceiver">An object that implements the `IDataReceiver` interface</param>
        public UdpClient(string ip, ushort port, TextMeshPro gameObject,
            IDataReceiver dataReceiver)
        {
            _ip = ip;
            _port = port;
            _receiveThread = new Thread(ReceiveData);
            _receiveThread.IsBackground = true;
            _receiveThread.Start();
            _text = gameObject;
            _receiver = dataReceiver;
        }

        // receive thread
        /// <summary>
        /// The function `ReceiveData` receives UDP packets on a specified port and stores the last received
        /// packet in a variable.
        /// </summary>
        private void ReceiveData()
        {
            _client = new System.Net.Sockets.UdpClient(_port);
            _active = true;
            while (_active)
            {
                try
                {
                    IPEndPoint anyIP = new IPEndPoint(IPAddress.Any, _port);
                    byte[] data = _client.Receive(ref anyIP);

                    string text = Encoding.UTF8.GetString(data);
                    lastReceivedUDPPacket = text;
                }
                catch (Exception err)
                {
                    Debug.LogError(err.ToString());
                }
            }
        }


        /// <summary>
        /// The Update function checks if there is a received UDP packet, and if so, it processes the data and
        /// updates the receiver with the simulated flag, data, and text. If there is no data available, it
        /// displays a message.
        /// </summary>
        public void Update()
        {
            if (!String.IsNullOrWhiteSpace(lastReceivedUDPPacket))
            {
                string data = lastReceivedUDPPacket;
                bool sim = false;
                if (data.Substring(0, 1) == "1")
                {
                    sim = true;
                    data = data.Substring(1);
                }
                else
                {
                    sim = false;
                    data = data.Substring(1);
                }

                _receiver.UpdateData(sim, data, _text);
            }
            else
            {
                _text.text = "No data available";
            }
        }

        /// <summary>
        /// The Remove function sets the _active variable to false and disposes of the _client object.
        /// </summary>
        public void Remove()
        {
            _active = false;
            _client.Dispose();
        }

        /// <summary>
        /// The OnDestroy function sets the _active variable to false and disposes of the _client object.
        /// </summary>
        public void OnDestroy()
        {
            _active = false;
            _client.Dispose();
        }
    }
}