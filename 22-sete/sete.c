#include <stdio.h>
#include <string.h>

#define TAM 10

int main() {
  char str[TAM];
  int num, sete = 0;

  puts("Insira o número:");
  scanf("%d", &num);

  sprintf(str, "%d", num);

  for(int i = 0; i < strlen(str); i++) {
    if(str[i] == '7') sete++;
  }

  printf("\nHá %d algarismo 7 no número.\n\n", sete);

  return 0;
}