const int analog_ip = A0;
const int LED = 9;
int inputVal = 0;

void setup() {
  pinMode (LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  inputVal = analogRead(analog_ip);
  analogWrite (LED, inputVal/4);
  Serial.println(inputVal);
  delay(100);
}
