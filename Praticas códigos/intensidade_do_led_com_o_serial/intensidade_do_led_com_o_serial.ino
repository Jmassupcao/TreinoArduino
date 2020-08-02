int Vserial = 0 ;
String x = "  ";

void setup() {
  
 Serial.begin(9600);
 pinMode(3, OUTPUT);

}

void loop() {
  
  while(Serial.available() > 0){

    Vserial = Serial.read()- 48;
  
    x = x + Vserial;
     
 }

   Serial.println(x); 

 if(x != " "){
 analogWrite(3, x.toInt());
 
   Serial.println(x); 
   x = " "; 
 }
  

}
