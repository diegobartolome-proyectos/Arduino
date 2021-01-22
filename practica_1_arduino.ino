int t = 1000;
void setup() {
  Serial.begin(9600);
  for (int Pin = 6; Pin <= 11; Pin++) {
    pinMode(Pin, OUTPUT);
  }
  }
void loop(){
  for (int Pin = 5; Pin <11; Pin++){
    digitalWrite(Pin, HIGH);
    Serial.println(Pin);
    delay(t);
    
  }
  for (int Pin = 11; Pin >5; Pin--) { 
    digitalWrite(Pin, HIGH);
    delay(t);
    digitalWrite(Pin, LOW);
    Serial.println(Pin);
  }
}
