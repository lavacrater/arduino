int pinu7=7;
int butonvaluare;
int dl=300;

void setup() {
  // put your setup code here, to run once:
pinMode(pinu7, INPUT);
digitalWrite(pinu7,HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 butonvaluare=digitalRead(pinu7);
 Serial.print("Butonu este: ");
 Serial.println(butonvaluare);
 delay(dl);
}
