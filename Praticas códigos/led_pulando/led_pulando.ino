int botao = 0;
int i = 0;
int x = 0;
void setup() {

  Serial.begin(9600);
  pinMode(6, INPUT);
}
 
void loop() {

   
  botao = digitalRead(6);
   
   
  if(botao == 1 && x == 0){
    i++;
    x =1;
      
  Serial.println(i);

  }else if(botao == 0){
    x = 0;
  }
    

  


}
