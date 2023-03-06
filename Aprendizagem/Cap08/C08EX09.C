// C08EX09.C

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{

  int I;
  bool ACHA;
  char NOME[10][40], PESQ[40], RESP;

  printf("Pesquisa sequencial de nomes\n\n");

  // Entrada de dados alfanumericos

  for (I = 0; I <= 9; I++)
    {
      printf("Digite o %2do. nome: ", I + 1);
      scanf("%[^\n]", &NOME[I]);
      while ((getchar() != '\n') && (!EOF));
    }

  /* Processamento da pesquisa enquanto RESP = S */

  RESP = 'S';
  while (toupper(RESP) == 'S')
    {
      printf("\nEntre o nome a ser pesquisado: ");
      scanf("%[^\n]", &PESQ);
      while ((getchar() != '\n') && (!EOF));
      I = 0;
      ACHA = false;
      while (I <= 9 && ACHA == false)
        if (strcmp(PESQ, NOME[I]) == 0)
          ACHA = true;
        else
          I++;
      if (ACHA == true)
        printf("%s foi localizado na posicao %d", PESQ, I + 1);
      else
        printf("%s nao foi localizado", PESQ);
      printf("\n\nContinua? [S]IM/[N]AO: ");
      RESP = getchar();
      while ((getchar() != '\n') && (!EOF));
    }

  return 0;
}
