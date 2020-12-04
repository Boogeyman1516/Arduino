const int Button=2;
const int led=3;
int buttonstate=0;

void setup()
{
  pinMode(Button,INPUT);
  pinMode(led,OUTPUT);
}
void loop()
{
  buttonstate=digitalRead(Button);
  if (buttonstate ==HIGH){
    digitalWrite(led,LOW);
  }
  else{
    digitalWrite(led,HIGH);
  }
}
