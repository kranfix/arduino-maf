#include<maf.h>

CircularBuffer cb;

int k = 0;
float pi_8 = 0.39269908169;

void setup() {
  Serial.begin(9600);
}

void loop() {
  float x = 20 + 10 * sin(k*pi_8);
  cb.push(x);
  float y = cb.mean();
  Serial.print(x);
  Serial.print(" ");
  Serial.println(y);
  k++;
  delay(300);
}