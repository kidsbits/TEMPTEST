/*  
Keye New RFID Starter Kit  
Project 26  
Smart Bin  
Edited By Keyes  
*/  
#include <Servo.h>  
const int trigPin = 6;  // Ultrasonic sensor Trig pin  
const int echoPin = 5;  // Ultrasonic sensor Echo pin  
const int servoPin = 10;  // Servo motor pin  
Servo myservo;  // Create a servo object  
void setup() {  
  pinMode(trigPin, OUTPUT);  // Set Trig pin as output  
  pinMode(echoPin, INPUT);   // Set Echo pin as input  
  myservo.attach(servoPin);  // Attach servo motor to pin 10  
  myservo.write(0);          // Initialize servo to 0 degrees  
  Serial.begin(9600);        // Initialize serial communication with a baud rate of 9600  
}  
void loop() {  
  long duration, distance;  
  // Send a 10-microsecond high pulse to trigger the ultrasonic sensor  
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2);  
  digitalWrite(trigPin, HIGH);  
  delayMicroseconds(10);  
  digitalWrite(trigPin, LOW);  
  // Read the high pulse duration from the Echo pin  
  duration = pulseIn(echoPin, HIGH);  
  // Calculate distance (in centimeters)  
  distance = duration * 0.034 / 2;  
  // Print the distance value to the serial monitor  
  Serial.print("Distance: ");  
  Serial.print(distance);  
  Serial.println(" cm");  
  if (distance < 20) {  // If the distance is less than 20 cm, open the lid  
    myservo.write(180);  
    delay(3000);       // Keep it open for 3 seconds  
  } else {              // If the distance is greater than 20 cm, close the lid  
    myservo.write(0);  
  }  
  delay(100);  // Delay for 100 milliseconds  
}