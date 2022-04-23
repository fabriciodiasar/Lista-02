#include <stdio.h>

int main() {
  int min, max;
  float media = 0;

  puts("\nInsira o limite mínimo:");
  scanf("%d", &min);

  puts("\nInsira o limite máximo:");
  scanf("%d", &max);

  for (int i = min; i <= max; i++) {
    media = media + i;
  }

  media = media / (max - min + 1);
  
  printf("\nA média do intervalo é %.2f.\n\n", media);

  return 0;
}