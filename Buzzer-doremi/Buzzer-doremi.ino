//On what pin the Buzzer will be connected
int buzzerPin=3;

void setup() {
  //Set what mode the pin will work as (output or input)
  pinMode(buzzerPin,OUTPUT);

}

void loop() {
  //Play doremi frequencies every 500ms
  tone(buzzerPin,523,500);
  delay(500);
  tone(buzzerPin,587,500);
  delay(500);
  tone(buzzerPin,659,500);
  delay(500);
  tone(buzzerPin,698,500);
  delay(500);
  tone(buzzerPin,784,500);
  delay(500);
  tone(buzzerPin,880,500);
  delay(500);
  tone(buzzerPin,988,500);
  delay(500);
  tone(buzzerPin,1047,500);
  delay(5000);
}