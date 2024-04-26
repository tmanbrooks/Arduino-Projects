int switchState = 0;

void setup() {
  // declare the LED pins as outputs:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  //declare the switch pin as an input
  pinMode(2, INPUT)
}

void loop() {
  // read the value of the switch
  // digitalRead() checks to see if there is voltage on the pin or not
  switchstate = digitalRead(2);

  //if the button is not pressed turn on the green LED and off the red LEDs
  if (switchstate == LOW) {
    digitalWrite(3, HIGH); // turn the green LED on pin 3 ON
    digitalWrite(4, LOW); // turn the green LED on pin 4 OFF
    digitalWrite(5, LOW); // turn the green LED on pin 5 OFF
  }
  //this else part is part of the above if() statement.
  //if the swtich is not LOW (the button is pressed) turn off the green LED and
  //blink alternatively the red LEDs
  else {
    digitalWrite(3, LOW); // turn the green LED on pin 3 off
    digitalWrite(4, LOW); // turn the red LED on pin 4 off
    digitalWrite(5, HIGH); // turn the red LED on pin 5 on
    // wait for a quarter second before changing the light
    delay(250);
  }

}
