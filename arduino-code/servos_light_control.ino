#include <Servo.h>

const int whiteLEDPin = 6;
const int brightnessPotPin = A1;


// Servo setup
Servo servo1;  // X-axis servo (e.g., MG90S)
Servo servo2;  // Y-axis servo

// Joystick pins
const int joyX = A2;
const int joyY = A3;

// RGB LED pins
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

// Potentiometer pin
const int potPin = A0;

void setup() {
  servo1.attach(3);
  servo2.attach(5);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(whiteLEDPin, OUTPUT); // Set white LED pin as output
}


void loop() {
  // --- Servo control via joystick ---
  int valX = analogRead(joyX);
  int angleX = map(valX, 0, 1023, 0, 180);
  servo1.write(angleX);

  int valY = analogRead(joyY);
  int angleY = map(valY, 0, 1023, 0, 180);
  servo2.write(angleY);

  // --- White LED brightness via second potentiometer ---
  int brightnessValue = analogRead(brightnessPotPin);
  int brightness = map(brightnessValue, 0, 1023, 0, 255);
  analogWrite(whiteLEDPin, brightness);


  // --- RGB control via potentiometer ---
  int potValue = analogRead(potPin);

  // Simple smooth color change across R→G→B
  int red = map(potValue, 0, 341, 255, 0);
  int green = map(potValue, 342, 682, 0, 255);
  int blue = map(potValue, 683, 1023, 255, 0);

  red = constrain(red, 0, 255);
  green = constrain(green, 0, 255);
  blue = constrain(blue, 0, 255);

  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);

  delay(15); // Small delay for stability
}
