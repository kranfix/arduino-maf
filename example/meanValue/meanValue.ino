#include<maf.cpp>

#define currentPin A0
#define bufferLength 50

CircularBuffer<int,bufferLength> cb();

void setup(){
  Serial.begin(9600);
}

void loop(){
  int current = analogRead(currentPin);
  cb.push(current);
  Serial.println(cb.mean());
}