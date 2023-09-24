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


        /// <summary>
        /// The Awake function initializes a new instance of the Controlls class and assigns it to the
        /// _playerActions variable.
        /// </summary>
        private void Awake()
        {
            _playerActions = new Controlls();
        }

        /// <summary>
        /// The function enables the default player actions.
        /// </summary>
        private void OnEnable()
        {
            _playerActions.Default.Enable();
        }

        /// <summary>
        /// The function "OnDisable" disables the default player actions.
        /// </summary>
        private void OnDisable()
        {
            _playerActions.Default.Disable();
        }

        /// <summary>
        /// The Start function initializes variables and lists used in the code.
        /// </summary>
        public void Start()
        {
            _cameraTransform = xrRig.transform;
            initPosition = OverlayOrigin.transform.position;

            _scaling = 1.0f;

            wallPositions = new List<Vector3>();
        }

        /// <summary>
        /// The function `UpdateData` updates the text field with position and rotation data, and calibrates if
        /// necessary.
        /// </summary>
        /// <param name="sim">Ignored</param>
        /// <param name="receivedData">Ignored</param>
        /// <param name="TextMeshPro">A textfield</param>
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

        /// <summary>
        /// The Update function checks for player input to hide/show GUI, mark wall positions, apply wall
        /// rotation, or delete wall positions.
        /// </summary>
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

        /// <summary>
        /// The function calculates the rotation and position of a plane based on four given points.
        /// </summary>
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

        /// <summary>
        /// The Calibrate function sets the _calibrated variable to true.
        /// </summary>
        public void Calibrate()
        {
            _calibrated = true;
        }

        /// <summary>
        /// The function "GetPosition" returns the position of the camera transformed by the calibration vector.
        /// </summary>
        /// <returns>
        /// The method is returning a Vector3 value.
        /// </returns>
        private Vector3 GetPosition()
        {
            return _cameraTransform.position - _calibration;
        }

        /// <summary>
        /// The function "PositionToString" converts the position object to a string.
        /// </summary>
        /// <returns>
        /// The method is returning the string representation of the position.
        /// </returns>
        private string PositionToString()
        {
            return GetPosition().ToString();
        }

        /// <summary>
        /// The function returns the rotation of a camera as a Vector3.
        /// </summary>
        /// <returns>
        /// The method is returning a Vector3 representing the rotation of the camera transform in Euler angles.
        /// </returns>
        private Vector3 GetRotation()
        {
            return _cameraTransform.rotation.eulerAngles;
        }

        /// <summary>
        /// The function "RotationToString" converts the rotation value to a string.
        /// </summary>
        /// <returns>
        /// The method is returning the result of calling the ToString() method on the value returned by the
        /// GetRotation() method.
        /// </returns>
        private string RotationToString()
        {
            return GetRotation().ToString();
        }
    }
}