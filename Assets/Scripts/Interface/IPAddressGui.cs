using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using TMPro;
using UnityEngine;

namespace Interface
{
    /// <summary>
    /// The IPAddressGui class retrieves the IP address of the host and displays it in a UI element.
    /// </summary>
    public class IPAddressGui : MonoBehaviour
    {
        public TextMeshPro text;
        private string _ipData;

        /// <summary>
        /// The Awake function is called when the script instance is being loaded.
        /// </summary>
        private void Awake()
        {
            string hostName = Dns.GetHostName(); // Retrive the Name of HOST
            List<IPAddress> ip = Dns.GetHostByName(hostName).AddressList.ToList();
            _ipData = String.Join("\n", ip);
        }

        /// <summary>
        /// The Start function sets the text of a UI element to the value of a variable called ipData.
        /// </summary>
        void Start()
        {
            text.text = _ipData;
        }
    }
}