
/* 
A toy, learn to mix colors and count binary. 

By Jens Clarholm @jenslabs, jenslabs.com
 */
 
#include <Bounce2.h>
#include "FastLED.h"

#define nextColor 6
#define DATA_PIN 7
#define NUM_LEDS 16
#define BRIGHTNESS 60


//Define and initiate global variables
boolean debug1 = true;
int currentSwitchValue;

uint8_t gHue = 0; // rotating "base color" used by many of the patterns
// Create debounce objects for state buttons

Bounce debouncer1 = Bounce(); 
Bounce debouncer2 = Bounce(); 

//Define LED array
CRGB leds[NUM_LEDS];;
CRGB colors[2] = {CRGB::HotPink, CRGB::DarkTurquoise};

 
int currentColorInArray = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Startserial");
  
  
 delay(1000);
  
  //Create Led object
  FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);

  //Define state change buttons with debounce.
  // Setup the first button with an internal pull-up :
  pinMode(nextColor,INPUT_PULLUP);
  // After setting up the button, setup the Bounce instance :
  debouncer1.attach(nextColor);
  debouncer1.interval(50); // interval in ms
}

void loop() {
  // Update the Bounce instances :
  debouncer1.update();


  // Check for button presses on state change button
  int valuenextColor = debouncer1.read();

  // Turn on the LED if either button is pressed :
  if ( valuenextColor == LOW ) {
        Serial.print("this is a printout indicating that the previous state button has been pressed. Millis: ");
     Serial.println((int)millis);
//    valuePreviousStateButton = HIGH;
    generateNewColor();
  } 
}

void generateNewColor(){

if currentColorInArray <= currentColorInArray
currentColorInArray =
CRGB nextColor = colorArray[currentColorInArray]
  currentColorInArray
  
  }



 void setAllLedsToColor(CRGB color){
    for(int currentLed = 0; currentLed < NUM_LEDS; currentLed = currentLed + 1) {
    leds[currentLed] = color;
    }
      FastLED.setBrightness(BRIGHTNESS);
    FastLED.show();
    }




