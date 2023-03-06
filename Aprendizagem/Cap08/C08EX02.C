// C08EX02.C

#include <stdio.h>
#include <string.h>

int main(void)
{

  char PAUSA;

  int I, J;
  char NOME[10][40], X[40];

  printf("Listagem de nomes\n\n");

  // Entrada dos nomes proprios

  for (I = 0; I <= 9; I++)
    {
      printf("Digite o %2do. nome: ", I + 1);
      scanf("%[^\n]", &NOME[I]);
      while ((getchar() != '\n') && (!EOF));
    }

  // Classificacao dos nomes

  for (I = 0; I <= 8; I++)
    for (J = I + 1; J <= 9; J++)
      if (strcmp(NOME[I], NOME[J]) > 0)
        {
          strcpy(X, NOME[I]);
          strcpy(NOME[I], NOME[J]);
          strcpy(NOME[J], X);
        }

  // Apresentacao dos nomes classificados

  printf("\n");
  for (I = 0; I <= 9; I++)
    printf("Nome: %2d --> %s\n", I + 1, NOME[I]);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
