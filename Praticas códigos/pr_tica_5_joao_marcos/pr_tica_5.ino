int botao = 0, aux = 0;
void setup() {

  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);

}

void loop() {

  botao = digitalRead(2);

  if(botao == 0 && aux == 0){

    Serial.println("botao pressionado");
    aux = 1;
  }else if(botao == 1){

    aux = 0;
    
  }

}
