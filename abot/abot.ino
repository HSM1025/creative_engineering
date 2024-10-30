#include<Servo.h>
Servo l;
Servo r;
void setup(){
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
  l.attach(12);
  r.attach(13);
  delay(3000);
  intro();
  delay(3000);
  bitSpin();
  wave();
  side();
  r.write(1500);
  l.write(1500);
  for(int i = 0; i < 3; i++) led();
}
void loop() {}

void intro(){
  digitalWrite(11, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(2, HIGH);
  r.write(1300);
  l.write(1700);
}
void bitSpin(){ 
  for(int i = 0; i < 4; i++){
    led();
    r.write(1700);
    l.write(1700);
  }
}

void wave(){
  for(int i = 0; i < 3; i++){
    r.write(1300);
    l.write(1700);
    led();
    r.write(1500);
    l.write(1500);
    delay(500);
    r.write(1700);
    l.write(1300);
    led();
    r.write(1500);
    l.write(1500);
    delay(500);
  }
}

void side(){
  digitalWrite(11, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(2, HIGH);
  for(int i = 0; i < 2; i++){
    r.write(1300);
    l.write(1500);
    delay(500);
    r.write(1500);
    l.write(1500);
    delay(500);
    r.write(1500);
    l.write(1700);
    delay(500);
    r.write(1500);
    l.write(1500);
    delay(500);
  }
  digitalWrite(11, LOW);
  digitalWrite(8, LOW);
  digitalWrite(2, LOW);
}

void led(){
  digitalWrite(11, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(11, LOW);
  digitalWrite(8, LOW);
  digitalWrite(2, LOW);
  delay(500);
}

