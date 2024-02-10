const int s1 = 11 ;
const int s2 = 5 ;
const int f1 = 12 ;
const int f2 = 10 ;
const int r1 = 7 ;
const int r2 = 8 ;
char reading ;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(s1,OUTPUT);
pinMode(s2,OUTPUT);
pinMode(f1,OUTPUT);
pinMode(f2,OUTPUT);
pinMode(r1,OUTPUT);
pinMode(r2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(s1,HIGH);
digitalWrite(s2,HIGH);
if (Serial.available()){
  char reading = Serial.read() ;
  switch (reading){
    case 'f' :digitalWrite(r1,HIGH);
              digitalWrite(r2,LOW);
              digitalWrite(f1,HIGH);
              digitalWrite(f2,LOW);
              break;
              
    case 'r' :digitalWrite(r1,LOW);
              digitalWrite(r2,LOW);
              digitalWrite(f1,HIGH);
              digitalWrite(f2,LOW);
              break;
              
    case 'l' :digitalWrite(r1,HIGH);
              digitalWrite(r2,LOW);
              digitalWrite(f1,LOW);
              digitalWrite(f2,LOW);
              break;
              
    case 'b' :digitalWrite(r1,LOW);
              digitalWrite(r2,HIGH);
              digitalWrite(f1,LOW);
              digitalWrite(f2,HIGH);
              break;

    case 's' :digitalWrite(r1,LOW);
              digitalWrite(r2,LOW);
              digitalWrite(f1,LOW);
              digitalWrite(f2,LOW);
              break;
    }
  }
}