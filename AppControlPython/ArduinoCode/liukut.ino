const int pot1 = A0;
const int pot2 = A1;
const int pot3 = A2;
const int pot4 = A3;
const int pot5 = A4;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int arvo1=analogRead(pot1);
  arvo1=map(arvo1,0,1023,0,100);
  int arvo2=analogRead(pot2);
  arvo2=map(arvo2,0,1023,0,100);
  int arvo3=analogRead(pot3);
  arvo3=map(arvo3,0,1023,0,100);
  int arvo4=analogRead(pot4);
  arvo4=map(arvo4,0,1023,0,100);
  int arvo5=analogRead(pot5);
  arvo5=map(arvo5,0,1023,0,100);
  Serial.print(arvo1);Serial.print("|");Serial.print(arvo2);Serial.print("|");Serial.print(arvo3);Serial.print("|");Serial.print(arvo4);Serial.print("|");Serial.println(arvo5);
}
