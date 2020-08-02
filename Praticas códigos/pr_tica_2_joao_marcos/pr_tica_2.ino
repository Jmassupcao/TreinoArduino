
void setup() {
 for(int i = 2; i <= 6; i++){
  pinMode(i, OUTPUT);
 }

}

void loop() {

  for(int x = 2; x <=6; x++){

    digitalWrite(x, HIGH);
    delay(100);
    
  }
  for(int j = 6; j >= 2; j--){

    digitalWrite(j, LOW);
    delay(100);
    
  }
}
