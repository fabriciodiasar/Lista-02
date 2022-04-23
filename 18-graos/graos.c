#include <stdio.h>
#include <math.h>

int main() {
  double somatorio = 0;

  for (int i = 0; i < 64; i++)
    somatorio += pow(2, i);
  
  printf("\nO somatório é de %.0lf grãos.\n\n", somatorio);
  
  return 0;
}