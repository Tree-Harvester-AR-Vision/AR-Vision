using TMPro;
using UnityEngine;

namespace DataHandler
{
    public class CalibrationHandler : MonoBehaviour, IDataReceiver
    {
        public void UpdateData(string receivedData, TextMeshPro textMeshPro)
        {
            textMeshPro.text = receivedData;
        }
    }
}