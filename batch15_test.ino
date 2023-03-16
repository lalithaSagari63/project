#include<Servo.h>
#include<SoftwareSerial.h>
Servo S2;
int t=10;int r1=11;
SoftwareSerial bluetooth(t,r1);
char r;
void setup() {
  // put your setup code here, to run once:
bluetooth.begin(9600);
Serial.begin(9600);
S2.attach(5);
  S2.write(150);
}

void loop() {
  // put your main code here, to run repeatedly:
r=bluetooth.read();
if(r=='A')
{
  S2.write(60);
  Serial.println(" 60 degrees");
}
if(r=='B')
{
  S2.write(120);
  Serial.println(" 120 degrees");
}
if(r=='C')
{
  S2.write(0);
  Serial.println("BASE 0 degrees");
}
}
