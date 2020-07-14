int a=A3;
int readVal;
int V2;
int dl=250;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(a);
V2=(5./1023.)*readVal;
Serial.println(V2);
delay (dl);
}
