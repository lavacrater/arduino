int r;
int dl=500;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  for (r=10;r<=17;r=r+1){
    Serial.println(r);
    delay(dl);
}
}

 
