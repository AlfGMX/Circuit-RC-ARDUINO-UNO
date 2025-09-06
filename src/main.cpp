#include <Arduino.h>

// Aquest programa llegeix el valor del pin analògic A0
// i l'envia al monitor sèrie convertit a volts.

// Constants per a la conversió
// El valor màxim de la lectura analògica per a un Arduino de 10 bits és 1023.
const float MAX_ADC_VALUE = 1023.0;

// La referència de tensió per a l'Arduino Uno és 5.0V.
const float VOLTAGE_REF = 5.0;

// La funció setup() s'executa una sola vegada.
void setup() {
  // Inicialitza la comunicació sèrie.
  // Utilitza una velocitat més ràpida (115200) per a una transmissió més fluida.
  Serial.begin(115200);
}

// La funció loop() s'executa de manera contínua.
void loop() {
  // Llegeix el valor brut analògic (de 0 a 1023).
  int valorBrut = analogRead(A0);

  // Converteix el valor brut a volts utilitzant una simple regla de tres.
  // La fórmula és: (valorBrut / MAX_ADC_VALUE) * VOLTAGE_REF
  float voltatge = (valorBrut / MAX_ADC_VALUE) * VOLTAGE_REF;

  // Imprimeix el valor en volts al port sèrie amb dos decimals de precisió.
  Serial.println(voltatge); 

  // Espera un moment per evitar que les dades s'enviïn massa ràpid.
  delay(250);
}