#include <Arduino_JSON.h>


// constants won't change. They're used here to set pin numbers:
//Test réaliser avec TTGO, verifier pin en cas de changement 
const int buttonPin1 = 15;     // the number of the pushbutton pin
const int VibPin1 =  13;      // the number of the vib pin

// variables will change:
int pwmChannel = 0; //Choisit le canal 0
int frequence = 1000; //Fréquence PWM de 1 KHz
int resolution = 8; // Résolution de 8 bits, 256 valeurs possibles
int buttonState1 = HIGH;         // variable for reading the pushbutton status
int VibPin1State1 = false;       //bool vibration 

void setup() {
  // initialize the vib pin as an output:
  pinMode(VibPin1, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT_PULLUP);
    // initialize the LED pin as an output:
};
void loop() {
  
  //condition permettant le on/off 

  // read the state of the pushbutton value:
     buttonState1 = digitalRead(buttonPin1);

     if (buttonState1 == LOW){
       VibPin1State1 = !VibPin1State1;
     };
    
     if (VibPin1State1 == false){
       digitalWrite(VibPin1, HIGH);

     } else {

       digitalWrite(VibPin1, LOW);
     };
  }