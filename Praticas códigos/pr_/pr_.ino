void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);

}

void loop() {
  Serial.print("temperatura: ");
  Serial.print(analogRead(2));
  Serial.println(" °c");
  

}
