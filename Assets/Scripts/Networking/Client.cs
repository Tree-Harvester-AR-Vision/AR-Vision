using DataHandler;
using TMPro;
using UnityEngine;

namespace Networking
{
    /// <summary>
    /// The Client class is responsible for setting up and managing a network client connection, based on the specified connection type and data receiver type.
    /// </summary>
    public class Client : MonoBehaviour
    {
        public string ip = "localhost";
        public ushort port = 7000;
        public ConnectionType type;
        public DataType receiverType;
        public TextMeshPro messageBox;
        private IWebClient _client;

        /// <summary>
        /// The Start function assigns a data receiver based on the set receiver type and likewise assigns a client for the connection type
        /// </summary>
        void Start()
        {
            IDataReceiver receiver = null;
            switch (receiverType)
            {
                case DataType.Tree:
                    receiver = GetComponent<TreeUpdateHandler>();
                    break;
                case DataType.Pose:
                    receiver = GetComponent<CalibrationHandler>();
                    break;
                case DataType.LocalPose:
                    receiver = GetComponent<LocalCalibrationHandler>();
                    break;
            }

            if (receiver != null)
            {
                switch (type)
                {
                    case ConnectionType.None:
                        _client = new LocalClient(messageBox, receiver);
                        break;
                    case ConnectionType.TCP:
                        _client = new TcpClient(ip, port, messageBox, receiver);
                        break;
                    case ConnectionType.UDP:
                        _client = new UdpClient(ip, port, messageBox, receiver);
                        break;
                }
            }
            else
            {
                Debug.LogError($"Could not find receiver of type {receiverType.ToString()} in the GameObject {name}");
            }
        }

        /// <summary>
        /// The Update function calls the Update method of the _client object.
        /// </summary>
        void Update()
        {
            _client.Update();
        }

        /// <summary>
        /// The OnDestroy function removes the client.
        /// </summary>
        public void OnDestroy()
        {
            _client.Remove();
        }
    }
}