void setup() {
  pinMode(A2,INPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value=analogRead(A2);
  Serial.println(value);
  int led=map(value,0,600,0,255);
  analogWrite(2,led);
  delay(100);
}
