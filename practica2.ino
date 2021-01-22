int buton=2,led=13,estatebut=0;
void setup() {
pinMode(led,OUTPUT);
pinMode(buton,INPUT);
Serial.begin(9600);
}

void loop() {
  
estatebut =  digitalRead(buton);
Serial.println(estatebut);
if (estatebut == HIGH)
  {
    digitalWrite(led,digitalRead(buton));

  }
else
  {
    digitalWrite(led,digitalRead(buton));
  }
}
