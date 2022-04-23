#include <stdio.h>
#include <math.h>

int main() {
  int parcela, quociente;
  float entrada, valor, resto;

  puts("\nInsira o valor do produto:");
  scanf("%f", &valor);

  quociente = valor / 3;
  resto = fmod(valor, 3);

  entrada = quociente + resto;
  parcela = valor - entrada;

  if (parcela % 2 != 0) {
    entrada++;
    parcela--;
  }

  parcela = parcela / 2;

  printf("\nA entrada será de R$%.2f, e as parcelas serão de R$%d cada.\n\n", entrada, parcela);
  
  return 0;
}