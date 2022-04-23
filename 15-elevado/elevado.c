#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
  int expoente;
  double potencia;
  
  srand(time(0));
  expoente = rand() % 8;

  potencia = pow((double) 3, (double) expoente);

  printf("Potência de 3 elevado a %d = %.0lf.\n\n", expoente, potencia);
 
  return 0;
}