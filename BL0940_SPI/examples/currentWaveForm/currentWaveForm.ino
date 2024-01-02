#include <Arduino.h>
#include "BL0940.h"

BL0940 bl0940;

void setup() {
  Serial.begin(250000);
  bl0940.begin();
}

float currentWaveform=0.0;

void loop() {
  bl0940.getCurrentWaveform(&currentWaveform);
  Serial.println(currentWaveform, 3);
  delayMicroseconds(1130);
}
