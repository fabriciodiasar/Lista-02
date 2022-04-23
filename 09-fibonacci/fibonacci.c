#include <stdio.h>

#define TAM 20

int main() {
  int atual = 1, anterior = 0, x = 0;

  for (int i = 0; i < TAM; i++) {
    atual = atual + anterior;
    anterior = x;
    x = atual;

    printf("%d ", atual);
  }

  return 0;
}