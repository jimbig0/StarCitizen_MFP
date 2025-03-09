// ------------------------------------------------------------------------
// -------------StarCitizen-Multi-Function-Panel---------------------------
// Developed for ESP32-S3 by J.Cooper aka JimbigO 09-09-2024
// Based off of the example code
// by Matthew Heironimus
// 2015-11-20 https://github.com/schnoog/Joystick_ESP32S2
//
// Code to enable ESP32-S3 to act as a USB game controller in windows
// passing Descreet Button inputs from pins 
// Version 2.0
// ***************************Important**********************************
// For Star Citizen requires the use of HIDHide, Joystic Gremlin & VJoy
//------------------------------------------------------------------------
#include <Arduino.h>
#include <Joystick_ESP32S2.h>

Joystick_ Joystick(
// Disable unused axis. No analogue inputs are utilised in the MFP
JOYSTICK_DEFAULT_REPORT_ID,
JOYSTICK_TYPE_JOYSTICK,
19, // Number of Buttons
0, // Number of Hat Switches
false, // X Axis
false, // Y Axis
false, // Z Axis
false, // Rx Axis
false, // Ry Axis
false, // Rz Axis
false, // Rudder
false, // Throttle
false, // Accelerator
false, // Brake
false // Steering
);
void setup() {
  // Initialize Button Pins
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
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
  pinMode(41, INPUT_PULLUP);
  pinMode(42, INPUT_PULLUP);
  // Initialize USB
  USB.PID(0x8211);
	USB.VID(0x303b);
	USB.productName("SC_MFP_V2.0.0");
	USB.manufacturerName("JimbigO Insdustries");
	USB.begin();
  // Initialize Joystick Library
  Joystick.begin();
}

const int buttonPins[] = {1, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 41, 42};
int lastButtonState[19]; // Initialize without values
int lastLoopTime = 0;
int loopDelay = 1;

void loop() {
  unsigned long currentTime = millis();
  if (currentTime - lastLoopTime >= loopDelay) {
    lastLoopTime = currentTime;

    // Check each pin individually
    int button1State = !digitalRead(1);
    if (button1State != lastButtonState[0]) {
      Joystick.setButton(0, button1State);
      lastButtonState[0] = button1State;
    }
    int button2State = !digitalRead(2);
    if (button2State != lastButtonState[1]) {
      Joystick.setButton(1, button2State);
      lastButtonState[1] = button2State;
    }
    int button3State = !digitalRead(4);
    if (button3State != lastButtonState[2]) {
      Joystick.setButton(2, button3State);
      lastButtonState[2] = button3State;
    }
    int button5State = !digitalRead(5);
    if (button5State != lastButtonState[3]) {
      Joystick.setButton(3, button5State);
      lastButtonState[3] = button5State;
    }
    int button6State = !digitalRead(6);
    if (button6State != lastButtonState[4]) {
      Joystick.setButton(4, button6State);
      lastButtonState[4] = button6State;
    }
    int button7State = !digitalRead(7);
    if (button7State != lastButtonState[5]) {
      Joystick.setButton(5, button7State);
      lastButtonState[5] = button7State;
    }
    int button8State = !digitalRead(8);
    if (button8State != lastButtonState[6]) {
      Joystick.setButton(6, button8State);
      lastButtonState[6] = button8State;
    }
    int button9State = !digitalRead(9);
    if (button9State != lastButtonState[7]) {
      Joystick.setButton(7, button9State);
      lastButtonState[7] = button9State;
    }
    int button10State = !digitalRead(10);
    if (button10State != lastButtonState[8]) {
      Joystick.setButton(8, button10State);
      lastButtonState[8] = button10State;
    }
    int button11State = !digitalRead(11);
    if (button11State != lastButtonState[9]) {
      Joystick.setButton(9, button11State);
      lastButtonState[9] = button11State;
    }
    int button12State = !digitalRead(12);
    if (button12State != lastButtonState[10]) {
      Joystick.setButton(10, button12State);
      lastButtonState[10] = button12State;
    }
    int button13State = !digitalRead(13);
    if (button13State != lastButtonState[11]) {
      Joystick.setButton(11, button13State);
      lastButtonState[11] = button13State;
    }
    int button14State = !digitalRead(14);
    if (button14State != lastButtonState[12]) {
      Joystick.setButton(12, button14State);
      lastButtonState[12] = button14State;
    }
    int button15State = !digitalRead(15);
    if (button15State != lastButtonState[13]) {
      Joystick.setButton(13, button15State);
      lastButtonState[13] = button15State;
    }
    int button16State = !digitalRead(16);
    if (button16State != lastButtonState[14]) {
      Joystick.setButton(14, button16State);
      lastButtonState[14] = button16State;
    }
    int button17State = !digitalRead(17);
    if (button17State != lastButtonState[15]) {
      Joystick.setButton(15, button17State);
      lastButtonState[15] = button17State;
    }
    int button18State = !digitalRead(18);
    if (button18State != lastButtonState[16]) {
      Joystick.setButton(16, button18State);
      lastButtonState[16] = button18State;
    }
    int button41State = !digitalRead(41);
    if (button41State != lastButtonState[17]) {
      Joystick.setButton(17, button41State);
      lastButtonState[17] = button41State;
    }
    int button42State = !digitalRead(42);
    if (button42State != lastButtonState[18]) {
      Joystick.setButton(18, button42State);
      lastButtonState[18] = button42State;
    }
  }
}
