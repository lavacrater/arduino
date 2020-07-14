int NM;
String m="Te rog introdu numarul care vrei:";
String m2="";




void setup()
{
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {

while (Serial.available()==0){
  m2=Serial.println(m);
  delay(20000);
  Serial.print(m2);
}
/*Serial.parseInt();
Serial.print(m2);
Serial.println(NM);
*/
}
