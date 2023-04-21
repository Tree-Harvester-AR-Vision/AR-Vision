using UnityEngine;
using System;
using System.Text;
using System.Net;
using System.Threading;
using TMPro;

namespace Networking
{
    public class UdpClient : IWebClient
    {
        // receiving Thread
        readonly Thread _receiveThread;
        private string _ip;
        private readonly ushort _port;
        private string lastReceivedUDPPacket="";
        private readonly BoundingBoxRenderer _renderer;
        private System.Net.Sockets.UdpClient _client;
        private bool _active;
        private readonly TextMeshPro _text;
        private readonly IDataReceiver _receiver;


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
                    lastReceivedUDPPacket=text;
                }
                catch (Exception err)
                {
                    Debug.LogError(err.ToString());
                }
            }
        }
        

        public void Update()
        {
            if (!String.IsNullOrWhiteSpace(lastReceivedUDPPacket))
            {
                _receiver.UpdateData(lastReceivedUDPPacket, _text);
            }
            else
            {
                _text.text = "No data available";
            }
            
        }

        public void Remove()
        {
            _active = false;
            _client.Dispose();
        }

        public void OnDestroy()
        {
            _active = false;
            _client.Dispose();
        }
    }
}