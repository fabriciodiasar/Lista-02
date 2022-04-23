#include <stdio.h>

int main() {
  unsigned char x, y;

  puts("Dê o valor de x:");
  scanf(" %c", &x);

  puts("\nDê o valor de y:");
  scanf(" %c", &y);

  y = x | y;

  printf("\n%c\n\n", y);

  return 0;
}
