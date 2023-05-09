using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using TMPro;
using UnityEngine;

public class IPAddressGui : MonoBehaviour
{
    // Start is called before the first frame update

    public TextMeshPro text;
    
    void Start()
    {
        //Get IP
        string hostName = Dns.GetHostName(); // Retrive the Name of HOST

        List<IPAddress> ip= Dns.GetHostByName(hostName).AddressList.ToList();
        string ipData = String.Join("\n", ip);
        text.text = ipData;
    }
}
