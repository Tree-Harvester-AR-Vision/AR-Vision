using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
using TMPro;
using UnityEngine;

public class BoundingBoxRenderer : MonoBehaviour {
    private Dictionary<int, GameObject> renderedTrees;
    private Dictionary<int, int> treeTimer;

    public GameObject boundingBox;
    public Transform camPos;

    void Awake() {
        treeTimer = new Dictionary<int, int>();
        renderedTrees = new Dictionary<int, GameObject>();
    }

    private void UpdateTree(InputTree tree) {
        if (renderedTrees[tree.Key] != null) {
            PlaneToBox script = renderedTrees[tree.Key].GetComponent<PlaneToBox>();
            script.Width = tree.boundingBox.Width;
            script.Height = tree.boundingBox.Height;
            script.Center = tree.boundingBox.Center;
            ResetTimer(tree.Key);
        }
        else
        {
            CreateTree(tree);
        }
    }

    private void CreateTree(InputTree tree) {
        GameObject newBox = Instantiate(boundingBox, Vector3.zero, Quaternion.identity);

        TMP_Text text = newBox.transform.GetChild(0).GetChild(0).GetComponent<TMP_Text>();
        text.text = $"Species: {tree.Species}\nAge: {tree.Age}";

        newBox.GetComponent<PlaneToBox>().camPos = camPos;

        renderedTrees.Add(tree.Key, newBox);
        CreateTimer(tree.Key);

        PlaneToBox script = renderedTrees[tree.Key].GetComponent<PlaneToBox>();
        script.Width = tree.boundingBox.Width;
        script.Height = tree.boundingBox.Height;
        script.Center = tree.boundingBox.Center;
    }

    public void RemoveTrees(InputTree tree) {
        if (renderedTrees.ContainsKey(tree.Key)) {
            Destroy(renderedTrees[tree.Key]);
            renderedTrees.Remove(tree.Key);
        }
    }

    void Update() {
        List<int> keys = new List<int>(treeTimer.Keys);
        foreach (int i in keys) {
            if (treeTimer[i] <= 0) {
                RemoveTree(i);
                treeTimer.Remove(i);
            } else {
                treeTimer[i] -= 1;
            }
        }
    }

    public void ParseBoundingBoxData(string str) {
        if (str.Length == 0) { // if incomplete data, don't work with it
            return;
        }

        InputTree inputTree = JsonConvert.DeserializeObject<InputTree>(str);

        if (!renderedTrees.ContainsKey(inputTree.Key)) {
            CreateTree(inputTree);
        } else { UpdateTree(inputTree); }
    }

    private void ResetTimer(int Key) {
        treeTimer[Key] = 3;
    }

    private void CreateTimer(int Key) {
        treeTimer.Add(Key, 3);
    }
}
