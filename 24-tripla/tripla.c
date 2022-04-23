#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int mdc (int a, int b) {
  if (a == b)
    return a;
  else if (a > b)
    return mdc(a - b, b);
  return mdc(b, a);
}

void valores (int a, int b) {
  int cateto1, cateto2, hipotenusa;
  
  if (mdc(a, b) == 1) {
    cateto1 = pow(a, 2) - pow(b, 2);
    cateto2 = 2 * a * b;
    hipotenusa = pow(a, 2) + pow(b, 2);

    if (hipotenusa <= 500) {
      printf("\nCateto 1 = %d, Cateto 2 = %d e Hipotenusa = %d", abs(cateto1), cateto2, hipotenusa);
      }
    }
}

int main () {
  for (int i = 1; i < 20; i++) {
    if (i % 2 == 0) {
      for (int j = 1; j < 20; j++) {
        if (j % 2 != 0) {
          valores(i, j);
        }
      }
    }
  }
  
  return 0;
}