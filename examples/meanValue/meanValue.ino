#include<maf.h>

#define currentPin A0
#define bufferLength 50

//CircularBuffer<int,bufferLength> cb();
CircularBuffer cb();

void setup(){
  Serial.begin(9600);
}

void loop(){
  int current = analogRead(currentPin);
  cb.push(current);
  Serial.println(cb.mean());
}