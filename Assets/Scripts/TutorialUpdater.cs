using System;
using System.Collections;
using System.Collections.Generic;
using DataHandler;
using UnityEngine;

public class TutorialUpdater : MonoBehaviour
{
    public List<GameObject> TutorialSteps;
    public GameObject ErrorScreen;
    public LocalCalibrationHandler CalibrationHandler;
    
    // Start is called before the first frame update
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

        if (CalibrationHandler == null)
        {
            throw new Exception($"{GetType()} needs to have a reference to a LocalCalibrationHandler");
        }
    }

    // Update is called once per frame
    void Update()
    {
        int numPoints = CalibrationHandler.wallPositions.Count;
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

    private void SetIndexActive(int numPoints)
    {
        for(int i = 0; i < TutorialSteps.Count; i++)
        {
            TutorialSteps[i].SetActive(false);
        }

        if (numPoints >= 0)
        {
            TutorialSteps[numPoints].SetActive(true);
        }
    }
}
