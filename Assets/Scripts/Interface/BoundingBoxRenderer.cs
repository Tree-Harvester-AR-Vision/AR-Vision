using System.Collections;
using System.Collections.Generic;
using Networking.Responses;
using UnityEngine;

public class BoundingBoxRenderer : MonoBehaviour
{
    Dictionary<int, InputTree> treesToUpdate;
    Dictionary<int, InputTree> treesToCreate;
    Dictionary<int, GameObject> renderedTrees;

    public GameObject boundingBox;
    public Transform origin;


    /// <summary>
    /// The Awake function initializes three dictionaries used for managing trees in a game.
    ///
    /// Awake is called whenever the variable is instanciated
    /// </summary>
    void Awake()
    {
        treesToUpdate = new Dictionary<int, InputTree>();
        renderedTrees = new Dictionary<int, GameObject>();
        treesToCreate = new Dictionary<int, InputTree>();
    }

    /// <summary>
    /// The function updates an existing tree if it exists in the dictionary, otherwise it creates a new
    /// tree.
    /// </summary>
    /// <param name="InputTree">The InputTree parameter is an object that represents the tree that needs to
    /// be updated or created.</param>
    public void UpdateTree(InputTree tree)
    {
        if (renderedTrees.ContainsKey(tree.Key))
        {
            treesToUpdate[tree.Key] = tree;
        }
        else
        {
            CreateTree(tree);
        }
    }

    /// <summary>
    /// The CreateTree function checks if a tree with the given key already exists, and either adds it to a
    /// list of trees to update or creates a new tree.
    /// </summary>
    /// <param name="InputTree">The InputTree parameter is an object that represents a tree to be created or
    /// updated.</param>
    public void CreateTree(InputTree tree)
    {
        if (renderedTrees.ContainsKey(tree.Key))
        {
            treesToUpdate.Add(tree.Key, tree);
        }
        else
        {
            treesToCreate.Add(tree.Key, tree);
        }
    }

    /// <summary>
    /// The function removes a tree from a dictionary of rendered trees if it exists.
    /// </summary>
    /// <param name="InputTree">The parameter `InputTree` is a class or data structure that represents a
    /// tree object.</param>
    public void RemoveTrees(InputTree tree)
    {
        if (renderedTrees.ContainsKey(tree.Key))
        {
            Destroy(renderedTrees[tree.Key]);
            renderedTrees.Remove(tree.Key);
        }
    }

    /// <summary>
    /// The ClearTrees function clears the treesToUpdate list.
    /// </summary>
    public void ClearTrees()
    {
        treesToUpdate.Clear();
    }

    /// <summary>
    /// The Update function creates and updates bounding boxes for trees based on lists contained within this class.
    /// </summary>
    void Update()
    {
        foreach (KeyValuePair<int, InputTree> tree in treesToCreate)
        {
            // don't create something that already exists
            if (renderedTrees.ContainsKey(tree.Key) && renderedTrees[tree.Key] != null)
            {
                treesToUpdate.Add(tree.Key, tree.Value);
                treesToCreate.Remove(tree.Key);
                return;
            }

            GameObject newBox = Instantiate(boundingBox, Vector3.zero, Quaternion.identity);
            newBox.transform.parent = origin;
            newBox.GetComponent<PlaneToBox>().origin = origin;

            if (!renderedTrees.ContainsKey(tree.Key))
            {
                renderedTrees.Add(tree.Key, newBox);
            }
            else
            {
                renderedTrees[tree.Key] = newBox;
            }

            PlaneToBox script = renderedTrees[tree.Key].GetComponent<PlaneToBox>();
            script.Width = tree.Value.boundingBox.Width;
            script.Height = tree.Value.boundingBox.Height;
            script.Center = tree.Value.boundingBox.Center;
        }

        foreach (KeyValuePair<int, InputTree> tree in treesToUpdate)
        {
            if (renderedTrees.ContainsKey(tree.Key) && renderedTrees[tree.Key] != null)
            {
                PlaneToBox script = renderedTrees[tree.Key].GetComponent<PlaneToBox>();
                script.Width = tree.Value.boundingBox.Width;
                script.Height = tree.Value.boundingBox.Height;
                script.Center = tree.Value.boundingBox.Center;
            }
        }

        treesToUpdate.Clear();
        treesToCreate.Clear();
    }
}