unsigned long tempoBotao = 0, duracao = 0, tempo2 = 0, tempoLed = 0, dif = 0;

void setup() {
  pinMode(7, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {

  int liga = 0;

//  Serial.println(duracao);
  tempoBotao = millis();
  while(digitalRead(7) == 0){
   duracao = millis() - tempoBotao;
   liga++;
  //Serial.println(tempo2);
   //i++;
   //Serial.println(digitalRead(7));
  }
  
  tempoLed = millis();
  Serial.println(tempoLed);
  
  while( ( (millis() - tempoLed) <= duracao) && liga){

    digitalWrite(13, HIGH);
    
  }
  digitalWrite(13, LOW);
}
