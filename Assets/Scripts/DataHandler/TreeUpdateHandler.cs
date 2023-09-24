using System.Collections.Generic;
using Networking.Responses;
using Newtonsoft.Json;
using TMPro;
using UnityEngine;

namespace DataHandler
{
    public class TreeUpdateHandler : MonoBehaviour, IDataReceiver
    {
        public BoundingBoxRenderer BBrenderer;

        public void UpdateData(bool sim, string receivedData, TextMeshPro textMeshPro)
        {
            List<InputTree>[] input = JsonConvert.DeserializeObject<List<InputTree>[]>(receivedData);
            textMeshPro.text = $"Creates:\t{input[0].Count}\nUpdates:\t{input[1].Count}\nRemoves:\t{input[2].Count}";

            if (input.Length == 3)
            {
                if (sim)
                {
                    input = AdjustScreen(input);
                }

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
            else
            {
                Debug.LogWarning("Received tree-data has an unexpected format");
            }

            
        }

        private List<InputTree>[] AdjustScreen(List<InputTree>[] input)
        {
            for (int i = 0; i < input.Length; i++)
            {
                input[i] = AdjustScreen(input[i]);
            }

            return input;
        }

        private List<InputTree> AdjustScreen(List<InputTree> input)
        {
            List<InputTree> adjusted = new List<InputTree>();
            foreach(InputTree tree in input)
            {
                //Adjust so that distance from camera is 1 meter: Divide everything by 1 meter
                float zAdjust = tree.boundingBox.Center.z;
                tree.boundingBox.Center /= zAdjust;
                tree.boundingBox.Width /= zAdjust;
                tree.boundingBox.Height /= zAdjust;
                tree.boundingBox.Center.z -= 1;
                adjusted.Add(tree);
            }
            return adjusted;
        }
    }

}