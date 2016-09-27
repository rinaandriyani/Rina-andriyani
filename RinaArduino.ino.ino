//the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 4 as an output
  pinMode(4, OUTPUT);
}

//the loop function runs over and over again forever
void loop() {
  digitalWrite(4, HIGH); //turn the LED on (HIGH is the voltage level)
  delay(2500);            //wait for a scond
  digitalWrite(4,LOW);  //turn the LED off by making the voltage low
  delay(2500);            //wait for a scound
}
