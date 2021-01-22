int valor;
int i=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(9,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
valor=0;
valor= analogRead(5);
Serial.print("cantidad de luz ambiente=");
Serial.println(valor);
delay(1000);
if(valor <= 20){
  switch(i){
  case 0:
    for (i=0;i<255;i++){
    analogWrite(9,i);
    Serial.print("valor brillo led =");
    Serial.println(i);
    delay(50);
      }
    break;
   case 255:
    analogWrite(9,i);
    break;

    }
  delay(1000);
Serial.println("brillo del led maximo");
}

else{
  switch(i){
    case 0:
    delay(1000);
    break;
    case 255:
    Serial.println("brillo del led disminuyendo");
    delay(1000);
      for (i=255;i>=0;i--){
        analogWrite(9,i);
        Serial.print("valor brillo led =");
        Serial.println(i);
        delay(50);
      }
      i=i+1;
      Serial.println("led apagada");
      break;
  }
  }
}
