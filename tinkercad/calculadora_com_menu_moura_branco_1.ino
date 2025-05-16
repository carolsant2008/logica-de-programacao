int escolhaDaOperacao;
float resultado; // Irá guardar o resultado do calculo da respectiva operação
 


//ESTRUTURA: tipoRetorno nomedaNomeDaFunção parametros corpo
void somar(float numero1Param, float numero2Param){
  resultado = numero1Param + numero2Param; //; indica que é o intrução final da respectiva opração
  //return resultado;
  Serial.println("WOW!!! O resultado da soma foi: " + String(resultado));  // concatenano
}

void dividir (float numero1Param, float numero2Param){
  resultado = numero1Param / numero2Param; //; indica que é o intrução final da respectiva opração
  //return resultado;
  Serial.println("WOW!!! O resultado da divisao foi: " + String(resultado)); // concatenano
}

void subtrair(float numero1Param, float numero2Param){
  resultado = numero1Param - numero2Param; //; indica que é o intrução final da respectiva opração
  //return resultado;
  Serial.println("WOW!!! O resultado da subtrasao foi: " + String(resultado)); // concatenano
}
void multiplicar(float numero1Param, float numero2Param){
  resultado = numero1Param * numero2Param; //; indica que é o intrução final da respectiva opração
  //return resultado;
  Serial.println("WOW!!! O resultado da multiplicacao foi: " + String(resultado)); // concatenano

}


void setup()
{
   Serial.begin(9600);
  
  int contador = 0; //variável inicializadora do "do while" 
  float numero1; // variavel local
  float numero2;


 do{
  Serial.println("Bem vindo(a) a calculadora mega blaster inteligente :P!!!\n");
    Serial.println("Escolha uma das operacoes"); 
    Serial.println("1 - Somar");
    Serial.println("2 - Dividir"); 
    Serial.println("3 - Subitrair");
    Serial.println("4 - multiplicar");
    while(!Serial.available()){}
    escolhaDaOperacao = Serial.parseInt();
    
    
    
    Serial.println("Para conseguirmos fazer a operacao matematica, precisamos que voce digite dois numeros");
    Serial.println("Digite o primeiro numero");
    while(!Serial.available()){}
    numero1 = Serial.parseFloat();
    
    Serial.println("Digite o segundo numero");
    while(!Serial.available()){}
    numero2 = Serial.parseFloat();
    
    switch(escolhaDaOperacao){
    case 1: //SOMAR
      somar(numero1, numero2); // estou passando os valores que o usuátou via parametro 
      //somar(1, 3); // estou passando os valores fixos via parametro
      
     // float retornoFuncaoSomar; //criou a variavel que ira armazenar o retotno da função
      //retornoFuncaoSomar = somar(numero1, numero2);
      //Serial.println(retornoFuncaoSomar);
       break;
      
    case 2: //DIVIDIR
      dividir(numero1, numero2); // estou passando os valores que o usuátou via parametro 
      //dividir(1, 3); // estou passando os valores fixos via parametro
     
      break;
      
    case 3: //SUBITRAIR
      subtrair(numero1, numero2); // estou passando os valores que o usuátou via parametro 
      //subitrair(1, 3); // estou passando os valores fixos via parametro
      
      break;
      
    case 4: //MULTIPLICAR
      multiplicar(numero1, numero2); // estou passando os valores que o usuátou via parametro 
      //multiplicar(1, 3); // estou passando os valores fixos via parametro
         
      break;
      
      default:
      Serial.println("Opcao invalida! Escolha uma opcao do 1 ao 4. ;)");
    }
    
    Serial.println("Voce deseja voltar ao menu? Digite sim ou nao (em minusculo, por favor).");
    while(!Serial.available()){}  
    
    
   if(Serial.readString() == "sim"){
    contador = 1; 
   }
   else{ 
   contador = 0;
     
   Serial.println("Ate breve");
    Serial.println("Caso queira voltar ao menu, reinicie o programa ;)");
   }
}
 while(contador != 0); //Se o contador foi diferente de 0, o mesmo repete.
    
    
}

void loop()
{
 //sem intruções
}