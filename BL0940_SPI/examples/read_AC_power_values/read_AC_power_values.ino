#include <Arduino.h>
#include "BL0940.h"

BL0940 bl0940;

void setup() {
  Serial.begin(115200);
  bl0940.begin();
  delay(1000);
}

void loop() {
  float voltage;
  bl0940.getVoltage( &voltage );
  Serial.printf("%d [V]\n", int(voltage) );

  float current;
  bl0940.getCurrent( &current );
  Serial.printf("%.3f [A]\n", current );

  float activePower;
  bl0940.getActivePower( &activePower );
  Serial.printf("%.2f [W]\n", activePower );

  float activeEnergy;
  bl0940.getActiveEnergy( &activeEnergy );
  Serial.printf("%.3f [kWh]\n", activeEnergy );

  float powerFactor;
  bl0940.getPowerFactor( &powerFactor );
  Serial.printf("%.1f [%%]\n", powerFactor );

  float temperature;
  bl0940.getTemperature( &temperature );
  Serial.printf("%.1f [deg C]\n", temperature );

  Serial.println("");
  delay(1000);
}
