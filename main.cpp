// ------------------------------------------------------------------------
// -------------StarCitizen-Multi-Function-Panel---------------------------
// Developed for ESP32-S3 by J.Cooper aka JimbigO 09-09-2024
// Based off of the example code
// by Matthew Heironimus
// 2015-11-20 https://github.com/schnoog/Joystick_ESP32S2
//
// Code to enable ESP32-S3 to act as a USB game controller in windows
// passing Descreet Button inputs from pins 4 - 18
// ***************************Important**********************************
// For Star Citizen requires the use of HIDHide, Joystic Gremlin & VJoy
//------------------------------------------------------------------------
#include <Arduino.h>
#include <Joystick_ESP32S2.h>

Joystick_ Joystick;

void setup() {
  // Initialize Button Pins
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  pinMode(17, INPUT_PULLUP);
  pinMode(18, INPUT_PULLUP);

  // Initialize USB
  USB.PID(0x8211);
	USB.VID(0x303b);
	USB.productName("SC_MFP_V1.0.0");
	USB.manufacturerName("JimbigO Insdustries");
	USB.begin();
  // Initialize Joystick Library
  Joystick.begin();
}

// Constant that maps the first phyical pin to the joystick button.
const int pinToButtonMap = 4;

// Initialise the last state of the buttons as zero or false
int lastButtonState[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

void loop() {

  // Read pin values sequentially and if current state of the button is differnt from the last state
  // send a signal for the relavent button
  for (int index = 0; index < 15; index++)
  {
    int currentButtonState = !digitalRead(index + pinToButtonMap);
    if (currentButtonState != lastButtonState[index])
    {
      Joystick.setButton(index, currentButtonState);
      lastButtonState[index] = currentButtonState;
    }
  }

  delay(50);
}
