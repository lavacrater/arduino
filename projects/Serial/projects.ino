int a=8;
int waitT=750;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(a);
a=a+8;
delay (waitT);

}
