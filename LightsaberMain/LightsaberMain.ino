/**
   Author: Merel van de Graaf
   Date: 20/1/2021
   Lightsaber
*/

#define RED_PIN 11
#define GREEN_PIN 10
#define BLUE_PIN 9
#define BUTTON_PIN 2

int buttonState = 0;         // variable for reading the pushbutton status
int lightState = 1;          // variable for storing current lightstatus

void setup() {
  // initialize the leds as output
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  // initialize the button as output
  pinMode (BUTTON_PIN, INPUT);
}

void loop() {
  delay(200);
  buttonState = digitalRead(BUTTON_PIN);
  switch (lightState) {
    case 1:
      //change light
      RGB_color(255, 0, 0); // Red
      if (buttonState == HIGH) {
        delay(10);
        if (buttonState == HIGH) {
          lightState++;
        }
      }
      break;
    case 2:
      //change light
      RGB_color(0, 255, 0); // Green
      if (buttonState == HIGH) {
        delay(10);
        if (buttonState == HIGH) {
          lightState++;
        }
      }
      break;
    case 3:
      //change light
      RGB_color(0, 0, 255); // Blue
      if (buttonState == HIGH) {
        delay(10);
        if (buttonState == HIGH) {
          lightState++;
        }
      }
      break;
    case 4:
      //change light
      RGB_color(0, 255, 255); // Cyan
      if (buttonState == HIGH) {
        delay(10);
        if (buttonState == HIGH) {
          lightState++;
        }
      }
      break;
    case 5:
      //change light
      RGB_color(255, 0, 255); // Magenta
      if (buttonState == HIGH) {
        delay(10);
        if (buttonState == HIGH) {
          lightState++;
        }
      }
      break;
    case 6:
      //change light
      RGB_color(255, 255, 0); // Yellow
      if (buttonState == HIGH) {
        delay(10);
        if (buttonState == HIGH) {
          lightState++;
        }
      }
      break;
    case 7:
      //change light
      RGB_color(255, 100, 0); // Orange
      if (buttonState == HIGH) {
        delay(10);
        if (buttonState == HIGH) {
          lightState++;
        }
      }
      break;
    case 8:
      //change light
      RGB_color(255, 255, 255); // White
      if (buttonState == HIGH) {
        delay(10);
        if (buttonState == HIGH) {
          lightState++;
        }
      }
      break;
    default:
      RGB_color(0, 0, 0); // Off
      if (buttonState == HIGH) {
        delay(10);
        if (buttonState == HIGH) {
          lightState = 1;
        }
      }
      break;
  }
}
void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
{
  analogWrite(RED_PIN, red_light_value);
  analogWrite(GREEN_PIN, green_light_value);
  analogWrite(BLUE_PIN, blue_light_value);
}
