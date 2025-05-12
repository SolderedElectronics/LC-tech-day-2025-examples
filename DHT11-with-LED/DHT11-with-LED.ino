// Include the DHT11 library for interfacing with the sensor.
#include <DHT11.h>

// Create an instance of the DHT11 class.
DHT11 dht11(2);

// What pin the LED is connected to
int ledPin=9;

void setup() {
    // Initialize serial communication to allow debugging and data readout.
    // Using a baud rate of 9600 baud.
    Serial.begin(9600);
}

void loop() {
    // Attempt to read the temperature and humidity values from the DHT11 sensor.
    int temperature = dht11.readTemperature();

    // Check the results of the readings.
    // If the reading is successful, print the temperature and humidity values.
    Serial.print("Temperature: ");
    Serial.println(temperature);

    //Check if temperature is above threshold
    if(temperature>25)
    {
      //If it is, turn on LED
      digitalWrite(ledPin,HIGH);
    }
    else
    {
      digitalWrite(ledPin,LOW);
    }
}