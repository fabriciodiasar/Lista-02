#include <stdio.h>

int main() { 
  
  for (int c = 10; c <= 100; c++) 
    printf("\n%d° Celsius = %.1f° Fahrenheit.", c, c * 1.8 + 32);

  return 0;
}