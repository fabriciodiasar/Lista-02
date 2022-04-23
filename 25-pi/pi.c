#include <stdio.h>

int main() {
  float pi = 4;
  int i = 1;
  
  puts ("| Termo | π  ");
  
  while (1) {   
    printf("|   %i   | %.2f  \n", i, pi);
    
    i++;
    pi = pi - ((float) 4 / (i + (i - 1)));
  };
  
  return 0;
}