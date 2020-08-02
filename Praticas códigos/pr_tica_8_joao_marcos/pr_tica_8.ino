void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);

}

void loop() {
  Serial.print("potenciometro: ");
  Serial.println((analogRead(2) * 30 / 1023) + 20);

}
