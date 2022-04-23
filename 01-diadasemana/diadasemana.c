#include <stdio.h>

int main () {
  char num;

  while (1) {
    puts("\nInsira um valor de 1 a 7:");
    scanf(" %c", &num);

    if (num == '0') break;

    switch (num) {
      case '1': puts("\nDomingo."); break;
      case '2': puts("\nSegunda-feira."); break;
      case '3': puts("\nTerça-feira."); break;
      case '4': puts("\nQuarta-feira."); break;
      case '5': puts("\nQuinta-feira."); break;
      case '6': puts("\nSexta-feira."); break;
      case '7': puts("\nSábado."); break;
      default: puts("\nNúmero de dia não válido.");
    }
  }
  
  return 0;
}