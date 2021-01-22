byte red=5,green=6,blue=9;
byte letra;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);
Serial.println("Escribe mayusculas para encender y minusculas para apagar");
Serial.println("azul => a o A");
Serial.println("verde => g o G");
Serial.println("rojo => r o R");
Serial.println("todos => t o T");
}
void loop() {
  // put your main code here, to run repeatedly:

if (Serial.available() > 0){
  letra = Serial.read();
  if(letra=='A'){
    digitalWrite(blue, HIGH);
    }
   else if (letra=='a'){
    digitalWrite(blue, LOW);
    }
    else if (letra=='G'){
    digitalWrite(green, HIGH);
    }
   else if (letra=='g'){
    digitalWrite(green, LOW);
    }
    else if (letra=='R'){
    digitalWrite(red, HIGH);
    }
   else if (letra=='r'){
    digitalWrite(red, LOW);
    }
    else if (letra=='T'){
    digitalWrite(green, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(blue, HIGH);
    }
   else if (letra=='t'){
    digitalWrite(green, LOW);
    digitalWrite(red, LOW);
    digitalWrite(blue, LOW);
    }
  }
  
}
