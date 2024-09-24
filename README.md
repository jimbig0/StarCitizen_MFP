# StarCitizen_MFP
ESP32-S3 Based USB game control input for PC 
![SC-MFP](https://github.com/user-attachments/assets/b7faf35a-3641-45a8-a6c2-a7d133f3d6d0)
Designed and developed for use with an ESP32-S3 dvelopment board connected to Windows via USB. Windows will see ESP32 as a Game Controller.
Digital GPIO pins are connected to ground through momentary push buttons providing button press signals to windows.

Hardware
ESP32 S3 DevKitC 1 N16R8
https://amzn.eu/d/9B6LxIf

16mm Red/Green Metal Shell Mushroom Head Push Button Switchs
https://amzn.eu/d/72stoBF

16mm Stainless Steel Momentary Push Button
https://amzn.eu/d/8QCAbFV

Guarded Toggle Switch with Mounting Panel 
https://amzn.eu/d/iHlKJJv

Software deveoped from https://github.com/schnoog/Joystick_ESP32S2
example files.

Additional software used in windows to allow for more than two game control devices to work with Star Citizen.
HIDHide - https://github.com/nefarius/HidHide
VJoy - https://sourceforge.net/projects/vjoystick/
Joystick Gremlin - https://whitemagic.github.io/JoystickGremlin/
