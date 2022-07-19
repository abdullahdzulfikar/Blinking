#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("ON 3 detik");
  delay(3000);
  Serial.println("OFF 5 detik");
  delay(5000);
}