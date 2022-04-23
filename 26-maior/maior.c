#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, maior = 0, menor = 0;
  
  puts("Adicione quantos números quiser:");
  
  while (1) {
    scanf("%d", &num);
      
    if ((num < 0) && (num % 2 == 0)) break;
    
    if(maior == 0 && menor == 0) {
      maior = menor = num;
    } else if(num > maior) {
      maior = num;
    } else {
      menor = num;
    }
  }
    
  printf("\n%d\n\n", maior * menor);
    
  return 0;   
}