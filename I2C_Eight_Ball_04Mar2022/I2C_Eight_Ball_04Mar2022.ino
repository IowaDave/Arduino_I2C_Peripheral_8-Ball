/*
 * I2C Eight Ball
 * Arduino acts as an I2C peripheral.
 * Receive random byte 0..19.
 * Return a string of characters.
 * If byte >19, return an error string.
 */

#include <Wire.h>
#include "EightBall.h"

byte x; // value to be received from controller

void setup() {
  Wire.begin(8);                // join I2C bus with address #8
  Wire.onReceive(receiveEvent); // register event
  Wire.onRequest(requestEvent); // register event
//  Serial.begin(9600);           // start serial for output
}

void loop() {
  delay(1);
}

// function that executes whenever data is received from master
// this function is registered as an event, see setup()
void receiveEvent(int howMany) {
  while (1 < Wire.available()) { 
    // loop through all but the final
    // however, we're getting only 1
    // so I expect this block to be skipped
    x = Wire.read(); // receive byte as a byte
//    Serial.print(c);         // print the character
  }
  x = Wire.read();    // receive byte as an byte
  // actually, we ignore the value.
  // Any byte received simply triggers a response.
  // Calculate random x,  0 <= x <= 19, from elapsed time
  x = millis() % 20;
  // fetch the corresponding answer
  if (x > 19) x = 20; // x should be 0..19, else send error response
  // fetch the answer into the I2C output buffer
  strcpy_P(outBuffer, (char *)pgm_read_word(&(string_table[x])));
}

// function that executes whenever data is requested by master
// this function is registered as an event, see setup()
void requestEvent() {
  Wire.write(outBuffer); // respond with message string
  // as expected by controller
}
