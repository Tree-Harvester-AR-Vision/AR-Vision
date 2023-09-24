using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class PlaneToBox : MonoBehaviour
{
    public Vector3 Center;
    public float Width;
    public float Height;
    [FormerlySerializedAs("camPos")] public Transform origin;

    private float OrigWidth;
    private float OrigHeight;
    [SerializeField] private Vector3 TLCorner;
    [SerializeField] private Vector3 BLCorner;
    [SerializeField] private Vector3 TRCorner;

    private Transform mainCameraTransform;

    /// <summary>
    /// The Start function calculates the original width and height of a mesh and stores the camera's
    /// transform.
    /// </summary>
    void Start()
    {
        TLCorner = transform.TransformPoint(GetComponent<MeshFilter>().sharedMesh.vertices[0]);
        TRCorner = transform.TransformPoint(GetComponent<MeshFilter>().sharedMesh.vertices[110]);
        BLCorner = transform.TransformPoint(GetComponent<MeshFilter>().sharedMesh.vertices[10]);

        OrigWidth = Vector3.Distance(origin.InverseTransformPoint(TLCorner), origin.InverseTransformPoint(TRCorner));
        OrigHeight = Vector3.Distance(origin.InverseTransformPoint(TLCorner), origin.InverseTransformPoint(BLCorner));

        mainCameraTransform = Camera.main.transform;
    }


    /// <summary>
    /// The Update function updates the position, rotation, and scale of an object based on the position and
    /// properties of the main camera.
    /// </summary>
    void Update()
    {
        transform.LookAt(mainCameraTransform.position);
        transform.Rotate(90, 90, 90);

        transform.position = origin.TransformPoint(Center); // takes from camera's space to world space
        transform.localScale =
            new Vector3(Width / OrigWidth, 1, Height / OrigHeight); // gets new scale as a ratio of original scale
    }
}