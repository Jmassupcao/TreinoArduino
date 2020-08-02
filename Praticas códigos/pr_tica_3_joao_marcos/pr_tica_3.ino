void setup() {
  for(int i = 2; i <= 6; i++){

    pinMode(i, OUTPUT);
    
  }

}

void loop() {

 for(int j = 2; j <= 6; j++){

  digitalWrite(j, HIGH);
  delay(100);
  
 }

for(int y = 6; y >= 2; y--){

  digitalWrite(y, LOW);
  delay(100);
  
}
}
