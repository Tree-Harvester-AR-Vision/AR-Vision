using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlaneToBox : MonoBehaviour
{
    public Vector3 Center;
    public float Width;
    public float Height;
    public Transform camPos;

    private float OrigWidth;
    private float OrigHeight;
    [SerializeField] private Vector3 TLCorner;
    [SerializeField] private Vector3 BLCorner;
    [SerializeField] private Vector3 TRCorner;

    void Start() {
        TLCorner = transform.TransformPoint(GetComponent<MeshFilter>().sharedMesh.vertices[0]);
        TRCorner = transform.TransformPoint(GetComponent<MeshFilter>().sharedMesh.vertices[110]);
        BLCorner = transform.TransformPoint(GetComponent<MeshFilter>().sharedMesh.vertices[10]);

        OrigWidth = Vector3.Distance(camPos.InverseTransformPoint(TLCorner), camPos.InverseTransformPoint(TRCorner));
        OrigHeight = Vector3.Distance(camPos.InverseTransformPoint(TLCorner), camPos.InverseTransformPoint(BLCorner));
    }


    void Update() {
        transform.LookAt(Camera.main.transform.position);
        transform.Rotate(90, 90, 90);

        transform.position = camPos.TransformPoint(Center); // takes from camera's space to world space
        Debug.Log("Center: " + camPos.TransformPoint(Center));
        transform.localScale = new Vector3(Width / OrigWidth, 1, Height / OrigHeight); // gets new scale as a ratio of original scale
    }
}
