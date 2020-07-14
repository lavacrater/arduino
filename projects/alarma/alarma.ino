int bazait=4;
int p=1000;
int p2=1000;
int t;



void setup() {
  // put your setup code here, to run once:

pinMode(bazait, OUTPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
for (t=1;t<=100;t=t+1);{
digitalWrite(bazait, HIGH);
delay(p);
digitalWrite(bazait, LOW);
delay(p);




}
for (t=1;t<=100;t=t+1);
digitalWrite(bazait, HIGH);
delay(p2);
digitalWrite(bazait, LOW);
delay(p2);

}
