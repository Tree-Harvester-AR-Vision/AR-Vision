using System;
using TMPro;
using UnityEngine;

namespace DataHandler
{
    public class LocalCalibrationHandler : MonoBehaviour, IDataReceiver
    {
        public GameObject MrktXrRig;
        private Transform cameraTransform;
        private bool calibrated = false;
        private Vector3 intendedCalibrationPosition;
        private Vector3 calibration;
        private int frameCounter = 0;

        public void Start()
        {
            cameraTransform = MrktXrRig.transform;
            intendedCalibrationPosition = new Vector3(0, 0, 0);
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
            calibration = worldPosition - intendedCalibrationPosition;
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
    }
}