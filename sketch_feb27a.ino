int buttonPin=8;
int buttonValue;
int dl=100;
void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin, INPUT);
digitalWrite(buttonPin, HIGH);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("button este");
  Serial.println(buttonValue);
  delay(dl);
}
