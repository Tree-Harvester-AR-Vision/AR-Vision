using System;
using System.Collections.Generic;
using System.Globalization;
using TMPro;
using UnityEngine;

namespace DataHandler.Calibration
{
    public class LocalCalibrationReceiver : CalibrationReceiver, IDataReceiver
    {
        public GameObject xrRig;
        private Transform _cameraTransform;
        private Vector3 _calibration;
        private int _frameCounter = 0;



        private Controlls _playerActions;
        private bool hidden = false;
        private Vector3 initPosition;
        private float _scaling;
        public List<Vector3> wallPositions;

        public GameObject handController;




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

            _scaling = 1.0f;

            wallPositions = new List<Vector3>();
        }

        public void UpdateData(bool sim, string receivedData, TextMeshPro textField)
        {
            if (_frameCounter < 100)
            {
                textField.text = "Not yet calibrated";
                _frameCounter++;
            }
            else if (!_calibrated)
            {
                Calibrate();
            }

            textField.text = $"{PositionToString()}\n{RotationToString()}";
        }

        public void Update()
        {
            if (_playerActions.Default.HideGUI.WasPressedThisFrame())
            {
                Debug.Log("GUI is visible now.");
                ToggleVisibility();
                foreach (Renderer r in originCross.GetComponentsInChildren<Renderer>())
                {
                    if (r)
                    {
                        r.enabled = hidden;
                    }
                }
                    
                hidden = !hidden;
            }

            if (_playerActions.Default.MarkWall.WasPressedThisFrame() && handController)
            {
                Vector3 pos = handController.transform.position;
                wallPositions.Add(pos);
                
            }

            if (_playerActions.Default.ApplyWall.WasPressedThisFrame() && wallPositions.Count == 4)
            {
                GetRotationFromPoints();
            }
            
            if (_playerActions.Default.DeleteWall.WasPressedThisFrame())
            {
                wallPositions = new List<Vector3>();
                
            }
        }

        private void GetRotationFromPoints()
        {
            Vector3 a = wallPositions[0];
            Vector3 b = wallPositions[1];
            Vector3 c = wallPositions[2];
            Vector3 d = wallPositions[3];
            
            Vector3 x = c - a + d - b;
            Vector3 y = c - d + a - b;
            
            var z = Vector3.Cross(x, y);
            var planeOrientation = Quaternion.LookRotation(z, y);


            Vector3 avg = a + b + c + d;
            avg /= 4;
            rotation = planeOrientation.eulerAngles;
            rotation += new Vector3(0.0f, -180f, 90f);
            transformation = avg;

            UpdatePosition();
            UpdateDisplay();
            wallPositions = new List<Vector3>();
        }

        public void Calibrate()
        {
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
    }
}