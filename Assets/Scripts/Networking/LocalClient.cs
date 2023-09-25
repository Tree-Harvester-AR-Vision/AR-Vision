using DataHandler;
using TMPro;

namespace Networking
{
    /// <summary>
    /// The LocalClient is a implementation of the IWebClient interface. It does not receive any data, and just acts a placeholder.
    /// </summary>
    public class LocalClient : IWebClient
    {
        private readonly TextMeshPro _text;
        private readonly IDataReceiver _receiver;

        /// <summary>
        /// The `public LocalClient(TextMeshPro gameObject, IDataReceiver dataReceiver)` is a constructor for the `LocalClient` class
        /// </summary>
        /// <param name="gameObject">A GameObject of Type TextMeshPro</param>
        /// <param name="dataReceiver">A IDataReceiver-Object</param>
        public LocalClient(TextMeshPro gameObject,
            IDataReceiver dataReceiver)
        {
            _text = gameObject;
            _receiver = dataReceiver;
        }

        /// <summary>
        /// The Update function calls the UpdateData method without any data and acts as placeholder
        /// </summary>
        public void Update()
        {
            _receiver.UpdateData(false, "", _text);
        }

        /// <summary>
        /// The Remove function is a placeholder with no code inside.
        /// </summary>
        public void Remove()
        {
        }
    }
}