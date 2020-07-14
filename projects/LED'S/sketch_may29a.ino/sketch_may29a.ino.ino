int b1=2;
int b2=3;
int a=500;
int b=200;
int bb=5;
int c;



void setup() {

  // put your setup code here, to run once:
pinMode(b1, OUTPUT);
pinMode(b2, OUTPUT);

}

void loop() {
   for(c=1;c<=bb;c=c+1);{
      

  digitalWrite(b1, HIGH);
  delay(a);
  digitalWrite(b1, LOW);
  delay(a);
  digitalWrite(b1, HIGH);
  delay(a);
  digitalWrite(b1, LOW); 
  delay(a);

   }
  digitalWrite(b2, HIGH);
  delay(b);
  digitalWrite(b2, LOW);
  delay(b);
  digitalWrite(b2, HIGH);
  delay(b);
  digitalWrite(b2, LOW);
  delay(b);
 }
 
  

  
  
  
  
  
  
  
  
  
