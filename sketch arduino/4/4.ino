int pinLED = 5;
int pinBotao = 2;

int estadodoBotao = 0;

void setup(){
  digitalWrite(pinLED, OUTPUT);
  digitalWrite(pinBotao, INPUT);
  }

void loop(){
  estadodoBotao = digitalRead(pinBotao);

  if(estadodoBotao == HIGH){
    digitalWrite(pinLED, HIGH);
    }
    else{
      digitalWrite(pinLED, LOW);
    }
}


