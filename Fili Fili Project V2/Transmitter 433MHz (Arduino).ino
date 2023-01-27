// Fili Fili Project V2 optimized from scratch by Anjum9694
// This code allows wireless radio transmitting with Arduino UNO
// https://github.com/Anjum9694

#include <RCSwitch.h>

const int buttonPin1 = 2; // Blue Button Pin
const int buttonPin2 = 3; // Green Button Pin
const int buttonPin3 = 4; // Red Button Pin

unsigned long code1 = 0xFFFFF1; // Code for Blue Button
unsigned long code2 = 0xFFFFF2; // Code for Green Button
unsigned long code3 = 0xFFFFF3; // Code for Red Button

RCSwitch transmitter = RCSwitch();

void setup()
{
  Serial.begin(9600);
  pinMode(buttonPin1, INPUT); // Set button 1 as an input with a pull-up resistor
  pinMode(buttonPin2, INPUT); // Set button 2 as an input with a pull-up resistor
  pinMode(buttonPin3, INPUT); // Set button 3 as an input with a pull-up resistor
  transmitter.enableTransmit(12); // Connect 433MHz transmitter to pin 12
}

void loop()
{
  if (digitalRead(buttonPin1) == HIGH) { // If Blue Button is pressed
      transmitter.send(code1, 24);
      Serial.println("Blue button has been pressed.");
      delay(100); // Delay to debounce the button press
  }
  if (digitalRead(buttonPin2) == HIGH) { // If Green Button is pressed
      transmitter.send(code2, 24);
      Serial.println("Green button has been pressed.");
      delay(100); // Delay to debounce the button press
  }
  if (digitalRead(buttonPin3) == HIGH) { // If Red Button is pressed
      transmitter.send(code3, 24);
      Serial.println("Red button has been pressed.");
      delay(100); // Delay to debounce the button press
  }
}
