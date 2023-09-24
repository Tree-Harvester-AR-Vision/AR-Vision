using Newtonsoft.Json;
using TMPro;
using UnityEngine;

namespace DataHandler.Calibration
{
    public class RemoteCalibrationReceiver : CalibrationReceiver, IDataReceiver
    {
        public bool single;
        
        public void UpdateData(bool simulation, string receivedData, TextMeshPro textField)
        {
            // We receive the following information from the external provider: The position of the helmet-mounted display in relation to the camera.\
            // Thus, we need to set the origin-marker for the visualization to the current camera position + whatever value we receive.
            // After that, we rotate it around
            
            
            // simulation-flag is ignored.
            Networking.Responses.Calibration input = JsonConvert.DeserializeObject<Networking.Responses.Calibration>(receivedData);

            if (single && !_calibrated)
            {
                CalibratePosition(input);
            }
            else
            {
                CalibratePosition(input);
            }
            
        }

        private void CalibratePosition(Networking.Responses.Calibration input)
        {
            Vector3 transformation = new Vector3(input.Location.X, input.Location.Y, input.Location.Z);
            Vector3 rotation = new Vector3(input.Rotation.X, input.Rotation.Y, input.Rotation.Z);
            
            if (Camera.main)
            {
                OverlayOrigin.transform.position = Camera.main.transform.position + transformation;
                OverlayOrigin.transform.rotation = Quaternion.Euler(rotation);
            }

        }
    }
}