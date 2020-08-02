int pinoLED = 9;
void setup() {
 // configura o pino como saida
 pinMode(pinoLED, OUTPUT);
}
void loop() {
 // envia nivel alto para o pino
 digitalWrite(pinoLED, HIGH);
 // aguarda 1 segundo
 delay(1000);
 // envia nivel baixo para o pino
 digitalWrite(pinoLED, LOW);
 // aguarda 1 segundo
 delay(1000);
}


