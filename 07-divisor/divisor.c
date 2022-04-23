#include <stdio.h>

int main() {
  int n1, n2;
  float divisao;

  puts("\nDigite um número:");
  scanf("%d", &n1);

  puts("\nDigite um outro número que não seja nulo: ");
  scanf("%d", &n2);

  while (!n2) {
    puts("\nInsira um valor não nulo:");
    scanf("%d", &n2);
  }

  divisao = (float) n1 / n2;

  printf("\nO valor da divisão é %.2f.\n\n", divisao);
 
  return 0;
}