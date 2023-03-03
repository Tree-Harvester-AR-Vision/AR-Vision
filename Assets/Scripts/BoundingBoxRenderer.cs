using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine;

public class BoundingBoxRenderer : MonoBehaviour {
    private Dictionary<int, GameObject> renderedTrees;
    private Dictionary<int, float> treeTimer;

    public GameObject boundingBox;
    public Transform camPos;

    void Awake() {
        treeTimer = new Dictionary<int, float>();
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
    }

    private void CreateTree(InputTree tree) {
        GameObject newBox = Instantiate(boundingBox, Vector3.zero, Quaternion.identity);
        newBox.GetComponent<PlaneToBox>().camPos = camPos;

        renderedTrees.Add(tree.Key, newBox);
        CreateTimer(tree.Key);

        PlaneToBox script = renderedTrees[tree.Key].GetComponent<PlaneToBox>();
        script.Width = tree.boundingBox.Width;
        script.Height = tree.boundingBox.Height;
        script.Center = tree.boundingBox.Center;
    }

    private void RemoveTree(int key) {
        if (renderedTrees.ContainsKey(key)) {
            Destroy(renderedTrees[key]);
            renderedTrees.Remove(key);
        }
    }

    void Update() {
        List<int> keys = new List<int>(treeTimer.Keys);
        foreach (int i in keys) {
            if (treeTimer[i] <= 0) {
                RemoveTree(i);
                treeTimer.Remove(i);
            } else {
                treeTimer[i] -= Time.deltaTime;
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
        treeTimer[Key] = 5f;
    }

    private void CreateTimer(int Key) {
        treeTimer.Add(Key, 5f);
    }
}
