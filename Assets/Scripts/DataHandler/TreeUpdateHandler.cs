using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine;

namespace DataHandler
{
    public class TreeUpdateHandler : MonoBehaviour, IDataReceiver
    {
        public BoundingBoxRenderer BBrenderer;
        
        private void UpdateTrees(string treeData)
        {
            List<InputTree>[] input = JsonConvert.DeserializeObject<List<InputTree>[]>(treeData);
            foreach (InputTree tree in input[0])
            {
                BBrenderer.CreateTree(tree);
            }

            foreach (InputTree tree in input[1])
            {
                BBrenderer.UpdateTree(tree);
            }

            foreach (InputTree tree in input[2])
            {
                BBrenderer.RemoveTrees(tree);
            }
        }

        private void UpdateNewTrees(string tree)
        {
            //Debug.Log("Update: " + tree);

            InputTree inputTree = JsonConvert.DeserializeObject<InputTree>(tree);
            BBrenderer.UpdateTree(inputTree);
        }

        private void GetNewTrees(string tree)
        {
            //Debug.Log("Create: " + tree);

            InputTree inputTree = JsonConvert.DeserializeObject<InputTree>(tree);
            BBrenderer.CreateTree(inputTree);
        }

        private void RemoveTrees(string tree)
        {
            //Debug.Log("Remove: " + tree);
            InputTree inputTree = JsonConvert.DeserializeObject<InputTree>(tree);
            BBrenderer.RemoveTrees(inputTree);
        }

        public void UpdateData(string receivedData)
        {
            UpdateTrees(receivedData);
        }
    }

}