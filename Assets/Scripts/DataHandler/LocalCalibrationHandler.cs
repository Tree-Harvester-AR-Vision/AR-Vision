using System;
using TMPro;
using UnityEngine;
using System.Globalization;
using Microsoft.MixedReality.Toolkit.UX;


namespace DataHandler
{
    public class LocalCalibrationHandler : MonoBehaviour, IDataReceiver
    {
        public GameObject xrRig;
        private Transform _cameraTransform;
        private bool _calibrated = false;
        private Vector3 _calibration;
        private int _frameCounter = 0;

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

        public Slider sliderX;
        public Slider sliderY;
        public Slider sliderZ;
        
        private Controlls _playerActions;
        private bool hidden = false;
        private Vector3 initPosition;
        private float _scaling;


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
            _cameraTransform = xrRig.transform;
            initPosition = OverlayOrigin.transform.position;
        }

        public void UpdateData(bool sim, string receivedData, TextMeshPro textMeshPro)
        {
            if (_frameCounter < 100)
            {
                textMeshPro.text = "Not yet calibrated";
                _frameCounter++;
            }
            else if (!_calibrated)
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
                {
                    if (r)
                    {
                        r.enabled = hidden;
                    }
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
            Vector3 worldPosition = _cameraTransform.position;
            _calibrated = true;
        }

        private Vector3 GetPosition()
        {
            return _cameraTransform.position - _calibration;
        }

        private string PositionToString()
        {
            return GetPosition().ToString();
        }

        private Vector3 GetRotation()
        {
            return _cameraTransform.rotation.eulerAngles;
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
            OverlayOrigin.transform.position = initPosition + _transValue;
            OverlayOrigin.transform.rotation = Quaternion.Euler(_rotValue);
            OverlayOrigin.transform.localScale = new Vector3(_scaling, _scaling, _scaling);
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
        
        public void UpdateCalibrationScaling(SliderEventData data)
        {
            float z = data.NewValue;
            _scaling = z;
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