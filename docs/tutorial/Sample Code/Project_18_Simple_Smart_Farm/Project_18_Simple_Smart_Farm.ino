/*
Keye New RFID Starter Kit 
Project 18
Simple Smart Farm
Edit By Keyes
*/
// Define sensor connection pins
const int soilMoistureSensorPin = A1;
const int photoresistorPin = A2;
const int waterLevelSensorPin = A3;
void setup() {
    // Initialize serial communication
    Serial.begin(9600);
}

void loop() {
    // Read sensor data
    int soilMoistureValue = analogRead(soilMoistureSensorPin);  // Soil moisture data
    int lightValue = analogRead(photoresistorPin);  // Light intensity
    int waterLevelValue = analogRead(waterLevelSensorPin);  // Water level info
    // Print sensor data
    Serial.print("Soil Moisture Value: ");
    Serial.println(soilMoistureValue);
    Serial.print("Light Intensity Value: ");
    Serial.println(lightValue);
    Serial.print("Water Level Value: ");
    Serial.println(waterLevelValue);
    // Wait for a while
    delay(2000);  // Measure once per second
}
