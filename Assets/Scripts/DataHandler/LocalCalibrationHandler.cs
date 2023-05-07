using System;
using TMPro;
using UnityEngine;
using System.Globalization;
using Microsoft.MixedReality.Toolkit.UX;
using UnityEngine.UI;


namespace DataHandler
{
    public class LocalCalibrationHandler : MonoBehaviour, IDataReceiver
    {
        public GameObject MrktXrRig;
        private Transform cameraTransform;
        private bool calibrated = false;
        private Vector3 calibration;
        private int frameCounter = 0;

        public TextMeshProUGUI transX;
        public TextMeshProUGUI transY;
        public TextMeshProUGUI transZ;
        public TextMeshProUGUI rotX;
        public TextMeshProUGUI rotY;
        public TextMeshProUGUI rotZ;

        private Vector3 _transValue= new Vector3(0.0f, 0.0f, 0.0f);
        private Vector3 _rotValue = new Vector3(0.0f, 0.0f, 0.0f);


        public GameObject OverlayOrigin;
        public GameObject CalibrationCanvas;

        public Microsoft.MixedReality.Toolkit.UX.Slider sliderX;
        public Microsoft.MixedReality.Toolkit.UX.Slider sliderY;
        public Microsoft.MixedReality.Toolkit.UX.Slider sliderZ;
        
        private Controlls _playerActions;
        private bool hidden = false;
        
        
        private void Awake()
        {
            _playerActions = new Controlls();
        }
        
        private void OnEnable()
        {
            _playerActions.Default.Enable();
        }
        
        private void OnDisable()
        {
            _playerActions.Default.Disable();
        }

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

        public void Update()
        {
            if (_playerActions.Default.HideGUI.WasPressedThisFrame())
            {
                Debug.Log("GUI is visible now.");
                CalibrationCanvas.SetActive(hidden);
                foreach (Renderer r in OverlayOrigin.GetComponentsInChildren<Renderer>())
                    if (r)
                    {
                        r.enabled = hidden;
                    }
                hidden = toggleBoolean(hidden);
            }
        }

        private bool toggleBoolean(bool value)
        {
            if (value)
            {
                return false;
            }
            return true;
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

        public void UpdateCalibrationFromClient()
        {
            throw new NotImplementedException();
        }

        public void UpdateCalibrationValueX(string value)
        {
            value = getText(value);
            float calibrationValue = float.Parse(value!, CultureInfo.InvariantCulture);
            
            _transValue += new Vector3(calibrationValue, 0.0f, 0.0f);
            UpdatePosition();
            UpdateDisplay();
        }
        
        public void UpdateCalibrationValueY(string value)
        {
            value = getText(value);
            float calibrationValue = float.Parse(value!, CultureInfo.InvariantCulture);
            
            _transValue += new Vector3(0.0f, calibrationValue, 0.0f);
            UpdatePosition();
            UpdateDisplay();
        }
        
        public void UpdateCalibrationValueZ(string value)
        {
            value = getText(value);
            float calibrationValue = float.Parse(value!, CultureInfo.InvariantCulture);

            _transValue += new Vector3(0.0f, 0.0f, calibrationValue);
            UpdatePosition();
            UpdateDisplay();

        }

        private void UpdatePosition()
        {
            OverlayOrigin.transform.position = cameraTransform.position + _transValue;
            OverlayOrigin.transform.rotation = Quaternion.Euler(_rotValue);
        }

        public void UpdateCalibrationRotationX(SliderEventData data)
        {
            float x = data.NewValue*360;
            _rotValue.x = x;
            UpdatePosition();
            UpdateDisplay();
        }
        public void UpdateCalibrationRotationY(SliderEventData data)
        {
            float y = data.NewValue*360;
            _rotValue.y = y;
            UpdatePosition();
            UpdateDisplay();
        }
        
        public void UpdateCalibrationRotationZ(SliderEventData data)
        {
            float z = data.NewValue*360;
            _rotValue.z = z;
            UpdatePosition();
            UpdateDisplay();
        }

        private void UpdateDisplay()
        {
            if (transX && transY && transZ && rotZ && rotY && rotX)
            {
                transX.text = Math.Round(_transValue.x, 4).ToString(CultureInfo.InvariantCulture);
                transY.text = Math.Round(_transValue.y, 4).ToString(CultureInfo.InvariantCulture);
                transZ.text = Math.Round(_transValue.z, 4).ToString(CultureInfo.InvariantCulture);

                rotX.text = Math.Round(_rotValue.x, 0).ToString(CultureInfo.InvariantCulture);
                rotY.text = Math.Round(_rotValue.y, 0).ToString(CultureInfo.InvariantCulture);
                rotZ.text = Math.Round(_rotValue.z, 0).ToString(CultureInfo.InvariantCulture);
            }
            else
            {
                Debug.LogWarning($"One of the text-fields in {GetType()} is not specified");
            }

        }
    }
}