/*
Keye New RFID Starter Kit 
Project 25
Ultrasonic Sensor
Edit By Keyes
*/
const int trigPin = 6;  // Define trigger pin number
const int echoPin = 5;  // Define echo pin number
long duration;          // Declare a long integer variable for storing the round-trip time of the ultrasonic pulse
int distance;           // Declare an integer variable for storing the calculated distance

void setup() {
  pinMode(trigPin, OUTPUT); // Set trigPin as output
  pinMode(echoPin, INPUT);  // Set echoPin as input
  Serial.begin(9600);       // Initialize serial communication with a baud rate of 9600
}

void loop() {
  digitalWrite(trigPin, LOW);  // Ensure the trigger pin is low
  delayMicroseconds(2);        // Wait for 2 microseconds
  digitalWrite(trigPin, HIGH); // Send a 10-microsecond pulse
  delayMicroseconds(10);       // Keep the pulse for 10 microseconds
  digitalWrite(trigPin, LOW);  // End the pulse

  duration = pulseIn(echoPin, HIGH); // Read the length of the pulse from the echo pin

  // Calculate distance: sound speed is 0.034 cm per microsecond, divide the round-trip distance by 2
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");  // Print text "Distance: "
  Serial.print(distance);      // Print the measured distance
  Serial.println(" cm");       // Print the unit " cm" and go to the next line

  delay(500);                  // Wait for 0.5 seconds before measuring again
}