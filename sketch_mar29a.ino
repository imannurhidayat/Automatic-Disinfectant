#include <Servo.h>
Servo myservo;
int pos = 0;
int waktuKalibrasi = 5;
long unsigned int lowIn;
long unsigned int pause = 5;
boolean lockLow = true;
boolean ambilWaktuSebentar;
int pirSensor = 12;
void setup(){
  myservo.attach(7);
  pinMode(pirSensor, INPUT);

    for(int i = 0; i < waktuKalibrasi; i++){
      delay(10);
    }
    while (digitalRead(pirSensor) == HIGH) {
      delay(10);
    }
  }

void loop(){
  if(digitalRead(pirSensor) == HIGH){
    for(pos = 0; pos < 700; pos += 1)
    {
      myservo.write(pos);
      delay(1);
    }
    for(pos = 700; pos>=0; pos-=1)
    {
    }
  }
}
