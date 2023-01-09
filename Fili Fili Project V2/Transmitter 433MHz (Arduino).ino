// Fili Fili Project V2 optimized from scratch by Anjum9694
// This code allows wireless radio transmitting with Arduino UNO
// https://github.com/Anjum9694

#include <RH_ASK.h> // Connect 433MHz transmitter to pin 12
#include <SPI.h> // Not actually used but needed to compile

const int buttonPin1 = 2; // Button 1 is connected to digital pin 2
const int buttonPin2 = 3; // Button 2 is connected to digital pin 3
const int buttonPin3 = 4; // Button 3 is connected to digital pin 4

unsigned long code1 = 0xFFFFF1; // Code for Blue Button
unsigned long code2 = 0xFFFFF2; // Code for Green Button
unsigned long code3 = 0xFFFFF3; // Code for Red Button

RH_ASK driver;

void setup()
{
  Serial.begin(9600);
  pinMode(buttonPin1, INPUT); // Set button 1 as an input with a pull-up resistor
  pinMode(buttonPin2, INPUT); // Set button 2 as an input with a pull-up resistor
  pinMode(buttonPin3, INPUT); // Set button 3 as an input with a pull-up resistor
  if (!driver.init())
      Serial.println("RF Transmitter driver failed to initialize!");
}

void loop()
{
  if (digitalRead(buttonPin1) == HIGH) { // If Blue Button is pressed
      driver.send((uint8_t*)&code1, sizeof(code1));
      driver.waitPacketSent();
      Serial.println("Blue button has been pressed.");
      delay(100); // Delay to debounce the button press
  }
  if (digitalRead(buttonPin2) == HIGH) { // If Green Button is pressed
      driver.send((uint8_t*)&code2, sizeof(code2));
      driver.waitPacketSent();
      Serial.println("Green button has been pressed.");
      delay(100); // Delay to debounce the button press
  }
  if (digitalRead(buttonPin3) == HIGH) { // If Red Button is pressed
      driver.send((uint8_t*)&code3, sizeof(code3));
      driver.waitPacketSent();
      Serial.println("Red button has been pressed.");
      delay(100); // Delay to debounce the button press
  }
}
