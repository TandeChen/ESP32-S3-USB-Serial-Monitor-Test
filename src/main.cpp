#include <Arduino.h>

#define BATTERY_ADC_PIN 17
#define ADC_REFERENCE_VOLTAGE 3.3  // ESP32-S3 voltage reference
#define ADC_RESOLUTION 4096.0      // 12-bit ADC 
#define VOLTAGE_DIVIDER_RATIO 2.0  // Resistor division

void setup() {
    Serial.begin(115200);
    analogReadResolution(12); // Set ADC as 12-bit
}

void loop() {
    int adcRaw = analogRead(BATTERY_ADC_PIN); // Read ADC
    float voltage = (adcRaw / ADC_RESOLUTION) * ADC_REFERENCE_VOLTAGE * VOLTAGE_DIVIDER_RATIO;
    Serial.printf("Battery Voltage: %.2f V\n", voltage);
    delay(1000); // Every Second Refresh
}
