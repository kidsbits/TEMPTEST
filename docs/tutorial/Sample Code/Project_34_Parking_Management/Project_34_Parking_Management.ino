/*
Keye New RFID Starter Kit 
Project 34
Parking Management 
Edit By Keyes
*/
#include <Servo.h>
#include <LiquidCrystal.h>
const int trigPin = 6;
const int echoPin = 9;
const int servoPin = 10;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
Servo myServo;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  myServo.attach(servoPin);
  lcd.begin(16, 2);
}
void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;
  if (distance < 10) {
    myServo.write(90);
    lcd.setCursor(0, 0);
    lcd.print("Parking Space");
    lcd.setCursor(0, 1);
    lcd.print("Occupied");
  } else {
    myServo.write(0);
    lcd.setCursor(0, 0);
    lcd.print("Parking Space");
    lcd.setCursor(0, 1);
    lcd.print("Available");
  }
  delay(500);
  lcd.clear();
}
