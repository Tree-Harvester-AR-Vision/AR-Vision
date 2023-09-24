using System;
using System.Globalization;
using TMPro;
using UnityEngine;

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
        
        public GameObject CalibrationCanvas;
        public GameObject OverlayOrigin;

        protected bool _calibrated = false;
     
        public GameObject originCross;
        
        protected Vector3 transformation= new Vector3(0.0f, 0.0f, 0.0f);
        protected Vector3 rotation = new Vector3(0.0f, 0.0f, 0.0f);
        protected Vector3 scaling = new Vector3(0.0f, 0.0f, 0.0f);
        
        
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

        protected void ToggleVisibility()
        {
            CalibrationCanvas.SetActive(!CalibrationCanvas.activeSelf);
        }
        
        protected void UpdatePosition()
        {
            OverlayOrigin.transform.position += transformation;
            Vector3 appliedRotation = OverlayOrigin.transform.rotation.eulerAngles + rotation;
            OverlayOrigin.transform.rotation = Quaternion.Euler(appliedRotation);
            OverlayOrigin.transform.localScale += scaling;
        }

        #region Transformation
        public void UpdateCalibrationValueX(string value)
        {
            value = getText(value);
            float calibrationValue = float.Parse(value!, CultureInfo.InvariantCulture);
            
            transformation = new Vector3(calibrationValue, 0.0f, 0.0f);
            UpdatePosition();
            UpdateDisplay();
        }
        
        public void UpdateCalibrationValueY(string value)
        {
            value = getText(value);
            float calibrationValue = float.Parse(value!, CultureInfo.InvariantCulture);
            
            transformation = new Vector3(0.0f, calibrationValue, 0.0f);
            UpdatePosition();
            UpdateDisplay();
        }
        
        public void UpdateCalibrationValueZ(string value)
        {
            value = getText(value);
            float calibrationValue = float.Parse(value!, CultureInfo.InvariantCulture);

            transformation = new Vector3(0.0f, 0.0f, calibrationValue);
            UpdatePosition();
            UpdateDisplay();
        }
        #endregion

        #region Rotation
        public void UpdateCalibrationRotationX(string value)
        {
            value = getText(value);
            float calibrationValue = float.Parse(value!, CultureInfo.InvariantCulture);

            rotation = new Vector3(calibrationValue,0.0f, 0.0f );
            UpdatePosition();
            UpdateDisplay();
        }
        public void UpdateCalibrationRotationY(string value)
        {
            value = getText(value);
            float calibrationValue = float.Parse(value!, CultureInfo.InvariantCulture);

            rotation = new Vector3(0.0f, calibrationValue, 0.0f);
            UpdatePosition();
            UpdateDisplay();
        }
        
        public void UpdateCalibrationRotationZ(string value)
        {
            value = getText(value);
            float calibrationValue = float.Parse(value!, CultureInfo.InvariantCulture);

            rotation = new Vector3(0.0f, 0.0f, calibrationValue);
            UpdatePosition();
            UpdateDisplay();
        }
        #endregion
        
        public void UpdateCalibrationScaling(string value)
        {
            value = getText(value);
            float calibrationValue = float.Parse(value!, CultureInfo.InvariantCulture);
            scaling = new Vector3(calibrationValue, calibrationValue, calibrationValue);
            UpdatePosition();
            UpdateDisplay();
        }
        
        private string getText(string text)
        {
            if (String.IsNullOrEmpty(text))
            {
                return "0.0";
            }
            return text;
        }
    }
}