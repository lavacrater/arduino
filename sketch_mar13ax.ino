byte mybyte=B00001111;
int dl= 500;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(mybyte, HEX);
mybyte=mybyte+1;
delay(dl);

}
