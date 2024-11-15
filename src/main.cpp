#include <Arduino.h>

void blinkLed(int times);
int ledPin = 13;
int buttonPin = 2; 
int buttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); 
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {

buttonState = digitalRead(buttonPin);

if (buttonState == LOW) { 
  digitalWrite(ledPin, HIGH);
  Serial.println("Button pressed, LED ON");

} else {
  digitalWrite(ledPin, LOW);
  Serial.println("Button not pressed, LED OFF");

}

delay(1000); // Debounce delay
}
