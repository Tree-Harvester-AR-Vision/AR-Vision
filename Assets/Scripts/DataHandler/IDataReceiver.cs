using TMPro;

namespace DataHandler
{
    public interface IDataReceiver
    {
        void UpdateData(bool simulation, string receivedData, TextMeshPro textField);
    }
}