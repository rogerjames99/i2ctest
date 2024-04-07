#include <Arduino.h>
#include <Wire.h>

void setup()
{

while (!Serial); // Wait for serial to be ready

Serial.printf("Serial is ready!\n");

Wire.begin();
}


void loop()
{
    Serial.printf("Looking for device 0x3c\n");

    Wire.beginTransmission(0x3c);
    if (0 == Wire.endTransmission())
        Serial.printf("Device 0x3c found\n");
    else
        Serial.printf("Device 0x3c not found\n");

    delay(5000); // wait 5 seconds for next scan
}
