using System;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

namespace AprilTags
{
    sealed class AprilTagDetector : MonoBehaviour
    {
        public CameraInput source;
        public int _decimation = 1;
        public float _tagSize = 0.05f;
        public int FoV = 67;
        public Material tagMaterial;
        public RawImage webcamPreview;
        public Text debugText;

        AprilTag.TagDetector _detector;
        TagDrawer _drawer;

        void Start()
        {
            
            _detector = new AprilTag.TagDetector(source.texture.width, source.texture.height, _decimation);
            _drawer = new TagDrawer(tagMaterial);
        }

        void OnDestroy()
        {
            _detector.Dispose();
            _drawer.Dispose();
        }

        void LateUpdate()
        {
            webcamPreview.texture = source.texture;

            if (_detector != null)
            {
                ReadOnlySpan<Color32> image = source.texture.AsSpan();
                if (image.IsEmpty) return;

                // AprilTag detection
                var fov = FoV * Mathf.Deg2Rad;
                _detector.ProcessImage(image, fov, _tagSize);

                // Detected tag visualization
                foreach (var tag in _detector.DetectedTags)
                {
                    Debug.Log($"ID: {tag.ID}, {tag.Position}, {tag.Rotation}");
                    _drawer.Draw(tag.ID, tag.Position, tag.Rotation, _tagSize);
                }


                // Profile data output (with 30 frame interval)
                if (Time.frameCount % 30 == 0)
                    debugText.text = _detector.ProfileData.Aggregate
                        ("Profile (usec)", (c, n) => $"{c}\n{n.name} : {n.time}");
            }
        }
    }
}