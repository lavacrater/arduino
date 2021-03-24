int lachpin=11;
int clockpin=9;
int datapin=12;
int dl=250;

byte LEDs=0b10101010;
byte LED2s=0b01010101;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(lachpin, OUTPUT);
pinMode(datapin, OUTPUT);
pinMode(clockpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(lachpin, LOW); 
shiftOut(datapin,clockpin,LSBFIRST,LEDs);
digitalWrite(lachpin, HIGH);
delay(dl);
digitalWrite(lachpin, LOW); 
shiftOut(datapin,clockpin,LSBFIRST,LED2s);
digitalWrite(lachpin, HIGH);
delay(dl);
}
