int tabuadaEscolhida;


void setup()
{
  
  Serial.begin(9600);

 Serial.println("Bem vinda a tabuada ;)");
 Serial.println("Digite a tabuada que vc deseja ver:");
  while(!Serial.available()){}
  tabuadaEscolhida = Serial.parseInt();
  
  for(int contador = 1; contador <= 10; contador++)
  {
  // 2 X 1 = 2
  Serial.println(String(tabuadaEscolhida) + " X " + String(contador) + " = " + String(tabuadaEscolhida * contador));
  } 
    
    
}    
    
void loop(){}     