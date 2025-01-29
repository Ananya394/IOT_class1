
#define led 7
void setup() {
  pinMode(led, OUTPUT);
}

void loop() 

{
  digitalWrite(led, HIGH);   // turn the LED on 
  delay(500);                     
  digitalWrite(led, LOW);    // turn the LED off
  delay(500);                       
}
