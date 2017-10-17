
#include "filter.h"

#define INPUT_PIN A0   

Filter filtro;
int sampleF;
void setup() {

Serial.begin(9600);
filtro.setDepthFilter(10);     //imposta la lunghezza del filtro

}

void loop() {
  
  
   sampleF = filtro.filterSamples(analogRead(INPUT_PIN)); 
  
   Serial.println(sampleF);
   
   delay(100);
}
