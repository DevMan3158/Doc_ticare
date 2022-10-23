#include <Arduino.h>

//Permet une vibration lente au début 

const int VibPin1=13;

// Paramètre du channel 0 du PWM
int pwmChannel = 0; //Choisit le canal 0
int frequence = 1000; //Fréquence PWM de 1 KHz
int resolution = 8; // Résolution de 8 bits, 256 valeurs possibles

void setup() {
  // put your setup code here, to run once:

     // Configure le channel 0
    ledcSetup(pwmChannel, frequence, resolution);
    // Assigne le canal PWM au pin 23
    ledcAttachPin(VibPin1, pwmChannel);
}

void loop() {
  // put your main code here, to run repeatedly:
  //int dutyCycle=60;

  for(int i = 0; i<200;i++){
    ledcWrite(pwmChannel, i);
    delay(20);
  }
  for(int i = 200; i>0;i--){
    ledcWrite(pwmChannel, i);
    delay(20);
  }
}