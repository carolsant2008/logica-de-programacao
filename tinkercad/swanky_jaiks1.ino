
void desenhaCabecalho()
{
  Serial.println("--- PROGRAMA JOGO DE DADOS ---");
  Serial.println();
  delay(500);

  void desenhaPontinhos(int qtdPontos = 5, int tempo = 700)
  {
    for(int i = 1; i &lt;= qtdPontos; i++)
    {
      Serial.print("");
      delay(tempo);
    }
  }

  void setup()
  {
    Serial.begin(9600);
    randomSeed(analogRead(0));//inicia e normaliza a porta randômica para
    evitar pega o mesmo valor
  }

  void loop()
  {
    desenhaCabecalho();//desenha o cabeçalho na tela
    //solicita o palpite do usuário
    Serial.println("Digite um palpite entre 1 e 6: ");
    while(!Serial.available());//espera o usuário digitar
    int palpite = Serial.parseInt();//guarda o palpite do usuário
    //jogar o dado - sorteia um número randômico/aleatório de 1 até 7 - 1, ou seja,
    6
      int numeroSorteado = random(1, 7);//número entre 1 e 6
    Serial.print("Jogando o dado");
    desenhaPontinhos();
    Serial.println();
    Serial.println();
    Serial.println("Seu palpite: "  + String(palpite));//exibir o palpite do usuário
    Serial.println("Numero Sorteado: " + String(numeroSorteado));//exibir o
    número sorteado
      //valida o resultado
      if(palpite == numeroSorteado)
    {
      Serial.println("Parabens, voce acertou!!");
    } else {
      Serial.println("Que pena, tente outra vez!!");
    }
    Serial.println("Reiniciando o programa");
    Serial.println();
    delay(700);

  }