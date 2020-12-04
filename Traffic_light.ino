int red = 4;
int yellow = 2;
int green = 3;

void setup(){
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
}
void loop(){
  changelight();
  delay(15000);
}
void changelight(){
  digitalWrite(green,LOW);
  digitalWrite(yellow,HIGH);
  delay(3000);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(5000);
  digitalWrite(yellow, HIGH);
  delay(2000);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  delay(3000);
}
