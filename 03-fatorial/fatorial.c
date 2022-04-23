#include <stdio.h>

int main() {
  unsigned int F, fatorial;

  puts("\nDigite um número para saber o seu fatorial:");
  scanf("%u", &F);

  for (fatorial = 1; F > 1; F--) {
    fatorial = fatorial * F;
  }

  printf("\nO fatorial é %u.\n\n", fatorial);
  
  return 0;
}