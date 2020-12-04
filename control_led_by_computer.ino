char ledRef;
int rled=6;
int gled=9;
void setup(){
  pinMode(rled,OUTPUT);
  pinMode(gled,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  if(Serial.available()){
    ledRef=Serial.read();}
    if(ledRef=='R'){
      digitalWrite(rled,HIGH);
      delay(500);}
    if(ledRef=='G'){
      digitalWrite(gled,HIGH);
      delay(500);}
    else{
      digitalWrite(rled,LOW);
      digitalWrite(gled,LOW);
  }
}
