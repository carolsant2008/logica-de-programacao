// C++ code
//

int ledVermelho = 13;
int ledAmarelo = 12;
int ledVerde = 11;
int escolhaEscolhida;

void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  Serial.begin(9600);

  //todos os leds desligados
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, LOW);
}

void loop()
{
  do{
    Serial.println("Escolha qual led vc quer acender ou apagar");
    Serial.println("1 - ligar led vermelho");
    Serial.println("2 - desligar led vermelho");
    Serial.println("3 - ligar led amarelo");
    Serial.println("4 - desligar led amarelo");
    Serial.println("5 - ligar led verde");
    Serial.println("6 - desligar led verde");
    Serial.println("7 - ligar todos os leds");
    Serial.println("8 - deligar todos os leds");
    Serial.println("9 - sair");

    while(!Serial.available());
    escolhaEscolhida = Serial.parseInt();

    switch(escolhaEscolhida){
      case 1:
      digitalWrite(ledVermelho, HIGH);
      Serial.println("led vermelho ligado");
      break;

      case 2:
      digitalWrite(ledVermelho, LOW);
      Serial.println("led vermelho desligado");
      break;

      case 3:
      digitalWrite(ledAmarelo, HIGH);
      Serial.println("led amarelo ligado");
      break;

      case 4:
      digitalWrite(ledAmarelo, LOW);
      Serial.println("led amarelo desligado");
      break;

      case 5:
      digitalWrite(ledVerde, HIGH);
      Serial.println("led verde ligado");
      break;

      case 6:
      digitalWrite(ledVerde, LOW);
      Serial.println("led verde desligado");
      break;

      case 7:
      digitalWrite(ledVermelho, HIGH);
      digitalWrite(ledAmarelo, HIGH);
      digitalWrite(ledVerde, HIGH);
      Serial.println("todos os leds ligado");
      break;

      case 8:
      digitalWrite(ledVermelho, LOW);
      digitalWrite(ledAmarelo, LOW);
      digitalWrite(ledVerde, LOW);
      Serial.println("todos os leds desligado");
      break;

      case 9:
      Serial.println("Bye ;)");
      digitalWrite(ledVermelho, LOW);
      digitalWrite(ledAmarelo, LOW);
      digitalWrite(ledVerde, LOW);
      Serial.println("todos os leds desligado");
      break;
    }

  } while(escolhaEscolhida != 0);

}





















