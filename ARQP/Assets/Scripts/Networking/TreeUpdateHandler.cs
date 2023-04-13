using System.Collections.Generic;
using Meta.WitAi.Json;

namespace Networking
{
    public class TreeUpdateHandler
    {
        internal BoundingBoxRenderer BBrenderer;
        
        internal void UpdateTrees(string treeData)
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

        internal void UpdateNewTrees(string tree)
        {
            //Debug.Log("Update: " + tree);

            InputTree inputTree = JsonConvert.DeserializeObject<InputTree>(tree);
            BBrenderer.UpdateTree(inputTree);
        }

        internal void GetNewTrees(string tree)
        {
            //Debug.Log("Create: " + tree);

            InputTree inputTree = JsonConvert.DeserializeObject<InputTree>(tree);
            BBrenderer.CreateTree(inputTree);
        }

        internal void RemoveTrees(string tree)
        {
            //Debug.Log("Remove: " + tree);
            InputTree inputTree = JsonConvert.DeserializeObject<InputTree>(tree);
            BBrenderer.RemoveTrees(inputTree);
        }
    }
}