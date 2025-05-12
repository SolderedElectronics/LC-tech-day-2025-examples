//On what pin the button will be connected
int buttonPin=10;
//On what pin the Buzzer will be connected
int buzzerPin=3;
//Stores the state of the button
bool buttonState;

void setup() {
  //Set what mode the pin will work as (output or input)
  pinMode(buttonPin,INPUT_PULLUP);
  pinMode(buzzerPin,OUTPUT);

}

void loop() {
  //See if the button is pressed or not
  buttonState=!digitalRead(buttonPin);
  //If the button is pressed, play the tone on the buzzer
  if(buttonState)
  {
    tone(buzzerPin,440,20);
  }
}
