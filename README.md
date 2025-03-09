# StarCitizen_MFP v2.0
ESP32-S3 Based USB game control input for PC 
![SC_MFPv2 0](https://github.com/user-attachments/assets/0ed60c22-c07e-468c-807d-f0277ffb26e5)

Designed and developed for use with an ESP32-S3 dvelopment board connected to Windows via USB. Windows will see ESP32 as a Game Controller.
Digital GPIO pins are connected to ground through momentary push buttons providing button press signals to windows.

v2.0 - Redesign to support the new power management syteme used in v4.0 of Star Citizen using momentary two position on switches.
![Screenshot 2025-03-09 202142](https://github.com/user-attachments/assets/5151bfa5-5c11-451e-9ddb-45275fdf2200)

Hardware
ESP32 S3 DevKitC 1 N16R8
https://amzn.eu/d/9B6LxIf

16mm Red/Green Metal Shell Mushroom Head Push Button Switchs
https://amzn.eu/d/72stoBF

16mm Stainless Steel Momentary Push Button
https://amzn.eu/d/8QCAbFV

Guarded Toggle Switch with Mounting Panel 
https://amzn.eu/d/iHlKJJv
https://m.media-amazon.com/images/I/61bsHqFejiL._SL1000_.jpg

Heavy Duty Rocker Momentary Toggle Switch
3 Position 3 Pin (ON)-Off-(ON)
https://amzn.eu/d/988gmMA
https://m.media-amazon.com/images/I/71AbULv7kbL._AC_SL1500_.jpg

Software deveoped from https://github.com/schnoog/Joystick_ESP32S2
example files.

Additional software used in windows to allow for more than two game control devices to work with Star Citizen.
HIDHide - https://github.com/nefarius/HidHide
VJoy - https://sourceforge.net/projects/vjoystick/
Joystick Gremlin - https://whitemagic.github.io/JoystickGremlin/
