using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoundingBoxRenderer : MonoBehaviour {

    Dictionary<int, InputTree> treesToRender;
    Dictionary<int, GameObject> renderedTrees;

    public GameObject boundingBox;
    public Transform camPos;

    void Awake() {
        treesToRender = new Dictionary<int, InputTree>();
        renderedTrees = new Dictionary<int, GameObject>();
    }

    public void UpdateTree(InputTree tree) {
        if (treesToRender.ContainsKey(tree.Key)) {
            treesToRender[tree.Key] = tree;
            Debug.Log("Updating tree");
        } else { treesToRender.Add(tree.Key, tree); }

        Debug.Log("New Trees");
    }

    public void RemoveTrees(InputTree tree) {
        if (renderedTrees.ContainsKey(tree.Key)) {
            Destroy(renderedTrees[tree.Key]);
            renderedTrees.Remove(tree.Key);
        }
    }

    public void ClearTrees() {
        treesToRender.Clear();
    }

    void Update() {
        foreach(KeyValuePair<int, InputTree> tree in treesToRender) {
            if (!renderedTrees.ContainsKey(tree.Key)) {
                GameObject newBox = Instantiate(boundingBox, Vector3.zero, Quaternion.identity);
                newBox.GetComponent<PlaneToBox>().camPos = camPos;
                renderedTrees.Add(tree.Key, newBox);
            }

            PlaneToBox script = renderedTrees[tree.Key].GetComponent<PlaneToBox>();
            script.Width = tree.Value.boundingBox.Width;
            script.Height = tree.Value.boundingBox.Height;
            script.Center = tree.Value.boundingBox.Center;
        }
    }
}
