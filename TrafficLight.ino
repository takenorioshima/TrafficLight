const int GREEN_PIN = 2;
const int RED_PIN = 3;

void setup() {
  pinMode(GREEN_PIN,OUTPUT);
  pinMode(RED_PIN,OUTPUT);
}
 
void loop() {

  // Green Signal
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  delay(5000);

  // Blinking Green Signal 
  for(int i=0; i<10; i++){
    digitalWrite(GREEN_PIN, LOW);
    delay(200);
    digitalWrite(GREEN_PIN, HIGH);
    delay(200);
  }

  // Red Signal
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(RED_PIN, HIGH);
  delay(15000);
  
}
