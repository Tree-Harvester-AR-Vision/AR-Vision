using System.Collections.Generic;
using Networking.Responses;
using UnityEngine;

namespace Interface
{
    public class BoundingBoxRenderer : MonoBehaviour
    {
        Dictionary<int, InputTree> _treesToUpdate;
        Dictionary<int, InputTree> _treesToCreate;
        Dictionary<int, GameObject> _renderedTrees;

        public GameObject boundingBox;
        public Transform origin;


        /// <summary>
        /// The Awake function initializes three dictionaries used for managing trees in a game.
        ///
        /// Awake is called whenever the variable is instanciated
        /// </summary>
        void Awake()
        {
            _treesToUpdate = new Dictionary<int, InputTree>();
            _renderedTrees = new Dictionary<int, GameObject>();
            _treesToCreate = new Dictionary<int, InputTree>();
        }

        /// <summary>
        /// The function updates an existing tree if it exists in the dictionary, otherwise it creates a new
        /// tree.
        /// </summary>
        /// <param name="tree">The InputTree parameter is an object that represents the tree that needs to
        /// be updated or created.</param>
        public void UpdateTree(InputTree tree)
        {
            if (_renderedTrees.ContainsKey(tree.Key))
            {
                _treesToUpdate[tree.Key] = tree;
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
        /// <param name="tree">The InputTree parameter is an object that represents a tree to be created or
        /// updated.</param>
        public void CreateTree(InputTree tree)
        {
            if (_renderedTrees.ContainsKey(tree.Key))
            {
                _treesToUpdate.Add(tree.Key, tree);
            }
            else
            {
                _treesToCreate.Add(tree.Key, tree);
            }
        }

        /// <summary>
        /// The function removes a tree from a dictionary of rendered trees if it exists.
        /// </summary>
        /// <param name="tree">The parameter `InputTree` is a class or data structure that represents a
        /// tree object.</param>
        public void RemoveTrees(InputTree tree)
        {
            if (_renderedTrees.ContainsKey(tree.Key))
            {
                Destroy(_renderedTrees[tree.Key]);
                _renderedTrees.Remove(tree.Key);
            }
        }

        /// <summary>
        /// The ClearTrees function clears the treesToUpdate list.
        /// </summary>
        public void ClearTrees()
        {
            _treesToUpdate.Clear();
        }

        /// <summary>
        /// The Update function creates and updates bounding boxes for trees based on lists contained within this class.
        /// </summary>
        void Update()
        {
            foreach (KeyValuePair<int, InputTree> tree in _treesToCreate)
            {
                // don't create something that already exists
                if (_renderedTrees.ContainsKey(tree.Key) && _renderedTrees[tree.Key] != null)
                {
                    _treesToUpdate.Add(tree.Key, tree.Value);
                    _treesToCreate.Remove(tree.Key);
                    return;
                }

                GameObject newBox = Instantiate(boundingBox, Vector3.zero, Quaternion.identity);
                newBox.transform.parent = origin;
                newBox.GetComponent<PlaneToBox>().cameraPosition = origin;

                _renderedTrees[tree.Key] = newBox;

                PlaneToBox script = _renderedTrees[tree.Key].GetComponent<PlaneToBox>();
                script.width = tree.Value.boundingBox.Width;
                script.height = tree.Value.boundingBox.Height;
                script.center = tree.Value.boundingBox.Center;
            }

            foreach (KeyValuePair<int, InputTree> tree in _treesToUpdate)
            {
                if (_renderedTrees.ContainsKey(tree.Key) && _renderedTrees[tree.Key] != null)
                {
                    PlaneToBox script = _renderedTrees[tree.Key].GetComponent<PlaneToBox>();
                    script.width = tree.Value.boundingBox.Width;
                    script.height = tree.Value.boundingBox.Height;
                    script.center = tree.Value.boundingBox.Center;
                }
            }

            _treesToUpdate.Clear();
            _treesToCreate.Clear();
        }
    }
}