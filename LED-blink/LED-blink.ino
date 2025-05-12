//Holds the current state od the LED
bool ledState=0;

//On what pin is the LED connected
int ledPin=12;

//This part of the program executes only once at startup
void setup() {
  //Set what mode the pin will work as (output or input)
  pinMode(ledPin,OUTPUT);
}

void loop() {
  //Invert the state variable
  ledState=!ledState;
  //Write to the LED pin the stored state (HIGH or LOW)
  digitalWrite(ledPin,ledState);
  //Pause for 500ms
  delay(500);
}
