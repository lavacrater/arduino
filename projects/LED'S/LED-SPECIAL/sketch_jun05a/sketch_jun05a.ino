int pinul_1=A1;
int lumina;
int dl=500;
int becu1=300;
int becu2=275;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pinul_1, INPUT);
pinMode(becu1, OUTPUT);
pinMode(becu2, OUTPUT); 
if (lumina>961){
   digitalWrite(becu1, HIGH);
   digitalWrite(becu2, LOW);
}
if (lumina<961){
   digitalWrite(becu1, LOW);
   digitalWrite(becu2, HIGH);
}

}

void loop() {
  // put your main code here, to run repeatedly:
lumina=analogRead(pinul_1);
Serial.println(lumina);
delay (dl);
}
