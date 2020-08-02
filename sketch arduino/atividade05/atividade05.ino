int pinoLEDvermelho          = 5;
int pinoLEDamarelo           = 6;
int pinoLEDverde             = 9;
int pinoLEDvermelho_pedestre = 11;
int pinoLEDverde_pedestre    = 12;
int pinoBotao                    = 2;

int estadoBotao = 0;

void setup()
{
  pinMode (pinoLEDvermelho, OUTPUT);
  pinMode (pinoLEDamarelo,  OUTPUT);
  pinMode (pinoLEDverde,    OUTPUT);
  pinMode (pinoLEDvermelho_pedestre, OUTPUT);
  pinMode (pinoLEDvermelho_pedestre, OUTPUT);
  pinMode (pinoBotao, INPUT);
}

void loop()
{
  digitalWrite(pinoLEDvermelho_pedestre, LOW);
  digitalWrite(pinoLEDverde, HIGH);

  estadoBotao = digitalRead(pinoBotao);

  if (estadoBotao == HIGH)
  {
    delay(60000);

    digitalWrite(pinoLEDverde,    LOW);
    digitalWrite(pinoLEDamarelo, HIGH);

    delay(15000);

    digitalWrite(pinoLEDamarelo,           LOW);
    digitalWrite(pinoLEDvermelho,         HIGH);
    digitalWrite(pinoLEDvermelho_pedestre, LOW);
    digitalWrite(pinoLEDverde_pedestre,   HIGH);

    delay(30000);

    digitalWrite(pinoLEDverde_pedestre, LOW);

    for(int contador = 0; contador <= 3; contador++);
    {
      digitalWrite(pinoLEDvermelho_pedestre, HIGH);
      delay(500);
      digitalWrite(pinoLEDvermelho_pedestre,  LOW);
      delay(500);
      digitalWrite(pinoLEDvermelho_pedestre,  HIGH);
      delay(500);
    }

    digitalWrite(pinoLEDvermelho, LOW);
  }
}

