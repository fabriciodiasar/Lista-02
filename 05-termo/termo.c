#include <stdio.h>

int main () {
  int maior, menor, num;

  maior = menor = 0;
   
  while(1) {  
    puts("\nDigite o número: ");
    scanf("%d", &num);

    if (num == 0) break;

    if(maior == 0 && menor == 0) {
      maior = menor = num;
    } else if(num > maior) {
      maior = num;
    } else {
      menor = num;
    }
  }
  
  printf("\nO maior número é %d, e o menor é %d.\n\n", maior, menor);
 
  return 0;
 }
