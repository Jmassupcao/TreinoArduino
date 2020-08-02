int pinoLED = 9;
int pinoLDR = 0;

float tensaoLida = 0;
int saidaPWM = 0;

void setup(){
  pinMode (pinoLED, OUTPUT);
  pinMode (pinoLDR, INPUT);
}

void loop(){
  tensaoLida = analogRead (pinoLDR) * 0.0049;

  saidaPWM = 255 - (tensaoLida / 0.0196);
  analogWrite(pinoLED, saidaPWM);
}

