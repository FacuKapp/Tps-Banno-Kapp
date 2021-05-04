#include <Arduino.h>

#define Ncolumna 		5                 //indicamos cantidad de columnas
#define Nfila 		5                   //indicamos cantidad de filas

int columna [Ncolumna]={6,5,4,3,2};   //arreglo indicando el pin a utilizar en las columnas  
int fila [Nfila]={12,11,10,9,8};      //arreglo indicando el pin a utilizar en las filas

void setup() 
{
  for(int i = 0; i < Ncolumna; i++)   // Pone como salida los led columna
  {
		pinMode(columna[i], OUTPUT);
  }

   for(int i = 0; i < Nfila; i++)   // Pone como salida los led fila
  {
		pinMode(fila[i], OUTPUT);
  }
}
void loop() 
{
  letraF();   // llama a la función letra f
}

void letraF()                     //para prender el led que queramos deberemos darle un 0 en la columa y un 1 en la fila
{
  limpieza();                     // llama a la función limpieza
  digitalWrite(columna[2], LOW);  //pone en bajo la columna 3 dandole masa a los led
  digitalWrite(fila[0], HIGH);    //pone en alto la fila 1 dandole positivo a los led
  delay(5);                       // delay de poco tiempo para que no se note el apagado del led en cada loop

  limpieza();
  digitalWrite(columna[2], LOW);
  digitalWrite(fila[1], HIGH);
  delay(5);

  limpieza();
  digitalWrite(columna[2], LOW);
  digitalWrite(fila[2], HIGH);
  delay(5);

  limpieza();
  digitalWrite(columna[2], LOW);
  digitalWrite(fila[3], HIGH);
  delay(5);

  limpieza();
  digitalWrite(columna[2], LOW);
  digitalWrite(fila[4], HIGH);
  delay(5);

  limpieza();
  digitalWrite(columna[3], LOW);
  digitalWrite(fila[0], HIGH);
  delay(5);

  limpieza();
  digitalWrite(columna[4], LOW);
  digitalWrite(fila[0], HIGH);
  delay(5);

  limpieza();
  digitalWrite(columna[3], LOW);
  digitalWrite(fila[2], HIGH);
  delay(5);

  limpieza();
  digitalWrite(columna[4], LOW);
  digitalWrite(fila[2], HIGH);
  delay(5);
}

void limpieza()                     //función para apagar todos los led
{
  for(int i = 0; i < Ncolumna; i++) //pone el alto todos los led de la columna 
  {
    digitalWrite(columna[i], HIGH); 
  }

  for(int i = 0; i < Nfila; i++) //pone en bajo todos los led de las filas 
  {
    digitalWrite(fila[i], LOW);
  }
}

