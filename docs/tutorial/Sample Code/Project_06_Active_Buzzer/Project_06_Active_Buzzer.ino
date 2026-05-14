/*
Keye New RFID Starter Kit 
Project 6
Active buzzer
Edit By Keyes
*/
// Define the digital port to which the buzzer is connected
const int BUZZER_PIN = 8;

void setup() {
  // Set the buzzer port to output mode
  pinMode(BUZZER_PIN, OUTPUT);
}
void loop() {
  // Make the buzzer sound
  digitalWrite(BUZZER_PIN, HIGH);
  delay(1000); // Sound lasts 1s
  // Stop sounding
  digitalWrite(BUZZER_PIN, LOW);
  delay(1000); // Stop sounding for 1s
}
