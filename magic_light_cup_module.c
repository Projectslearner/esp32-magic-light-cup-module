/*
    Project name : ESP32 Magic light cup module
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-magic-light-cup-module
*/

const int sensorPin = 2;  // Digital pin connected to the Magic Light Cup module

void setup() {
  Serial.begin(9600);  // Initialize serial communication for debugging
  pinMode(sensorPin, INPUT);  // Set the pin as input for sensor reading
}

void loop() {
  // Read the state of the Magic Light Cup module
  int sensorValue = digitalRead(sensorPin);

  // Print the state to the Serial Monitor
  Serial.print("Magic Light Cup State: ");
  Serial.println(sensorValue);

  // Check if light is detected and print the result
  if (sensorValue == HIGH) {
    Serial.println("Light Detected");
  } else {
    Serial.println("No Light Detected");
  }

  delay(1000);  // Add a small delay to avoid spamming the Serial Monitor
}
