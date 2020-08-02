int botao = 0, i = 0, x = 0;
void setup() {

  //Serial.begin(9600);
  pinMode(9, INPUT);
  
  for(int j = 0; j <= 8; j++){
   
   pinMode(j, OUTPUT);
  
  }

  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  
}
 
void loop() {
  
   //botao = digitalRead(6);
  if(botao == 1 && x == 0){
    i++;
    x =1;
    
  //Serial.println(i);

  }else if(botao == 0){
    x = 0;
  }

  switch(i){

    case 1:
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
     
  
  case 2:
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4,  LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7,  LOW);
        digitalWrite(8, HIGH);
  case 3:
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6,  LOW);
        digitalWrite(7,  LOW);
        digitalWrite(8, HIGH;
  case 4:
        digitalWrite(2,  LOW);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5,  LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
        digitalWrite(8, HIGH;
  case 5:
        digitalWrite(2, HIGH);
        digitalWrite(3,  LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6,  LOW);
        digitalWrite(7, HIGH);
        digitalWrite(8, HIGH);
  case 6:
        digitalWrite(2, HIGH);
        digitalWrite(3,  LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(8, HIGH);
  case 7:
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5,  LOW);
        digitalWrite(6,  LOW);
        digitalWrite(7,  LOW);
        digitalWrite(8,  LOW);
  case 8:
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(8, HIGH);
  case 9:
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6,  LOW);
        digitalWrite(7, HIGH);
        digitalWrite(8, HIGH);
  }
}
