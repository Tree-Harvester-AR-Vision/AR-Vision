using System.Collections.Generic;
using Interface;
using Networking.Responses;
using Newtonsoft.Json;
using TMPro;
using UnityEngine;

namespace DataHandler.Tree
{
    /// <summary>
    /// The TreeUpdateReceiver class is responsible for receiving and updating tree data, adjusting the screen if necessary.
    /// </summary>
    public class TreeUpdateReceiver : MonoBehaviour, IDataReceiver
    {
        public BoundingBoxRenderer boundingBoxRenderer;

        /// <summary>
        /// The function `UpdateData` updates the data based on the received input, adjusts the screen
        /// if necessary, and creates, updates, or removes trees accordingly.
        /// </summary>
        /// <param name="sim">The "sim" parameter is a boolean value that indicates whether the data
        /// should be adjusted for simulation purposes. If it is true, the data will be adjusted before
        /// processing. If it is false, the data will be processed as is.</param>
        /// <param name="receivedData">The `receivedData` parameter is a string that contains JSON data
        /// representing a list of `InputTree` objects.</param>
        /// <param name="textField">TextMeshPro is a reference to a TextMeshPro component in Unity. It
        /// is used to display the number of trees created, updated, and removed in the UI.</param>
        public void UpdateData(bool sim, string receivedData, TextMeshPro textField)
        {
            List<InputTree>[] input = JsonConvert.DeserializeObject<List<InputTree>[]>(receivedData);

            string creates = input[0].Count.ToString();
            string updates = input[1].Count.ToString();
            string removes = input[2].Count.ToString();
            
            textField.text = $"Creates:\t{creates}\nUpdates:\t{updates}\nRemoves:\t{removes}";

            if (input.Length == 3)
            {
                if (sim)
                {
                    input = AdjustScreen(input);
                }

                foreach (InputTree tree in input[0])
                {
                    boundingBoxRenderer.CreateTree(tree);
                }

                foreach (InputTree tree in input[1])
                {
                    boundingBoxRenderer.UpdateTree(tree);
                }

                foreach (InputTree tree in input[2])
                {
                    boundingBoxRenderer.RemoveTrees(tree);
                }
            }
            else
            {
                Debug.LogWarning("Received tree-data has an unexpected format");
            }
        }

        /// <summary>
        /// The function AdjustScreen takes in a list of input trees and adjusts the screen for each tree in the
        /// list.
        /// </summary>
        /// <param name="input">An array of lists of InputTree objects.</param>
        /// <returns>
        /// The method is returning a List of InputTree arrays.
        /// </returns>
        private List<InputTree>[] AdjustScreen(List<InputTree>[] input)
        {
            for (int i = 0; i < input.Length; i++)
            {
                input[i] = AdjustScreen(input[i]);
            }

            return input;
        }

        /// <summary>
        /// The AdjustScreen function adjusts the bounding box of each tree in the input list based on the
        /// z-coordinate of its center.
        /// </summary>
        /// <param name="input">A list of InputTree objects. Each InputTree object has a boundingBox property,
        /// which is a BoundingBox object. The BoundingBox object has properties for Center, Width, Height, and
        /// Depth.</param>
        /// <returns>
        /// The method is returning a list of InputTree objects.
        /// </returns>
        // TODO: https://forum.unity.com/threads/how-to-convert-a-3d-coordinate-to-screen-coordinate-monitor-lefteye.946803/
        private List<InputTree> AdjustScreen(List<InputTree> input)
        {
            List<InputTree> adjusted = new List<InputTree>();
            foreach (InputTree tree in input)
            {
                float zAdjust = tree.boundingBox.Center.z;
                tree.boundingBox.Center /= zAdjust;
                tree.boundingBox.Width /= zAdjust;
                tree.boundingBox.Height /= zAdjust;
                tree.boundingBox.Center.z /= zAdjust;
                adjusted.Add(tree);
            }

            return adjusted;
        }
    }
}