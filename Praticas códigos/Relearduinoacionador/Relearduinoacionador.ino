
const int Entrada = 7;
const int Rele = 8;

void setup() {
  
  pinMode(Entrada, INPUT);
  pinMode(Rele, OUTPUT);

}

void loop() {

  Serial.println(digitalRead(Entrada));
  while(digitalRead(Entrada) == HIGH){
   Serial.print("entrou entrou entrou: ");
   Serial.println(digitalRead(Entrada));
    digitalWrite(Rele, HIGH);
  }
  digitalWrite(Rele, LOW);

}
