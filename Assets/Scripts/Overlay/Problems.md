# Problems with Overlay

## Simulation vs. Real World
In the the real world, the items are places in real-world coordinates from the camera. For the overlay, it would be enough to place a virtual object in Unity to the same location as the camera and add the overlay in the same real-world coordinates in relation to this reference point. If the measurements are correct, we can then just move around, and the trees and their overlay will stay atop of each other.

This is not possible in the virtual world. The overlay and the trees do not shift at the same rate. While the simulation software is capable of sending the data in real-world coordinates, the screen can only display the data in 2D. This results in different shifting rates between the trees on the screen and the overlays when the user moves his head around. Another issue is that we do not know where the virtual camera is placed.

## Solution
(Hopefully) A flag will determine if the data coming in is simulation data (2D-Screen) or real data (3D). If the data comes from a simulation, the values are converted to lay on the same plane 1 meter from the origin marked by the cross. The sizes of the overlays are scaled accordingly