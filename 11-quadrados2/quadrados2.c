#include <stdio.h>

int main() {
  int quadrado, A, B;

  puts("\nInsira o valor mínimo:");
  if(scanf("%d", &A)){};

  puts("\nInsira o valor máximo:");
  if(scanf("%d", &B)){};

  if (B < A) {
    int v = B;
    B = A;
    A = B;
  }

  for (int i = A; i <= B; i++) {
    if (i % 4 == 0) {
      quadrado = i * i;
      printf("%d ", quadrado);
    }
  }

  return 0;
}