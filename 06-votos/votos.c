#include <stdio.h>

int main() {
  char votostotal, paulo, renata, brancos, nulos, voto, afirmacao;
  float porcentagem;

  votostotal = paulo = renata = brancos = nulos = 0;

  while (1) {
    puts("\nEm quem você quer votar?");
    scanf(" %c", &voto);

    if (voto < '0') break;

    puts("\nVocê tem certeza do seu voto? (s/n)");
    scanf(" %c", &afirmacao);
    if (afirmacao == 'n') continue;

    switch (voto) {
      case '5': paulo++; break;

      case '7': renata++; break;

      case '0': brancos++; break;

      default : nulos++;      
    }

    votostotal++;
  };

  porcentagem = ((float) paulo) * 100 / votostotal;
  printf("Paulo : %.2f%% dos votos.\n", porcentagem);
  
  porcentagem = ((float) renata) * 100 / votostotal;
  printf("Renata : %.2f%% dos votos.\n", porcentagem);
  
  porcentagem = ((float) brancos) * 100 / votostotal;
  printf("Brancos : %.2f%% dos votos.\n", porcentagem);
  
  porcentagem = ((float) nulos) * 100 / votostotal;
  printf("Nulos : %.2f%% dos votos.\n\n", porcentagem);

  return 0;
}