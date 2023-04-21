using System.Collections.Generic;
using Newtonsoft.Json;
using TMPro;
using UnityEngine;

namespace DataHandler
{
    public class TreeUpdateHandler : MonoBehaviour, IDataReceiver
    {
        public BoundingBoxRenderer BBrenderer;

        public void UpdateData(string receivedData, TextMeshPro textMeshPro)
        {
            List<InputTree>[] input = JsonConvert.DeserializeObject<List<InputTree>[]>(receivedData);

            textMeshPro.text = $"Creates:\t{input[0].Count}\nUpdates:\t{input[1].Count}\nRemoves:\t{input[2].Count}";
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
    }

}