/*
Keye New RFID Starter Kit 
Project 30
infrared remote control Smart Home 
Edit By Keyes
*/
#include <IRremote.h>
#include <Stepper.h>
#define IR_RECEIVE_PIN 2
#define RELAY_PIN 3
#define STEPS_PER_REV 2048
IRrecv irrecv(IR_RECEIVE_PIN);
decode_results results;
Stepper stepper(STEPS_PER_REV, 8, 10, 9, 11);
void setup() {
  irrecv.enableIRIn(); // initialize ir receiver
  pinMode(RELAY_PIN, OUTPUT); // set relay pin to output
  stepper.setSpeed(10); // set the stepper motor speed
}

void loop() {
  if (irrecv.decode(&results)) {
    switch (results.value) {
      case 0xFF6897: // light button
        digitalWrite(RELAY_PIN, !digitalRead(RELAY_PIN)); // change the relay state
        break;
      case 0xFF9867: // open curtain button
        stepper.step(STEPS_PER_REV); // stepper motor rotates to open the curtain
        break;  
      case 0xFFB04F: // close curtain button
        stepper.step(-STEPS_PER_REV); // stepper motor reverses to close the curtain
        break;
    }
    irrecv.resume(); // receive next ir receiver
  }
}
