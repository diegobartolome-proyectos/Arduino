int a=3 ,b;

void setup() {
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
if(a==3){
    Serial.println("a es igual a 3");
    }
   if(a!=4){
    Serial.println("a es distinto de 4");
    }
    if(a<4){
    Serial.println("a es menor que 4");
    }
    if(a>2){
    Serial.println("a es mayor que 2");
    }
   if(a<=3){
    Serial.println("a es menor o igual 3");
    }
   if(a>=3){
    Serial.println("a es mayor o igual 3");
    }
   if(a<=3 && a>=3){
    Serial.println("a es menor o igual 3 y a es mayor o igual 3");
    }
   if(a<4 || a==2){
    Serial.println("a es menor que 4 o a es igual a 2");
    }
    b=!a;
   if(!b){
    Serial.println("a no es 3");
    }
    delay(100000);

}
