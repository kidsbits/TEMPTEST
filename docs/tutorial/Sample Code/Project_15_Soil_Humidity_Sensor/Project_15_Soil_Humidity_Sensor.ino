/*
Keye New RFID Starter Kit 
Project 15
Soil humidity sensor
Edit By Keyes
*/
// Define the analog pin of the sensor
const int soilPin = A0;
void setup() {
  // Initialize the serial port and set baud rate to 9600
  Serial.begin(9600);
}
void loop() {
  // Read the soil humidity sensor analog value
  int soilValue = analogRead(soilPin);
  // Map analog value to range of 0-100, which represents relative humidity
  int soilHumidity = map(soilValue, 0, 1023, 0, 100); 
  // Print the humidity value on the serial monitor
  Serial.print("Soil Humidity: ");
  Serial.print(soilHumidity);
  Serial.println("%");
  // Delay 1s
  delay(1000);
}
