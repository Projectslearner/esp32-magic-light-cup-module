# ESP32 Magic Light Cup Module

## Project Overview
The ESP32 Magic Light Cup module project demonstrates how to interface a digital light sensor with an ESP32 microcontroller. The Magic Light Cup module typically includes a light-dependent resistor (LDR) or a similar sensor that detects ambient light levels. This project reads the sensor's digital output to determine whether light is detected or not.

## Components Needed
- ESP32 Microcontroller
- Magic Light Cup Module (with built-in light sensor)
- Jumper Wires
- Breadboard
- Serial Monitor (for debugging)

## Block Diagram
*(If available, provide a visual representation of your circuit setup)*

## Circuit Setup
1. **Connecting Magic Light Cup Module to ESP32:**
   - **Sensor Pin:** Connects to a digital GPIO pin on the ESP32 (specified as pin 2 in your code).
   - **VCC and GND:** Connect to the appropriate power (3.3V or 5V) and ground pins.

## Instructions
1. **Setup:**
   - Initialize serial communication in the `setup()` function with `Serial.begin(9600)` for debugging purposes.
   - Configure the sensor pin (`sensorPin`) as an input using `pinMode(sensorPin, INPUT)`.

2. **Operation:**
   - In the `loop()` function:
     - Read the digital state of the Magic Light Cup module using `digitalRead(sensorPin)`.
     - Print the state to the Serial Monitor, indicating whether light is detected or not based on the sensor value (`HIGH` or `LOW`).
     - Adjust the `delay(1000)` to control how often the sensor value is read (every 1 second in your current setup).

3. **Considerations:**
   - **Sensor Sensitivity:** Ensure the sensor is placed in an environment where light changes can be easily detected.
   - **Power Supply:** Ensure stable power supply to the ESP32 and the Magic Light Cup module for reliable operation.
   - **Serial Monitoring:** Utilize the Serial Monitor to observe sensor readings and debug any issues.

## Applications
- **Light Sensing:** Detect ambient light levels for automation and control systems.
- **Security Systems:** Integrate with security alarms that activate based on light changes.
- **Energy Efficiency:** Monitor natural light levels for energy-efficient lighting systems.

## Notes
- **Digital Output:** The Magic Light Cup module provides a simple digital signal (`HIGH` or `LOW`) based on light detection.
- **Debugging:** Use the Serial Monitor to verify correct operation and troubleshoot any connectivity or sensor issues.

---

## Useful Links
🌐 [ProjectsLearner - ESP32 Magic Light Cup Module](https://projectslearner.com/learn/esp32-magic-light-cup-module)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner