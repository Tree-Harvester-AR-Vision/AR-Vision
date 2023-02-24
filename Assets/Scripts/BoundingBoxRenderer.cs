using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine;

public class BoundingBoxRenderer : MonoBehaviour {
    private Dictionary<int, GameObject> renderedTrees;
    private Dictionary<int, int> treeTimer;

    public GameObject boundingBox;
    public Transform camPos;

    void Awake() {
        renderedTrees = new Dictionary<int, GameObject>();
    }

    private void UpdateTree(InputTree tree) {
        if (renderedTrees.ContainsKey(tree.Key) && renderedTrees[tree.Key] != null) {
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

        if (!renderedTrees.ContainsKey(tree.Key)) {
            renderedTrees.Add(tree.Key, newBox);
        } else { renderedTrees[tree.Key] = newBox; }

        CreateTimer(tree.Key);

        PlaneToBox script = renderedTrees[tree.Key].GetComponent<PlaneToBox>();
        script.Width = tree.boundingBox.Width;
        script.Height = tree.boundingBox.Height;
        script.Center = tree.boundingBox.Center;
    }

    private void RemoveTree(InputTree tree) {
        if (renderedTrees.ContainsKey(tree.Key)) {
            Destroy(renderedTrees[tree.Key]);
            renderedTrees[tree.Key] = null;
        }
    }

    void Update() {
        foreach (int i in treeTimer.Keys) {
            if (treeTimer[i] <= 0) {
                RemoveTree(renderedTrees[i].GetComponent<InputTree>());
                treeTimer.Remove(i);
            } else {
                treeTimer[i]--;
            }
        }
    }

    public void ParseBoundingBoxData(string str) {
        InputTree inputTree = JsonConvert.DeserializeObject<InputTree>(str);

        if (!renderedTrees.ContainsKey(inputTree.Key) || renderedTrees[inputTree.Key] == null) {
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
