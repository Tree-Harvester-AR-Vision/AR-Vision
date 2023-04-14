using UnityEngine;
using System;
using System.Globalization;
using System.IO;
using System.Text;
using System.Threading.Tasks;
using System.Net.Sockets;
using System.Net;

namespace Networking
{
    public class UdpClient : TreeUpdateHandler, IWebClient
    {
        private readonly Socket _socket;
        private const int BufSize = 100000;
        byte[] _buffer = new byte[BufSize];
        private AsyncCallback _recv = null;
        private readonly EndPoint _epFrom;
        private readonly GameObject _cube;
        private readonly double _timeout;
        private bool _active;
        private readonly BoundingBoxRenderer _renderer;


        public UdpClient(string ip, ushort port, GameObject gameObject, BoundingBoxRenderer boundingBoxRenderer,
            double udpTimeout)
        {
            _cube = gameObject;
            _active = true;
            BBrenderer = boundingBoxRenderer;
            _timeout = udpTimeout;

            Debug.Log("Attempting to create socket");

            try
            {
                _socket = new Socket(AddressFamily.InterNetwork, SocketType.Dgram, ProtocolType.Udp);
                Debug.Log("Socket created");
                _socket.SetSocketOption(SocketOptionLevel.IP, SocketOptionName.ReuseAddress, true);
                Debug.Log("Socket option set");
                _epFrom = CreateIPEndPoint($"{ip}:{port}");
                _epFrom = new IPEndPoint(IPAddress.Any, port);
                Debug.Log("Endpoint created");
                try
                {
                    if (_epFrom != null)
                    {
                        _socket.Bind(_epFrom);
                        Debug.Log("Socket bound");
                    }
                    else
                    {
                        throw new ArgumentException("Could not bind to empty endpoint");
                    }

                    Debug.Log($"Socket bound to {_epFrom}");
                }
                catch (Exception ex)
                {
                    Debug.LogError($"Could not bind socket to endpoint ({ex}, {ex.Message})");
                }
            }
            catch (Exception ex)
            {
                Debug.LogError($"Exception: {ex.Message}");
            }
        }

        public void Update()
        {
            Debug.Log("Update");
            while (_active && _socket != null && _socket.IsBound)
            {
                try
                {
                    Debug.Log("In-Update-Loop");
                    SocketReceiveFromResult result = Receive(_timeout);
                    Debug.Log(result.ReceivedBytes);
                    if (_buffer.Length < result.ReceivedBytes)
                    {
                        throw new Exception($"Could not retrieve properly (maxSize: {_buffer.Length}, received {result.ReceivedBytes})");
                    }
                    string returnData = Encoding.ASCII.GetString(_buffer[0..result.ReceivedBytes]);
                    Array.Clear(_buffer, 0, result.ReceivedBytes);
                    Debug.Log($"Received Data:\n{returnData}");
                    _cube.GetComponent<Renderer>().material.color = new Color(0, 255, 0);
                    UpdateTrees(returnData);
                    _cube.GetComponent<Renderer>().material.color = new Color(0, 0, 255);
                    Debug.Log("Trees updated");
                }
                catch (Exception ex)
                {
                    Debug.LogError(ex);
                    // Socket exception means we are finished.
                    _cube.GetComponent<Renderer>().material.color = new Color(255, 0, 0);
                }

            }
        }

        private SocketReceiveFromResult Receive(double timeout)
        {
             try
             {
                 var task = _socket.ReceiveFromAsync(_buffer, SocketFlags.None, _epFrom);
                 bool completed = task.Wait(TimeSpan.FromMilliseconds(timeout * 1000));
                 if (completed)
                 {
                     return task.Result;
                 }
             }
             catch (ObjectDisposedException ex)
             {
                 Debug.LogError($"Socket was disposed: {ex.Message}");
                 throw;
             }
             catch (SocketException ex)
             {
                 Debug.LogError($"Socket-Exception: {ex.Message}");
                 throw;
             }
             throw new TimeoutException("The function has taken longer than the maximum time allowed.");
         }

        public void Remove()
        {
            _active = true;
        }

        public void OnDestroy()
        {
            _socket.Dispose();
        }
        
        private static IPEndPoint CreateIPEndPoint(string endPoint)
        {
            try
            {
                string[] ep = endPoint.Split(':');
                if (ep.Length != 2) throw new FormatException("Invalid endpoint format");
                if (!IPAddress.TryParse(ep[0], out IPAddress ip))
                {
                    throw new FormatException("Invalid ip-adress");
                }

                if (!int.TryParse(ep[1], NumberStyles.None, NumberFormatInfo.CurrentInfo, out int port))
                {
                    throw new FormatException("Invalid port");
                }

                return new IPEndPoint(ip, port);
            }
            catch (Exception ex)
            {
                Debug.LogError(ex);
                throw;
            }
        }
    }
}