#include <DHT.h>
#include <DHT_U.h>

#include <DHT.h>
#include <LiquidCrystal.h>

#define DHTPIN 8        // Pin number for DHT11 sensor data line
#define TRIGGER_PIN 13  // Pin number for HC-SR04 sensor trigger
#define ECHO_PIN 12     // Pin number for HC-SR04 sensor echo
#define PIR_PIN 9       // Pin number for PIR sensor

DHT dht(DHTPIN, DHT11);
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);



void setup() {
  lcd.begin(16, 2);  // Initialize the LCD
  lcd.print("Hydroponic Farm");  // Display startup message
  lcd.setCursor(0, 1);
  lcd.print("Monitoring");
  delay(2000);
  lcd.clear();
}

void loop() {
  float temperature, humidity;
  int waterLevel;
  int motionDetected;

  // Read temperature and humidity from DHT11 sensor
  temperature = dht.readTemperature();
  humidity = dht.readHumidity();

  // Measure water level using HC-SR04 sensor
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);
  float duration = pulseIn(ECHO_PIN, HIGH);
  float distance = duration * 0.034 / 2;
  waterLevel = distance;

  // Read PIR sensor for motion detection
  motionDetected = digitalRead(PIR_PIN);

  // Display sensor data on LCD
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print("C  ");
  lcd.print("Humidity: ");
  lcd.print(humidity);
  lcd.print("%");

  lcd.setCursor(0, 1);
  lcd.print("Water Level: ");
  lcd.print(waterLevel);
  lcd.print("cm ");

  if (motionDetected == HIGH) {
    lcd.setCursor(0, 1);
    lcd.print("Motion Detected!");
    // Add code here to perform desired action when motion is detected
  } else {
    // Add code here for when no motion is detected
  }

  // Add code here to perform actions based on temperature, humidity, and water level

  delay(1000);  // Adjust delay time as needed
}