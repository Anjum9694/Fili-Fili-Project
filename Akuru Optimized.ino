//Audio module interface library
#include <SOMO_II.h>

// Capacitive Sensing
#include <CapacitiveSensor.h>

int threshold = 500;  // Adjust this value as needed. This is the treshold for determining how much of the sensor reading is considered a touch or not.

const int numSensors = 24;
const int sensors[numSensors] = {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 34, 35};
CapacitiveSensor sensorsArr[numSensors] = {
  CapacitiveSensor(13, 12), // Haa
  CapacitiveSensor(13, 11), // Shaviyani
  CapacitiveSensor(13, 10), // Noonu
  CapacitiveSensor(13, 9),  // Raa
  CapacitiveSensor(13, 8),  // Baa
  CapacitiveSensor(13, 7),  // Lhaviyani
  CapacitiveSensor(13, 6),  // Kaafu 
  CapacitiveSensor(13, 5),  // Alifu
  CapacitiveSensor(13, 4),  // Vaavu
  CapacitiveSensor(13, 3),  // Meemu
  CapacitiveSensor(13, 2),  // Faafu
  CapacitiveSensor(13, 22), // Dhaalu
  CapacitiveSensor(13, 23), // Thaa
  CapacitiveSensor(13, 24), // Laamu
  CapacitiveSensor(13, 25), // Gaafu
  CapacitiveSensor(13, 26), // Gnaviyani
  CapacitiveSensor(13, 27), // Seenu
  CapacitiveSensor(13, 28), // Daviyani
  CapacitiveSensor(13, 29), // Zaviyani
  CapacitiveSensor(13, 30), // Taviyani
  CapacitiveSensor(13, 31), // Yaa
  CapacitiveSensor(13, 32), // Paviyani
  CapacitiveSensor(13, 34), // Javiyani
  CapacitiveSensor(13, 35)  // Chaviyani
};



SOMO_II mp3 = SOMO_II(Serial1);

void setup() {
  Serial1.begin(SOMO_BAUD);
  mp3.feedback(true);
  Serial.begin(9600);
}

void loop() {
  // code to handle the values and play sound using the mp3 object
  for (int i = 0; i < numSensors; i++) {
    long sensorValue = sensorsArr[i].capacitiveSensor(10);
    if (sensorValue > threshold) {
      // Play the appropriate audio file for this sensor
      mp3.playTrack(i + 1); // Rename the mp3 files from haa to chaviyani as 1.mp3, 2.mp3.. until 24.mp3
      delay(200);  // the delay for sound to finish playing
    }
  }
}