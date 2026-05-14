/*
Keye New RFID Starter Kit 
Project 40
RFID Smart Home 
Edit By Keyes
*/
#include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>

// Pin definitions
#define SS_PIN 10
#define RST_PIN 9
#define SERVO_PIN 5
#define LED_PIN 2

MFRC522 mfrc522(SS_PIN, RST_PIN); // Create an MFRC522 instance
Servo myServo; // Create a Servo instance

void setup() {
  Serial.begin(9600); // Initialize serial communication
  SPI.begin(); // Initialize SPI bus
  mfrc522.PCD_Init(); // Initialize the MFRC522
  myServo.attach(SERVO_PIN); // Attach the servo to pin D9

  pinMode(LED_PIN, OUTPUT); // Set LED pin as output
  myServo.write(0); // Set initial servo position to 0 degrees
  digitalWrite(LED_PIN, LOW); // Set initial LED state to off
  Serial.println("Waiting for RFID card...");
}

void loop() {
  // Check if a new RFID card is present
  if (!mfrc522.PICC_IsNewCardPresent() || !mfrc522.PICC_ReadCardSerial()) {
    return;
  }

  // Get the UID of the card
  Serial.print(" UID tag :");
  String content = "";
  for (byte i = 0; i < mfrc522.uid.size; i++) {
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
    content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
    content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  content.toUpperCase();

  // Check the UID and perform actions
  if (content.substring(1) == "75 83 7D 75") { // Replace with your actual card UID here
    Serial.println("Authorized access");
    digitalWrite(LED_PIN, HIGH); // Turn on the LED
    myServo.write(180); // Rotate the servo to 180 degrees
    delay(2000); // Hold for 2 seconds
    myServo.write(0); // Return the servo to 0 degrees

    digitalWrite(LED_PIN, LOW); // Turn off the LED
  } else {
    Serial.println("Access denied");
    digitalWrite(LED_PIN, LOW);
  }

  delay(1000);
}
