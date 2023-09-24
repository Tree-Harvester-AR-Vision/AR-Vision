namespace Networking.Responses
{
// Root myDeserializedClass = JsonConvert.DeserializeObject<Root>(myJsonResponse);
    public class Location
    {
        public float X { get; set; }
        public float Y { get; set; }
        public float Z { get; set; }
    }

    public class Calibration
    {
        public Rotation Rotation { get; set; }
        public Location Location { get; set; }
    }

    public class Rotation
    {
        public float X { get; set; }
        public float Y { get; set; }
        public float Z { get; set; }
    }
}