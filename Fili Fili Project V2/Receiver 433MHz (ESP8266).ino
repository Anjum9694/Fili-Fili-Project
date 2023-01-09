// Fili Fili Project V2 optimized from scratch by Anjum9694
// This code allows wireless radio receiving with ESP8266
// https://github.com/Anjum9694

#include <RH_ASK.h> // Include the Radiohead library
#include <SPI.h> // Not actually used but needed to compile

// Declare a global instance of the RH_ASK class. By default this uses pin D6 (use SD0 if it doesn't work) on ESP8266.
RH_ASK driver;


// Define a flag variable to track whether the specific code has been received
bool blueFlag = false;
bool greenFlag = false;
bool redFlag = false;

// Define the duration for which the flag should stay true (in milliseconds) so it acts like a push button
const int blueDelay = 2000;
const int greenDelay = 2000;
const int redDelay = 2000;

// Define a timer variable to track the elapsed time since the flag was set to true
unsigned long blueTimer = 0;
unsigned long greenTimer = 0;
unsigned long redTimer = 0;

// Start at page 1
int page = 1;

// Initialize all logic flags
boolean buttonVal = false;
boolean prevVal = false;
boolean wrongVal = false;
boolean prevVal2 = false;

void setup() {
  Serial.begin(9600);   // Debugging only
  if (!driver.init())  // Initialize the Radiohead library
    Serial.println("init failed");
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
  uint8_t buf[RH_ASK_MAX_MESSAGE_LEN];
  uint8_t buflen = sizeof(buf);
  if (driver.recv(buf, &buflen)) { // Check if there is a message available
    unsigned long code = 0;
    memcpy(&code, buf, sizeof(code)); // Copy the received message into the code variable

    if (code == 0xFFFFF1) { // Blue code
      Serial.println("Blue button has been pressed.");
      blueFlag = true;
      blueTimer = millis();
    } else if (code == 0xFFFFF2) { // Green code
      Serial.println("Green button has been pressed.");
      greenFlag = true;
      greenTimer = millis();
    } else if (code == 0xFFFFF3) { // Red code
      Serial.println("Red button has been pressed.");
      redFlag = true;
      redTimer = millis();
    }
  }
  if (blueFlag && (millis() - blueTimer > blueDelay)) { // Blue debounce timer reset
    // Set the flag to false
    blueFlag = false;
  }
  if (greenFlag && (millis() - greenTimer > greenDelay)) { // Green debounce timer reset
    greenFlag = false;
  }
  if (redFlag && (millis() - redTimer > redDelay)) { // Red debounce timer reset
    // Set the flag to false
    redFlag = false;
  }
}
