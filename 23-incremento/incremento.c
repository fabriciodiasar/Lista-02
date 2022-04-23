#include <stdio.h>

int main() {
  int a = 5, b = 5;

  puts("Incrementendado o número 5");
  printf("Etapa 1 : pré-incre = %d : pós-incre = %d\n", ++a, b++);
  printf("Etapa 2 : pré-incre = %d : pós-incre = %d\n", a, b);
  
  return 0;
}