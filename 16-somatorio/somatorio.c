#include <stdio.h>

int main() {
  int portres = 0, porcinco = 0;

  for (int i = 0; i <= 200; i++){
    if (i % 3 == 0 && i <= 100) portres += i;
    if (i % 5 == 0 && i > 100) porcinco += i;
  }

  printf("\nSomatório de números do intervalo [0, 100] que são divisíveis por 3: %d\n", portres);
  
  printf("\nSomatório de números do intervalo ]100, 200] que são divisíveis por 5: %d\n", porcinco);

  return 0;
}