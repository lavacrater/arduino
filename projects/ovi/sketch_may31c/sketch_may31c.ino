
int bazait=4;
int bazait2=8;
int p=1000;
int p2=2000;
int t;
int s;



void setup() {
  // put your setup code here, to run once:

pinMode(bazait, OUTPUT);
pinMode(bazait2, OUTPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
for (t=1;t<=3;t=t+1) {
digitalWrite(bazait, HIGH);
delay(p);
digitalWrite(bazait, LOW);
delay(p);
}

for (s=1;s<=5;s=s+1) {
 digitalWrite(bazait2, HIGH);
 delay(p2);
 digitalWrite(bazait2, LOW);
 delay(p2);
}

}
