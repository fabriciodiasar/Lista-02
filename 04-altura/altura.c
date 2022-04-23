#include <stdio.h>

int main() {
  int h_jose = 150, h_pedro = 110;

  char i = 1;

  while (1) {
    h_jose = h_jose + 2;
    h_pedro = h_pedro + 3;

    if (h_jose == h_pedro) 
      break; 
    else i++;
  }

  printf("\nEm %d anos, José e Pedro terão a mesma altura.\n\n", i);

  return 0;
}