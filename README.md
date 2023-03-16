# AR-Vision
This application will recieve machine-vision data from a server and reorient to fit the user's perspective. Currently, this application uses the Unity Transport API to communicate with the other applications. This API is built on top of the UDP transport protocol. This document will outline how this application works, how to install, and how to run this application.

## Application Functionalities Overview
The UDP server is run within the application (Server.cs). It will listen for an initial message from the client describing its purpose. Valid purposes include "transmitter" and "receiver". The Client.cs file contains the client this app uses to communicate with the server. In this case, the client is the receiver. It will continually listen for messages, and once one is received, will send it to BoundingBoxRenderer.cs. 

BoundingBoxRenderer.cs take in the packet which is a JSON description of an "InputTree" object. It will convert it to an InputTree and if it hasn't seen it before, create a new game object, otherwise it will update the existing game objects values. If it doesn't see information about a game object for three cycles, it will delete the game object. 

PlaneToBox.cs will take information from the BoundingBox.cs object and use that to create a plane that will match the coordinates given by the bounding box. 

## Installing
To install this project, complete these steps: https://learn.microsoft.com/en-us/training/modules/mixed-reality-toolkit-project-unity/

The working scene is "BlankAR".

## Running
To run this project, you can either use the hololens emulator that should be installed in your Unity project, or you can build to hololens either using the remote connection or wired connection to the device (I've found that the wired connection is a lot easier to set up and use). The steps for building and deploying to hololens can be found here: https://learn.microsoft.com/en-us/windows/mixed-reality/develop/unity/build-and-deploy-to-hololens
