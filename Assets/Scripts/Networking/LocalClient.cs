using DataHandler;
using TMPro;

namespace Networking
{
    public class LocalClient:IWebClient
    {
        private readonly TextMeshPro _text;
        private readonly IDataReceiver _receiver;
        
        public LocalClient(TextMeshPro gameObject, 
            IDataReceiver dataReceiver)
        {
            _text = gameObject;
            _receiver = dataReceiver;
        }
        
        public void Update()
        {
            _receiver.UpdateData(false, "", _text);
        }

        public void Remove()
        {
            
        }
    }
}