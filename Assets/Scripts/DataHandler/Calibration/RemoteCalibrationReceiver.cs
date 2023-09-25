using Newtonsoft.Json;
using TMPro;
using UnityEngine;

namespace DataHandler.Calibration
{
    public class RemoteCalibrationReceiver : CalibrationReceiver, IDataReceiver
    {
        public bool single;

        /// <summary>
        /// The function updates data by calibrating the position of a helmet-mounted display based on received
        /// information.
        /// 
        /// We receive the following information from the external provider: The position of the helmet-mounted display in relation to the camera.
        /// Thus, we need to set the origin-marker for the visualization to the current camera position + whatever value we receive.
        /// After that, we rotate it around.
        /// If the single-flag is set, it is only updated once. Otherwise, it is updated whenever new data is received.
        /// </summary>
        /// <param name="simulation">IGNORED</param>
        /// <param name="receivedData">A string containing the received data from an external provider. This
        /// data is in JSON format and represents the position of a helmet-mounted display in relation to the
        /// camera.</param>
        /// <param name="textField">The "textField" parameter is a reference to a TextMeshPro component that will be updated with the new data.</param>
        public void UpdateData(bool simulation, string receivedData, TextMeshPro textField)
        {
            Networking.Responses.Calibration input =
                JsonConvert.DeserializeObject<Networking.Responses.Calibration>(receivedData);

            if (single && !Calibrated)
            {
                CalibratePosition(input);
                Calibrated = true;
            }
            else
            {
                CalibratePosition(input);
            }
        }

        /// <summary>
        /// The CalibratePosition function takes a Calibration input and updates the position and rotation of
        /// the OverlayOrigin object based on the input values.
        /// </summary>
        /// <param name="input">The input parameter is of type Networking.Responses.Calibration, which is an
        /// object that contains information about the calibration data.</param>
        private void CalibratePosition(Networking.Responses.Calibration input)
        {
            Vector3 newTransformation = new Vector3(input.Location.X, input.Location.Y, input.Location.Z);
            Vector3 newRotation = new Vector3(input.Rotation.X, input.Rotation.Y, input.Rotation.Z);

            if (Camera.main)
            {
                overlayOrigin.transform.position = Camera.main.transform.position + newTransformation;
                overlayOrigin.transform.rotation = Quaternion.Euler(newRotation);
            }
        }
    }
}