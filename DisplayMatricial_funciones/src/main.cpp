#include <Arduino.h>

#define Ncolumna 		5
#define Nfila 		5

int columna [Ncolumna]={6,5,4,3,2};
int fila [Nfila]={12,11,10,9,8};

void setup() 
{
  for(int i = 0; i < Ncolumna; i++)
  {
		pinMode(columna[i], OUTPUT);
  }

   for(int i = 0; i < Nfila; i++)
  {
		pinMode(fila[i], OUTPUT);
  }
}
void loop() 
{
  letraF();
}

void letraF()
{
  limpieza();
  digitalWrite(columna[2], LOW);
  digitalWrite(fila[0], HIGH);
  delay(5);

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

void limpieza()
{
  for(int i = 0; i < Ncolumna; i++)
  {
    digitalWrite(columna[i], HIGH);
  }

  for(int i = 0; i < Nfila; i++)
  {
    digitalWrite(fila[i], LOW);
  }
}

