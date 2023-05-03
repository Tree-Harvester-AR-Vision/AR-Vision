using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Microsoft.MixedReality.Toolkit.UX;
using System.Globalization;

namespace DataHandler
{
    public class LocalCalibrationHandler : MonoBehaviour, IDataReceiver
    {
        public GameObject MrktXrRig;
        private Transform cameraTransform;
        private bool calibrated = false;
        private Vector3 calibration;
        private int frameCounter = 0;

        public MRTKUGUIInputField transX;
        public MRTKUGUIInputField transY;
        public MRTKUGUIInputField transZ;
        
        public MRTKUGUIInputField rotX;
        public MRTKUGUIInputField rotY;
        public MRTKUGUIInputField rotZ;

        public GameObject OverlayOrigin;

        public void Start()
        {
            cameraTransform = MrktXrRig.transform;
        }

        public void UpdateData(string receivedData, TextMeshPro textMeshPro)
        {
            if (frameCounter < 100)
            {
                textMeshPro.text = "Not yet calibrated";
                frameCounter++;
            }
            else if (!calibrated)
            {
                Calibrate();
            }

            textMeshPro.text = $"{PositionToString()}\n{RotationToString()}";
        }

        public void Calibrate()
        {
            Vector3 worldPosition = cameraTransform.position;
            calibrated = true;
        }

        private Vector3 GetPosition()
        {
            return cameraTransform.position - calibration;
        }

        private string PositionToString()
        {
            return GetPosition().ToString();
        }

        private Vector3 GetRotation()
        {
            return cameraTransform.rotation.eulerAngles;
        }

        private string RotationToString()
        {
            return GetRotation().ToString();
        }

        private string getText(string text)
        {
            if (String.IsNullOrEmpty(text))
            {
                return "0.0";
            }
            return text;
        }
        
        //Used as EventH
        public void UpdateCalibrationFromGui()
        {
            string xValue = getText(transX.text);
            string yValue = getText(transY.text);
            string zValue = getText(transZ.text);
            
            string rotXValue = getText(rotX.text);
            string rotYValue = getText(rotY.text);
            string rotZValue = getText(rotZ.text);
            
            

            try
            {
                float xCalibration = float.Parse(xValue, CultureInfo.InvariantCulture);
                float yCalibration = float.Parse(yValue, CultureInfo.InvariantCulture);
                float zCalibration = float.Parse(zValue, CultureInfo.InvariantCulture);
                float rotXCalibration = float.Parse(rotXValue, CultureInfo.InvariantCulture);
                float rotYCalibration = float.Parse(rotYValue, CultureInfo.InvariantCulture);
                float rotZCalibration = float.Parse(rotZValue, CultureInfo.InvariantCulture);

                Debug.Log(
                    $"New Calibration: {xCalibration}:{yCalibration}:{zCalibration} - {rotXCalibration}:{rotYCalibration}:{rotZCalibration}");

                OverlayOrigin.transform.position =
                    cameraTransform.position + new Vector3(xCalibration, yCalibration, zCalibration);
            }
            catch (Exception ex)
            {
                Debug.Log("Updating the calibration from user input unsuccessfull.");
            }

        }

        public void UpdateCalibrationFromClient()
        {
            throw new NotImplementedException();
        }
    }
}