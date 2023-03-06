// C08EX10.C

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{

  int I, J, MEIO, COMECO, FINAL;
  bool ACHA;
  char NOME[10][40], X[40], PESQ[40], RESP;

  printf("Leitura e pesquisa binaria de nomes\n\n");

  // Entrada dos nomes

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

  // Apresentacao dos nomes

  do
    {
      printf("\nEntre o nome a ser pesquisado: ");
      scanf("%[^\n]", &PESQ);
      while ((getchar() != '\n') && (!EOF));
      COMECO = 0;
      FINAL = 9;
      ACHA = false;
      while (COMECO <= FINAL && ACHA == false)
        {
          MEIO = (COMECO + FINAL) / 2;
          if (strcmp(PESQ, NOME[MEIO]) == 0)
            ACHA = true;
          else
            if (strcmp(PESQ, NOME[MEIO]) < 0)
              FINAL = MEIO - 1;
            else
              COMECO = MEIO + 1;
        }
      if (ACHA == true)
        printf("%s foi localizado na posicao %d", PESQ, MEIO + 1);
      else
        printf("%s nao foi localizado", PESQ);
      printf("\n\nContinua? [S]IM/[N]AO: ");
      RESP = getchar();
      while ((getchar() != '\n') && (!EOF));
    }
  while (toupper(RESP) == 'S');

  return 0;
}
