int led=12;
int led1=13;
int led2=8;
int led3=7;
void setup(){
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}
void loop(){
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(led,LOW);
  delay(100);
  {digitalWrite(led1,HIGH);
  delay(100);
  digitalWrite(led1,LOW);
  delay(100);}
  {digitalWrite(led2,HIGH);
  delay(500);
  digitalWrite(led2,LOW);
  delay(100);}
  {digitalWrite(led3,HIGH);
  delay(100);
  digitalWrite(led3,LOW);
  delay(100);}
}
