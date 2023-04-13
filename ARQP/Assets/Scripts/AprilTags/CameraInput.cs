using UnityEngine;

namespace AprilTags
{
    public class CameraInput : MonoBehaviour
    {
        public Texture texture;

        // Start is called before the first frame update
        void Start()
        {
            WebCamDevice[] devices = WebCamTexture.devices;

            Debug.LogWarning($"Found {devices.Length} devices");
            // for debugging purposes, prints available devices to the console
            for (int i = 0; i < devices.Length; i++)
            {
                Debug.LogWarning("Webcam available: " + devices[i].name);
            }

            //Renderer rend = this.GetComponentInChildren<Renderer>();

            // assuming the first available WebCam is desired

            WebCamTexture tex = new WebCamTexture(devices[0].name);
            //rend.material.mainTexture = tex;
            texture = tex;
            tex.Play();
        }

        // Update is called once per frame
        void Update()
        {
        
        }
    }
}
