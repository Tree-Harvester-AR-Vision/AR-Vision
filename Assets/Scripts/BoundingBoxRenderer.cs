using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoundingBoxRenderer : MonoBehaviour {

    Dictionary<int, InputTree> treesToUpdate;
    Dictionary<int, InputTree> treesToCreate;
    Dictionary<int, GameObject> renderedTrees;

    public GameObject boundingBox;
    public Transform camPos;

    void Awake() {
        treesToUpdate = new Dictionary<int, InputTree>();
        renderedTrees = new Dictionary<int, GameObject>();
        treesToCreate = new Dictionary<int, InputTree>();
    }

    public void UpdateTree(InputTree tree) {
        if (renderedTrees.ContainsKey(tree.Key)) {
            treesToUpdate[tree.Key] = tree;
        }
    }

    public void CreateTree(InputTree tree) {
        treesToCreate.Add(tree.Key, tree);
    }

    public void RemoveTrees(InputTree tree) {
        if (renderedTrees.ContainsKey(tree.Key)) {
            Destroy(renderedTrees[tree.Key]);
            renderedTrees[tree.Key] = null;
        }
    }

    public void ClearTrees() {
        treesToUpdate.Clear();
    }

    void Update() {
        foreach(KeyValuePair<int, InputTree> tree in treesToCreate) {

            // don't create something that already exists
            if (renderedTrees.ContainsKey(tree.Key) && renderedTrees[tree.Key] != null) {
                treesToCreate.Clear();
                return;
            }

            GameObject newBox = Instantiate(boundingBox, Vector3.zero, Quaternion.identity);
            newBox.GetComponent<PlaneToBox>().camPos = camPos;

            if (!renderedTrees.ContainsKey(tree.Key)) {
                renderedTrees.Add(tree.Key, newBox);
            } else { renderedTrees[tree.Key] = newBox; }

            PlaneToBox script = renderedTrees[tree.Key].GetComponent<PlaneToBox>();
            script.Width = tree.Value.boundingBox.Width;
            script.Height = tree.Value.boundingBox.Height;
            script.Center = tree.Value.boundingBox.Center;
        }

        foreach(KeyValuePair<int, InputTree> tree in treesToUpdate) {
            if (renderedTrees.ContainsKey(tree.Key) && renderedTrees[tree.Key] != null) {
                PlaneToBox script = renderedTrees[tree.Key].GetComponent<PlaneToBox>();
                script.Width = tree.Value.boundingBox.Width;
                script.Height = tree.Value.boundingBox.Height;
                script.Center = tree.Value.boundingBox.Center;
            }
        }

        treesToCreate.Clear();
    }
}
