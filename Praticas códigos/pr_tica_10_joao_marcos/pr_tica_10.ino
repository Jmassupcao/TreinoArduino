unsigned long tempo = 0, tempo2 = 0;
int i = 1, j = 1;
void setup(){
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  tempo = millis();
  tempo2 = millis();
}
void loop(){
  
  if(millis() - tempo >= 400 && i == 1 ){
    
    digitalWrite(3, HIGH);
    tempo = millis();
    i = 0;
  }if(millis() - tempo >= 400 && i == 0 ){
    digitalWrite(3, LOW);
    tempo = millis();
    i = 1;
  }
  if(millis() - tempo2 >= 600 && j == 1){
    digitalWrite(4, HIGH);
    tempo2 = millis();
    j = 0;
  }
  if(millis() - tempo2 >= 600 && j == 0){
    digitalWrite(4, LOW);
    tempo2 = millis();
    j = 1;
  }
}
