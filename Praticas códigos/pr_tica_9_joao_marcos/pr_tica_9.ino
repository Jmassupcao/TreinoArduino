void setup() {
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);

}

void loop() {

  analogWrite(3, analogRead(2));
}
