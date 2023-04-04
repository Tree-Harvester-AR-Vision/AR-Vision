using UnityEngine;
using System;
using System.Globalization;
using System.IO;
using System.Text;
using System.Threading.Tasks;

#if !UNITY_EDITOR
using Windows.Networking.Sockets;
#else
using System.Net.Sockets;
using System.Net;
#endif

namespace Networking
{
    public class UdpClient : TreeUpdateHandler, IWebClient
    {
#if !UNITY_EDITOR
        private readonly DatagramSocket socket;
#else
        private readonly Socket _socket;
        private const int BufSize = 8 * 1024;
        byte[] _buffer = new byte[BufSize];
        private AsyncCallback _recv = null;
        private readonly EndPoint _epFrom;
#endif
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
#if !UNITY_EDITOR

                socket = new DatagramSocket();
                Debug.Log($"Socket created");
                socket.MessageReceived += Socket_MessageReceived;

                try
                {
                    socket.BindEndpointAsync(null, port.ToString());
                    Debug.Log($"Socket bound to {port}");
                }
                catch (Exception e)
                {
                    Debug.Log(e.ToString());
                    Debug.Log(SocketError.GetStatus(e.HResult).ToString());
                    return;
                }
                Debug.Log("Socket created");
#else
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
#endif
            }
            catch (Exception ex)
            {
                Debug.LogError($"Exception: {ex.Message}");
            }
        }

        public async Task Update()
        {
#if UNITY_EDITOR
            Debug.Log("Update");
            while (_active && _socket != null && _socket.IsBound)
            {
                try
                {
                    Debug.Log("In-Update-Loop");
                    SocketReceiveFromResult result = await _socket.ReceiveFromAsync(_buffer, SocketFlags.None, _epFrom);
                    Debug.Log(result.ReceivedBytes);
                    string returnData = Encoding.ASCII.GetString(_buffer[0..result.ReceivedBytes]);
                    _buffer = new byte[BufSize];
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
            #endif


            // Debug.Log("Update");
            // if (_socket != null)
            // {
            //     try
            //     {
            //         Debug.Log("Attempting to retrieve data");
            //         //UdpReceiveResult result = Receive(_timeout);
            //         //string returnData = Encoding.ASCII.GetString(result.Buffer);
            //         Debug.Log("Data retrieved");
            //         byte[] data = _socket.Receive();
            //         
            //     }
            //     catch (Exception e)
            //     {
            //         _cube.GetComponent<Renderer>().material.color = new Color(255, 0, 0);
            //         Debug.LogError("\n\n\n#########################################################\n\n\n");
            //         Debug.LogError(e.Message);
            //     }
            //     _cube.GetComponent<Renderer>().material.color = new Color(0, 125, 125);
            // }
        }

        // private UdpReceiveResult Receive(double timeout)
        // {
        //     try
        //     {
        //         var task = _socket.ReceiveAsync();
        //         bool completed = task.Wait(TimeSpan.FromMilliseconds(timeout * 1000));
        //         if (completed)
        //         {
        //             return task.Result;
        //         }
        //     }
        //     catch (ObjectDisposedException ex)
        //     {
        //         Debug.LogError($"Socket was disposed: {ex.Message}");
        //         throw;
        //     }
        //     catch (SocketException ex)
        //     {
        //         Debug.LogError($"Socket-Exception: {ex.Message}");
        //         throw;
        //     }
        //     throw new TimeoutException("The function has taken longer than the maximum time allowed.");
        // }

        public void Remove()
        {
            _active = true;
        }

        public void OnDestroy()
        {
#if UNITY_EDITOR
            _socket.Dispose();
#endif
        }
        
#if !UNITY_EDITOR
        private async void Socket_MessageReceived(Windows.Networking.Sockets.DatagramSocket sender,
            Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs args)
        {
            //Read the message that was received from the UDP echo client.
            Stream streamIn = args.GetDataStream().AsStreamForRead();
            StreamReader reader = new StreamReader(streamIn);
            string message = await reader.ReadLineAsync();
            
            Debug.Log($"Received Data:\n{message}");
            _cube.GetComponent<Renderer>().material.color = new Color(0, 255, 0);
            UpdateTrees(message);
            _cube.GetComponent<Renderer>().material.color = new Color(0, 0, 255);
            Debug.Log("Trees updated");
        }
#endif

        #if UNITY_EDITOR
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
        #endif
    }
}