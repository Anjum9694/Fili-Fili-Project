// Fili Fili Project V2 optimized from scratch by Anjum9694
// This code allows wireless infrared transmitting with Arduino UNO
// https://github.com/Anjum9694

#include <IRremote.h> // Include the IRremote library

const int buttonPin1 = 2; // Button 1 is connected to digital pin 2
const int buttonPin2 = 3; // Button 2 is connected to digital pin 3
const int buttonPin3 = 4; // Button 3 is connected to digital pin 4

const int irPin = 9; // IR LED is connected to digital pin 9

IRsend irsend(irPin); // Create an instance of the IRsend class

unsigned long irCode1 = 0xFFFFF1; // IR code for Blue Button
unsigned long irCode2 = 0xFFFFF2; // IR code for Green Button
unsigned long irCode3 = 0xFFFFF3; // IR code for Red Button

void setup() {
  Serial.begin(9600);  
  pinMode(buttonPin1, INPUT); // Set button 1 as an input with a pull-up resistor
  pinMode(buttonPin2, INPUT); // Set button 2 as an input with a pull-up resistor
  pinMode(buttonPin3, INPUT); // Set button 3 as an input with a pull-up resistor
  pinMode(irPin, OUTPUT); // Set the IR LED as an output
}

void loop() {
  if (digitalRead(buttonPin1) == HIGH) { // If Blue Button is pressed
    irsend.sendNEC(irCode1, 32); // Send the IR code for Blue Button
    Serial.print("Blue button has been pressed.");
    delay(100); // Delay to debounce the button press
  }
  if (digitalRead(buttonPin2) == HIGH) { // If Green Button is pressed
    irsend.sendNEC(irCode2, 32); // Send the IR code for Green Button
    Serial.print("Green button has been pressed.");
    delay(100); // Delay to debounce the button press
  }
  if (digitalRead(buttonPin3) == HIGH) { // If Red Button is pressed
    irsend.sendNEC(irCode3, 32); // Send the IR code for Red Button
    Serial.print("Red button has been pressed.");
    delay(100); // Delay to debounce the button press
  }
}
