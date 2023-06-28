# SmartHydroponicFarmingUsingAurduino
Design and Implementation Of Hydroponics Farming Using IOT
# Project Description:
This project demonstrates a hydroponics farming system implemented using an Arduino board along with the DHT11 temperature and humidity sensor, PIR motion sensor, and HC-SR04 ultrasonic distance sensor. Hydroponics is a method of growing plants without soil, where the plants receive nutrients through a nutrient-rich water solution. The Arduino board and sensors are used to monitor environmental conditions and automate certain aspects of the hydroponic system.

# Components Used:
Arduino board (e.g., Arduino Uno)
DHT11 temperature and humidity sensor
PIR motion sensor
HC-SR04 ultrasonic distance sensor

# Functionality:
Functionality:
The project utilizes the sensors to perform the following tasks:

Temperature and Humidity Monitoring: The DHT11 sensor measures the temperature and humidity levels in the hydroponic system. The data from the sensor is read by the Arduino board, and it can be displayed on an LCD screen or transmitted to a remote server for monitoring.

Motion Detection: The PIR motion sensor detects the presence of people or animals in the vicinity of the hydroponic system. When motion is detected, the Arduino board can trigger an alarm, send a notification, or activate/deactivate specific components of the system.

Water Level Monitoring: The HC-SR04 ultrasonic distance sensor is used to measure the water level in the hydroponic system. By calculating the distance between the sensor and the water surface, the Arduino board can determine the water level and trigger actions accordingly, such as activating a water pump to refill the reservoir.

# Installation and Setup:
Clone or download the project repository from GitHub.
Connect the Arduino board to your computer via USB.
Connect the DHT11 temperature and humidity sensor, PIR motion sensor, and HC-SR04 ultrasonic distance sensor to the appropriate pins on the Arduino board.
Install the necessary libraries for the sensors if not already installed (e.g., Adafruit DHT library for DHT11 sensor).
Open the Arduino IDE or compatible code editor and upload the provided code to the Arduino board.
Monitor the serial output or any connected displays to view the sensor readings and system actions.

# Additional Customization:
Feel free to customize the code and expand the project according to your specific requirements. You can add more sensors, implement advanced automation features, or integrate the system with other devices or platforms.

# Resources:
Arduino Website
Adafruit DHT Library
HC-SR04 Ultrasonic Library
