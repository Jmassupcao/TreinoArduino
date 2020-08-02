void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(6, INPUT_PULLUP);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);

}

void loop() {
  
  if(digitalRead(6) == 0){
    digitalWrite(2, LOW);
  }else{
    digitalWrite(2, HIGH);
  }

}
