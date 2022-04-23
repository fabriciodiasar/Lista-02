#include <stdio.h>

int main() {
  int numero, u, d, c, m, dm;

  puts("Insira um número de cinco dígitos:");
  scanf("%d", &numero);

  dm = numero / 10000;
  m = (numero % 10000) / 1000;
  c = ((numero % 10000) % 1000) / 100;
  d = (((numero % 10000) % 1000) % 100) / 10;
  u = (((numero % 10000) % 1000) % 100) % 10;

  if ((dm && m && c && d && u == dm) || (dm == u && m == d) ) {
    printf("\n%d é um palíndromo!\n\n", numero);
    } else {
      printf("\n%d não é um palíndromo!\n\n", numero);
    }
  
  return 0;
}