#include <stdio.h>

int main () {
  char num;

  do {
    puts("\nInsira um valor de 1 a 7:");
    scanf(" %c", &num);  
    
    switch (num) {
      case '0': break;
      case '1': puts("\nDomingo."); break;
      case '2': puts("\nSegunda-feira."); break;
      case '3': puts("\nTerça-feira."); break;
      case '4': puts("\nQuarta-feira."); break;
      case '5': puts("\nQuinta-feira."); break;
      case '6': puts("\nSexta-feira."); break;
      case '7': puts("\nSábado."); break;
      default: puts("\nNúmero de dia não válido");
    }
    
  } while (num != '0');
  
  return 0;
}