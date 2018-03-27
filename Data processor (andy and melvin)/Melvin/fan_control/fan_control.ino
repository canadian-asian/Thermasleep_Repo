
// the setup function runs once when you press reset or power the board


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  fan_hot();

  fan_cold();
}

void fan_hot(){
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(7000);                       // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(7000); 
}


void fan_cold(){               
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(7000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(7000); 
}
