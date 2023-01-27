// Fili Fili Project V2 optimized from scratch by Anjum9694
// This code allows wireless radio receiving with ESP8266
// https://github.com/Anjum9694

#include <RCSwitch.h>
#include <SPI.h>
#define LED_BUILTIN 2
#include <Arduino.h>

// Initialize a global RCSwitch instance
RCSwitch driver = RCSwitch();

// Initialize flag variables to track button press
bool blueFlag = false;
bool greenFlag = false;
bool redFlag = false;

// Define the duration for which the flag should stay true
const int blueDelay = 2000;
const int greenDelay = 2000;
const int redDelay = 2000;

// Timer variables to track the elapsed time since the flag was set
unsigned long blueTimer = 0;
unsigned long greenTimer = 0;
unsigned long redTimer = 0;

// Initialize page variable
int page = 1;

// Initialize logic flags
boolean buttonVal = false;
boolean prevVal = false;
boolean wrongVal = false;
boolean prevVal2 = false;

void setup() {
    Serial.begin(9600);
    // Enable the receiver on pin 12 (D6)
    driver.enableReceive(12);
    Serial.println("Fili Fili Project 433MHz receiver has started successfully.");
}

void loop() {
    wirelesssignal();
    switch (page) {
      case 1: {
          if (blueFlag || greenFlag || redFlag) {
            buttonVal = true;
          } else {
            buttonVal = false;
          }
          if (buttonVal == true && buttonVal != prevVal) {
            Serial.write(1);
            page = 2;
          } else {
            Serial.write(0);
          }
          prevVal = buttonVal;
          delay(1000);
          break;
        }
      case 2: {
          if (blueFlag) {
            buttonVal = true;
          } else {
            buttonVal = false;
          }
          if (buttonVal == true && buttonVal != prevVal) {
            Serial.write(1);
            page = 3;
          } else {
            Serial.write(0);
          }
          prevVal = buttonVal;
          delay(200);

          if (greenFlag || redFlag) {
            wrongVal = true;
          } else {
            wrongVal = false;
          }
          if (wrongVal == true && wrongVal != prevVal2) {
            Serial.write(2);
          } else {
            Serial.write(0);
          }
          if (page == 15) {
            page = 1;
          }
          prevVal2 = wrongVal;
          delay(200);
          break;
        }
      case 3: {
          if (blueFlag) {
            buttonVal = true;
          } else {
            buttonVal = false;
          }
          if (buttonVal == true && buttonVal != prevVal) {
            Serial.write(1);
            page = 4;
          } else {
            Serial.write(0);
          }
          prevVal = buttonVal;
          delay(200);

          if (greenFlag || redFlag) {
            wrongVal = true;
          } else {
            wrongVal = false;
          }
          if (wrongVal == true && wrongVal != prevVal2) {
            Serial.write(2);
          } else {
            Serial.write(0);
          }
          prevVal2 = wrongVal;
          delay(200);
          break;
        }
      case 4: {
          if (redFlag) {
            buttonVal = true;
          } else {
            buttonVal = false;
          }
          if (buttonVal == true && buttonVal != prevVal) {
            Serial.write(1);
            page = 5;
          } else {
            Serial.write(0);
          }
          prevVal = buttonVal;
          delay(200);

          if (greenFlag || blueFlag) {
            wrongVal = true;
          } else {
            wrongVal = false;
          }
          if (wrongVal == true && wrongVal != prevVal2) {
            Serial.write(2);
          } else {
            Serial.write(0);
          }
          prevVal2 = wrongVal;
          delay(200);
          break;
        }
      case 5: {
          if (greenFlag) {
            buttonVal = true;
          } else {
            buttonVal = false;
          }
          if (buttonVal == true && buttonVal != prevVal) {
            Serial.write(1);
            page = 6;
          } else {
            Serial.write(0);
          }
          prevVal = buttonVal;
          delay(200);

          if (blueFlag || redFlag) {
            wrongVal = true;
          } else {
            wrongVal = false;
          }
          if (wrongVal == true && wrongVal != prevVal2) {
            Serial.write(2);
          } else {
            Serial.write(0);
          }
          prevVal2 = wrongVal;
          delay(200);
          break;
        }
      case 6: {
          if (redFlag) {
            buttonVal = true;
          } else {
            buttonVal = false;
          }
          if (buttonVal == true && buttonVal != prevVal) {
            Serial.write(1);
            page = 7;
          } else {
            Serial.write(0);
          }
          prevVal = buttonVal;
          delay(200);

          if (blueFlag || greenFlag) {
            wrongVal = true;
          } else {
            wrongVal = false;
          }
          if (wrongVal == true && wrongVal != prevVal2) {
            Serial.write(2);
          } else {
            Serial.write(0);
          }
          prevVal2 = wrongVal;
          delay(200);
          break;
        }
      case 7: {
          if (blueFlag) {
            buttonVal = true;
          } else {
            buttonVal = false;
          }
          if (buttonVal == true && buttonVal != prevVal) {
            Serial.write(1);
            page = 8;
          } else {
            Serial.write(0);
          }
          prevVal = buttonVal;
          delay(200);

          if (greenFlag || redFlag) {
            wrongVal = true;
          } else {
            wrongVal = false;
          }
          if (wrongVal == true && wrongVal != prevVal2) {
            Serial.write(2);
          } else {
            Serial.write(0);
          }
          prevVal2 = wrongVal;
          delay(200);
          break;
        }
      case 8: {
          if (greenFlag) {
            buttonVal = true;
          } else {
            buttonVal = false;
          }
          if (buttonVal == true && buttonVal != prevVal) {
            Serial.write(1);
            page = 9;
          } else {
            Serial.write(0);
          }
          prevVal = buttonVal;
          delay(200);

          if (blueFlag || redFlag) {
            wrongVal = true;
          } else {
            wrongVal = false;
          }
          if (wrongVal == true && wrongVal != prevVal2) {
            Serial.write(2);
          } else {
            Serial.write(0);
          }
          prevVal2 = wrongVal;
          delay(200);
          break;
        }
      case 9: {
          if (redFlag) {
            buttonVal = true;
          } else {
            buttonVal = false;
          }
          if (buttonVal == true && buttonVal != prevVal) {
            Serial.write(1);
            page = 10;
          } else {
            Serial.write(0);
          }
          prevVal = buttonVal;
          delay(200);

          if (blueFlag || greenFlag) {
            wrongVal = true;
          } else {
            wrongVal = false;
          }
          if (wrongVal == true && wrongVal != prevVal2) {
            Serial.write(2);
          } else {
            Serial.write(0);
          }
          prevVal2 = wrongVal;
          delay(200);
          break;
        }
      case 10: {
          if (blueFlag) {
            buttonVal = true;
          } else {
            buttonVal = false;
          }
          if (buttonVal == true && buttonVal != prevVal) {
            Serial.write(1);
            page = 11;
          } else {
            Serial.write(0);
          }
          prevVal = buttonVal;
          delay(200);

          if (greenFlag || redFlag) {
            wrongVal = true;
          } else {
            wrongVal = false;
          }
          if (wrongVal == true && wrongVal != prevVal2) {
            Serial.write(2);
          } else {
            Serial.write(0);
          }
          prevVal2 = wrongVal;
          delay(200);
          break;
        }
      case 11: {
          if (greenFlag) {
            buttonVal = true;
          } else {
            buttonVal = false;
          }
          if (buttonVal == true && buttonVal != prevVal) {
            Serial.write(1);
            page = 12;
          } else {
            Serial.write(0);
          }
          prevVal = buttonVal;
          delay(200);

          if (blueFlag || redFlag) {
            wrongVal = true;
          } else {
            wrongVal = false;
          }
          if (wrongVal == true && wrongVal != prevVal2) {
            Serial.write(2);
          } else {
            Serial.write(0);
          }
          prevVal2 = wrongVal;
          delay(200);
          break;
        }
      case 12: {
          if (redFlag) {
            buttonVal = true;
          } else {
            buttonVal = false;
          }
          if (buttonVal == true && buttonVal != prevVal) {
            Serial.write(1);
            page = 13;
          } else {
            Serial.write(0);
          }
          prevVal = buttonVal;
          delay(200);

          if (blueFlag || greenFlag) {
            wrongVal = true;
          } else {
            wrongVal = false;
          }
          if (wrongVal == true && wrongVal != prevVal2) {
            Serial.write(2);
          } else {
            Serial.write(0);
          }
          prevVal2 = wrongVal;
          delay(200);
          break;
        }
      case 13: {
          if (blueFlag) {
            buttonVal = true;
          } else {
            buttonVal = false;
          }
          if (buttonVal == true && buttonVal != prevVal) {
            Serial.write(1);
            page = 14;
          } else {
            Serial.write(0);
          }
          prevVal = buttonVal;
          delay(200);

          if (greenFlag || redFlag) {
            wrongVal = true;
          } else {
            wrongVal = false;
          }
          if (wrongVal == true && wrongVal != prevVal2) {
            Serial.write(2);
          } else {
            Serial.write(0);
          }
          prevVal2 = wrongVal;
          delay(200);
          break;
        }
      case 14: {
          if (greenFlag) {
            buttonVal = true;
          } else {
            buttonVal = false;
          }
          if (buttonVal == true && buttonVal != prevVal) {
            Serial.write(1);
            page = 15;
          } else {
            Serial.write(0);
          }
          prevVal = buttonVal;
          delay(200);

          if (blueFlag || redFlag) {
            wrongVal = true;
          } else {
            wrongVal = false;
          }
          if (wrongVal == true && wrongVal != prevVal2) {
            Serial.write(2);
          } else {
            Serial.write(0);
          }
          prevVal2 = wrongVal;
          delay(200);
          break;
        }
      case 15: {
          if (redFlag) {
            buttonVal = true;
          } else {
            buttonVal = false;
          }
          if (buttonVal == true && buttonVal != prevVal) {
            Serial.write(1);
            page = 1;
          } else {
            Serial.write(0);
          }
          prevVal = buttonVal;
          delay(200);

          if (blueFlag || greenFlag) {
            wrongVal = true;
          } else {
            wrongVal = false;
          }
          if (wrongVal == true && wrongVal != prevVal2) {
            Serial.write(2);
          } else {
            Serial.write(0);
          }
          prevVal2 = wrongVal;
          delay(200);
          break;
        }
    }
}


