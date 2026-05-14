/*
Keye New RFID Starter Kit 
Project 29
Smart Fan
Edit By Keyes
*/
#include <IRremote.h> // Include the infrared remote library
int RECV_PIN = 11;    // Pin connected to the infrared receiver
int MOTOR_PIN = 5;    // Motor control pin (PWM)
int motorSpeed = 0;   // Motor speed, range 0-255
IRrecv irrecv(RECV_PIN);   // Create an infrared receiver object
decode_results results;    // Structure to store decoding results
void setup()
{
  Serial.begin(9600);     // Initialize serial communication at 9600 baud rate
  irrecv.enableIRIn();    // Enable infrared reception
  pinMode(MOTOR_PIN, OUTPUT); // Set motor pin as output
  analogWrite(MOTOR_PIN, motorSpeed); // Initial speed is 0, motor is off
}
void loop()
{
  if (irrecv.decode(&results)) // If an infrared signal is received
  {
    unsigned long value = results.value;
    Serial.print("Received infrared value: 0x");
    Serial.println(value, HEX); // Print the infrared value in hexadecimal to the serial monitor
    // Perform actions based on the received infrared value
    if (value == 0xFF02FD) // Assume the "OK" button is encoded as 0xFF02FD
    {
      // Control fan power
      if (motorSpeed == 0)
      {
        motorSpeed = 128; // Set fan to medium speed
        Serial.println("Fan is on, medium speed");
      }
      else
      {
        motorSpeed = 0;
        Serial.println("Fan is off");
      }
      analogWrite(MOTOR_PIN, motorSpeed);
    }
    else if (value == 0xFF629D) // Assume the "UP" button is encoded as 0xFF629D
    {
      // Increase fan speed
      motorSpeed += 50;
      if (motorSpeed > 255) motorSpeed = 255; // Limit to maximum value
      analogWrite(MOTOR_PIN, motorSpeed);
      Serial.print("Fan speed increased, current speed: ");
      Serial.println(motorSpeed);
    }
    else if (value == 0xFFA857) // Assume the "DOWN" button is encoded as 0xFFA857
    {
      // Decrease fan speed
      motorSpeed -= 50;
      if (motorSpeed < 0) motorSpeed = 0; // Limit to minimum value
      analogWrite(MOTOR_PIN, motorSpeed);
      Serial.print("Fan speed decreased, current speed: ");
      Serial.println(motorSpeed);
    }
    else
    {
      Serial.println("Undefined button");
    }

    irrecv.resume(); // Receive the next infrared signal
  }
}