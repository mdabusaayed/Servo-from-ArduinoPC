#include <Servo.h>
Servo fire;

int pos = 0;

void setup() {
  fire.attach(11);
}

void loop() {
  {for (pos = 15; pos <= 100; pos += 1) {
    fire.write(pos);
    delay(10);
  }
  delay(5000);
  for (pos = 100; pos >= 15; pos -= 1) { 
    fire.write(pos);
    delay(10);
  }
  delay(300000);}
}