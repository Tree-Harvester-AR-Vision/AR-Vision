using System;
using System.Globalization;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;

namespace DataHandler.Calibration
{
    public class CalibrationReceiver : MonoBehaviour
    {
        public TextMeshProUGUI transX;
        public TextMeshProUGUI transY;
        public TextMeshProUGUI transZ;
        public TextMeshProUGUI rotX;
        public TextMeshProUGUI rotY;
        public TextMeshProUGUI rotZ;

        [FormerlySerializedAs("CalibrationCanvas")] public GameObject calibrationCanvas;
        [FormerlySerializedAs("OverlayOrigin")] public GameObject overlayOrigin;

        protected bool Calibrated = false;

        public GameObject originCross;

        protected Vector3 transformation = new Vector3(0.0f, 0.0f, 0.0f);
        protected Vector3 rotation = new Vector3(0.0f, 0.0f, 0.0f);
        protected Vector3 scaling = new Vector3(0.0f, 0.0f, 0.0f);


        /// <summary>
        /// The UpdateDisplay function updates the text fields for transformation and rotation values, rounding
        /// them to a specified number of decimal places.
        /// </summary>
        protected void UpdateDisplay()
        {
            if (transX && transY && transZ && rotZ && rotY && rotX)
            {
                transX.text = Math.Round(transformation.x, 4).ToString(CultureInfo.InvariantCulture);
                transY.text = Math.Round(transformation.y, 4).ToString(CultureInfo.InvariantCulture);
                transZ.text = Math.Round(transformation.z, 4).ToString(CultureInfo.InvariantCulture);

                rotX.text = Math.Round(rotation.x, 0).ToString(CultureInfo.InvariantCulture);
                rotY.text = Math.Round(rotation.y, 0).ToString(CultureInfo.InvariantCulture);
                rotZ.text = Math.Round(rotation.z, 0).ToString(CultureInfo.InvariantCulture);
            }
            else
            {
                Debug.LogWarning($"One of the text-fields in {GetType()} is not specified");
            }
        }

        /// <summary>
        /// The ToggleVisibility function toggles the visibility of the CalibrationCanvas object.
        /// </summary>
        protected void ToggleVisibility()
        {
            calibrationCanvas.SetActive(!calibrationCanvas.activeSelf);
        }

        /// <summary>
        /// The function updates the position, rotation, and scale of the Overlayorigin.
        /// </summary>
        protected void UpdatePosition()
        {
            overlayOrigin.transform.position += transformation;
            Vector3 appliedRotation = overlayOrigin.transform.rotation.eulerAngles + rotation;
            overlayOrigin.transform.rotation = Quaternion.Euler(appliedRotation);
            overlayOrigin.transform.localScale += scaling;
        }

        #region Transformation

        /// <summary>
        /// The function updates the calibration value for the X-axis and performs some related updates.
        /// </summary>
        /// <param name="value">The value parameter is a string that represents the calibration value for the
        /// X-axis.</param>
        public void UpdateCalibrationValueX(string value)
        {
            value = GetText(value);
            float calibrationValue = float.Parse(value!, CultureInfo.InvariantCulture);

            transformation = new Vector3(calibrationValue, 0.0f, 0.0f);
            UpdatePosition();
            UpdateDisplay();
        }

        /// <summary>
        /// The function updates the calibration value for the Y-axis and performs related updates.
        /// </summary>
        /// <param name="value">The parameter "value" is a string that represents the calibration value for the
        /// Y-axis.</param>
        public void UpdateCalibrationValueY(string value)
        {
            value = GetText(value);
            float calibrationValue = float.Parse(value!, CultureInfo.InvariantCulture);

            transformation = new Vector3(0.0f, calibrationValue, 0.0f);
            UpdatePosition();
            UpdateDisplay();
        }

        /// <summary>
        /// The function updates the calibration value for the Z-axis and performs related updates.
        /// </summary>
        /// <param name="value">The parameter "value" is a string that represents the calibration value for the
        /// Z-axis.</param>
        public void UpdateCalibrationValueZ(string value)
        {
            value = GetText(value);
            float calibrationValue = float.Parse(value!, CultureInfo.InvariantCulture);

            transformation = new Vector3(0.0f, 0.0f, calibrationValue);
            UpdatePosition();
            UpdateDisplay();
        }

        #endregion

        #region Rotation

        /// <summary>
        /// The function updates the calibration rotation value in the X-axis and then updates the position and
        /// display accordingly.
        /// </summary>
        /// <param name="value">A string representing the calibration rotation value.</param>
        public void UpdateCalibrationRotationX(string value)
        {
            value = GetText(value);
            float calibrationValue = float.Parse(value!, CultureInfo.InvariantCulture);

            rotation = new Vector3(calibrationValue, 0.0f, 0.0f);
            UpdatePosition();
            UpdateDisplay();
        }

        /// <summary>
        /// The function updates the calibration rotation value in the Y-axis and then updates the position and
        /// display accordingly.
        /// </summary>
        /// <param name="value">A string representing the calibration rotation value.</param>
        public void UpdateCalibrationRotationY(string value)
        {
            value = GetText(value);
            float calibrationValue = float.Parse(value!, CultureInfo.InvariantCulture);

            rotation = new Vector3(0.0f, calibrationValue, 0.0f);
            UpdatePosition();
            UpdateDisplay();
        }

        /// <summary>
        /// The function updates the calibration rotation value in the Z-axis and then updates the position and
        /// display accordingly.
        /// </summary>
        /// <param name="value">A string representing the calibration rotation value.</param>
        public void UpdateCalibrationRotationZ(string value)
        {
            value = GetText(value);
            float calibrationValue = float.Parse(value!, CultureInfo.InvariantCulture);

            rotation = new Vector3(0.0f, 0.0f, calibrationValue);
            UpdatePosition();
            UpdateDisplay();
        }

        #endregion

        /// <summary>
        /// The function updates the scaling value of an object based on a calibration
        /// value.
        /// </summary>
        /// <param name="value">The `value` parameter is a string that represents the calibration scaling
        /// value.</param>
        public void UpdateCalibrationScaling(string value)
        {
            value = GetText(value);
            float calibrationValue = float.Parse(value!, CultureInfo.InvariantCulture);
            scaling = new Vector3(calibrationValue, calibrationValue, calibrationValue);
            UpdatePosition();
            UpdateDisplay();
        }

        /// <summary>
        /// The getText function returns the input text if it is not null or empty, otherwise it returns "0.0".
        /// </summary>
        /// <param name="text">A string variable that represents the input text.</param>
        /// <returns>
        /// If the input string "text" is null or empty, the method will return the string "0.0". Otherwise, it
        /// will return the input string "text".
        /// </returns>
        private static string GetText(string text)
        {
            if (String.IsNullOrEmpty(text))
            {
                return "0.0";
            }

            return text;
        }
    }
}