void wirelesssignal() {
    if (driver.available()) {
        // Check if there is a signal available
        unsigned long code = driver.getReceivedValue();
        if (code != 0) {
            if (code == 0xFFFFF1) {
                // Check the code if it's the code for blue button
                Serial.println("Blue button has been pressed.");
                blueFlag = true;
                blueTimer = millis();
                digitalWrite(LED_BUILTIN, HIGH); // turn on LED
                delay(500); // wait for 0.5 seconds
                digitalWrite(LED_BUILTIN, LOW); // turn off LED
            }
            if (code == 0xFFFFF2) {
                // Check the code if it's the code for green button
                Serial.println("Green button has been pressed.");
                greenFlag = true;
                greenTimer = millis();
                digitalWrite(LED_BUILTIN, HIGH); // turn on LED
                delay(500); // wait for 0.5 seconds
                digitalWrite(LED_BUILTIN, LOW); // turn off LED
            }
            if (code == 0xFFFFF3) {
                // Check the code if it's the code for red button
                Serial.println("Red button has been pressed.");
                redFlag = true;
                redTimer = millis();
                digitalWrite(LED_BUILTIN, HIGH); // turn on LED
                delay(500); // wait for 0.5 seconds
                digitalWrite(LED_BUILTIN, LOW); // turn off LED
            }
        }
        // Reset the available status to prepare for next transmission
        driver.resetAvailable();
    }
    if (blueFlag && (millis() - blueTimer > blueDelay)) {
        // Debounce timer for blue button
        blueFlag = false;
    }
    if (greenFlag && (millis() - greenTimer > greenDelay)) {
        // Debounce timer for green button
        greenFlag = false;
    }
    if (redFlag && (millis() - redTimer > redDelay)) { // Red debounce timer reset
        // Debounce timer for red button
        redFlag = false;
  }
}
