/*
Keye New RFID Starter Kit 
Project 28
Motor fan
Edit By Keyes
*/
const int motorPin = 3; // Define the motor control pin
void setup() {
  pinMode(motorPin, OUTPUT); // Set the motor pin to output mode
}

void loop() {
  // Gradually increase PWM signal
  for (int speed = 0; speed <= 255; speed++) {
    analogWrite(motorPin, speed);
    delay(10); // Delay to observe motor speed change
  }
  // Gradually decrease PWM signal
  for (int speed = 255; speed >= 0; speed--) {
    analogWrite(motorPin, speed);
    delay(10); // Delay to observe motor speed change
  }
}
