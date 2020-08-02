
int pinLED    = 6;
int pinBUTTON = 2;


int buttonBE;
void setup(){

  pinMode  (pinLED,  OUTPUT);
  pinMode (pinBUTTON, INPUT);
}

void loop(){       

  buttonBE = digitalRead(pinBUTTON);

  if(buttonBE == HIGH){

    digitalWrite(pinLED, HIGH);
  }
   else{

     digitalWrite(pinLED, LOW);
   }
}

       

