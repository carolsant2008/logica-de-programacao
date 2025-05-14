// C++ code
//

String nota = "";
String frequencia = "";

float nota = 8 ;
float nota = 100;
float frequencia = 95;

void setup()
{
  Serial.begin(9000)
}

void loop()
{
  //Entrada
  Serial.println("Qual sua nota?")
  while(!Serial.available() );
  nota = Serial.parseFloat();
  
  Serial.println("Qual sua segunda nota?")
  while(!Serial.available() );
  nota = Serial.parseFloat();
  
  Serial.println("Qual a sua frequencia?")
  while(!Serial.available() );
  frnquencia = Serial.parseFloat();
  
  
  //Processamneto
  
  soma das notas = notas * (8 / 100);
  
  Serial.println("Qual a sua nota: "+ nota);
   Serial.println("Qual a sua segunda nota: "+ nota);
  
  
  // Não consegui fazer pois faltei na semana passada, e não consegui lembra alguns codigos por que estou nervosa
    
}