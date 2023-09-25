using UnityEngine;

namespace Interface
{
    public class PlaneToBox : MonoBehaviour
    {
        public Vector3 center;
        public float width;
        public float height;
        public Transform cameraPosition;

        private float _origWidth;
        private float _origHeight;
        [SerializeField] private Vector3 tlCorner;
        [SerializeField] private Vector3 blCorner;
        [SerializeField] private Vector3 trCorner;

        private Transform _mainCameraTransform;

        /// <summary>
        /// The Start function calculates the original width and height of a mesh and stores the camera's
        /// transform.
        /// </summary>
        void Start()
        {
            tlCorner = transform.TransformPoint(GetComponent<MeshFilter>().sharedMesh.vertices[0]);
            trCorner = transform.TransformPoint(GetComponent<MeshFilter>().sharedMesh.vertices[110]);
            blCorner = transform.TransformPoint(GetComponent<MeshFilter>().sharedMesh.vertices[10]);

            _origWidth = Vector3.Distance(cameraPosition.InverseTransformPoint(tlCorner), cameraPosition.InverseTransformPoint(trCorner));
            _origHeight = Vector3.Distance(cameraPosition.InverseTransformPoint(tlCorner), cameraPosition.InverseTransformPoint(blCorner));

            if (Camera.main != null)
            {
                _mainCameraTransform = Camera.main.transform;
            }
        }


        /// <summary>
        /// The Update function updates the position, rotation, and scale of an object based on the position and
        /// properties of the main camera.
        /// </summary>
        void Update()
        {
            transform.LookAt(_mainCameraTransform.position);
            transform.Rotate(90, 90, 90);

            transform.position = cameraPosition.TransformPoint(center); // takes from camera's space to world space
            transform.localScale =
                new Vector3(width / _origWidth, 1, height / _origHeight); // gets new scale as a ratio of original scale
        }
    }
}