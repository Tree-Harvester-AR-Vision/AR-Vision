using TMPro;
using UnityEngine;

namespace DataHandler
{
    public class CalibrationHandler : MonoBehaviour, IDataReceiver
    {
        public void UpdateData(bool sim, string receivedData, TextMeshPro textMeshPro)
        {
            textMeshPro.text = receivedData;
        }
    }
}