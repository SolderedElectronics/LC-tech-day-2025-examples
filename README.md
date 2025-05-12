# LC-tech-day-2025-examples
Collection of all examples covered during the LC Tech Day 2025 Dasduino workshop

## Required software
To follow along, you must install the Arduino IDE, you can find the installer [**here**](https://www.arduino.cc/en/software/)

## Before we start
First, we must install the Dasduino board definitions inside the arduino IDE, instructions are as follows:

1. Add URL: https://github.com/SolderedElectronics/Dasduino-Board-Definitions-for-Arduino-IDE/raw/master/package_Dasduino_Boards_index.json to "Additional Boards Manager" in your Arduino IDE Preferences
2. Install new boards via Tools -> Board -> Boards Manager. Type "dasduino" or "inkplate" in search box and pick the board you want to install. 
3. Wait a bit.
4. Pick the new board from Tools -> Board menu.

## Example 1: Blinking LED
We will start off with the classic beginner project: a blinking LED! 
We will turn the LED on and off in a defined interval using the microcontroller. Dont forget the resistor!
The example code can be found [**here**](LED-blink/LED-blink.ino)

## Example 2: Turn on LED on button press
We will build upon the previous example by adding a button. When the button is pressed, the LED lights up
The example code can be found [**here**](LED-with-button/LED-with-button.ino)

## Example 3: Buzzer
We will play the do-re-mi-fa-so-la-ti-do frequencies using a passive buzzer and the Tone() function of the microcontroller
The example code can be found [**here**](Buzzer-doremi/Buzzer-doremi.ino)

## Example 4: Buzzer on button press
Adding to the previous example, we will play a single tone when the button is pressed.
The example code can be found [**here**](Buzzer-with-button/Buzzer-with-button.ino)

## Example 5: DHT11 sensor
We will learn how to use more complex components with the DHT11 temperature and humidity sensor. The sensor uses the SWI (Single wire interface) protocol
to communicate with the board. To use the sensor, we must install its library, the steps are as follows:

1. On the left side, click on the **Library Manager** icon
2. Type in DHT11 and install the library created by Dhruba Saha
3. Include the library header file by going to: Sketch -> Include Library -> DHT11

The example code can be found [**here**](DHT11/DHT11.ino)

## Example 6: DHT11 sensor alert when temperature high
Adding to the previous example, when the sensor surpasses a specific threshold, we will turn on an LED/Buzzer to inform the user.

The example code can be found [**here**](DHT11-with-LED/DHT11-with-LED.ino)


## Extra resources

[Pull-up and Pull-down resistors](https://eepower.com/resistor-guide/resistor-applications/pull-up-resistor-pull-down-resistor/#)

[Single Wire Interface (SWI)](https://developerhelp.microchip.com/xwiki/bin/view/applications/swi/)



