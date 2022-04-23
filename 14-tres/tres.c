#include <stdio.h>

int main() {
  int quadrado, A, B;

  puts("\nInsira o valor mínimo:");
  scanf("%d", &A);

  puts("\nInsira o valor máximo:");
  scanf("%d", &B);

  if (B < A) {
    A = A ^ B;
    B = A ^ B;
    A = A ^ B;
  }

  for (int i = A; i <= B; i++) {
    if (i % 3 == 0) printf("%d ", i);
  }

  return 0;
}