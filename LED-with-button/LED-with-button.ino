//On what pin the button will be connected
int buttonPin=10;
//On what pin the LED will be connected
int ledPin=12;
//Stores the state of the button
bool buttonState;

void setup() {
  //Set what mode the pin will work as (output or input)
  pinMode(buttonPin,INPUT_PULLUP);
  pinMode(ledPin,OUTPUT);

}

void loop() {
  //See if the button is pressed or not
  buttonState=!digitalRead(buttonPin);
  //Write to the LED the current state of the button
  digitalWrite(ledPin,buttonState);
}
