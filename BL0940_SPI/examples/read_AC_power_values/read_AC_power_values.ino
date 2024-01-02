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
  Serial.printf("%.1f [V]\n", voltage );

  float current;
  bl0940.getCurrent( &current );
  Serial.printf("%.3f [A]\n", current );

  float activePower;
  bl0940.getActivePower( &activePower );
  Serial.printf("%.1f [W]\n", activePower );
  Serial.println("");
  delay(1000);

}
