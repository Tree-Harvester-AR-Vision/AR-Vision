using System;
using System.Collections;
using System.Collections.Generic;
using DataHandler;
using DataHandler.Calibration;
using UnityEngine;
using UnityEngine.Serialization;

public class TutorialUpdater : MonoBehaviour
{
    public List<GameObject> TutorialSteps;
    public GameObject ErrorScreen;
    [FormerlySerializedAs("CalibrationHandler")] public LocalCalibrationReceiver calibrationReceiver;

    /// <summary>
    /// The Start function checks for the presence of required components and throws exceptions if they are
    /// missing.
    /// </summary>
    void Start()
    {
        if (TutorialSteps == null || TutorialSteps.Count == 0)
        {
            throw new Exception($"{GetType()} needs to have Tutorial-Steps");
        }

        if (ErrorScreen == null)
        {
            throw new Exception($"{GetType()} needs to have a Error-Screen");
        }

        if (calibrationReceiver == null)
        {
            throw new Exception($"{GetType()} needs to have a reference to a LocalCalibrationHandler");
        }
    }

    /// <summary>
    /// This function checks the number of wall positions and updates the active index and error screen
    /// accordingly.
    /// </summary>
    void Update()
    {
        int numPoints = calibrationReceiver.wallPositions.Count;
        if (numPoints < TutorialSteps.Count)
        {
            SetIndexActive(numPoints);
            ErrorScreen.SetActive(false);
        }
        else
        {
            SetIndexActive(-1);
            ErrorScreen.SetActive(true);
        }
    }

    /// <summary>
    /// The function sets the active state of tutorial steps based on the given number of points.
    /// </summary>
    /// <param name="numPoints">The `numPoints` parameter is an integer that represents the index of the
    /// tutorial step that should be set as active.</param>
    private void SetIndexActive(int numPoints)
    {
        for (int i = 0; i < TutorialSteps.Count; i++)
        {
            TutorialSteps[i].SetActive(false);
        }

        if (numPoints >= 0)
        {
            TutorialSteps[numPoints].SetActive(true);
        }
    }
}