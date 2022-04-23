#include <stdio.h>

int main() {
  int quadrado;

  for (int i = 15; i <= 90; i++) {
    if (i % 4 == 0) {
      quadrado = i * i;
      printf("%d ", quadrado);
    }
  }

  return 0;
}