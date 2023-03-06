// C07EX15.C

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  char PAUSA;

  int I, J, LINHAS, COLUNAS;
  int **PMATRIZ;

  printf("Entre a quantidade de linhas ...: ");
  scanf("%i", &LINHAS);
  while ((getchar() != '\n') && (!EOF));
  printf("Entre a quantidade de colunas ..: ");
  scanf("%i", &COLUNAS);
  while ((getchar() != '\n') && (!EOF));

  PMATRIZ = (int **) malloc(LINHAS * sizeof(int *));
  for (I = 0; I <= LINHAS-1; I++)
    PMATRIZ[I] = (int *) malloc(COLUNAS * sizeof(int));

  printf("\n");
  for (I = 0; I <= LINHAS-1; I++)
    {
      for (J = 0; J <= COLUNAS-1; J++)
        {
          printf("Entre um valor para a variavel MATRIZ[");
          printf("%i,%i] = ", I + 1, J + 1);
          scanf("%i", &PMATRIZ[I][J]);
          while ((getchar() != '\n') && (!EOF));
        }
    }

  printf("\n");
  printf("Os valores informados sao:\n\n");
  for (I = 0; I <= LINHAS-1; I++)
    {
      for (J = 0; J <= COLUNAS-1; J++)
        {
          printf("MATRIZ[%i,%i] = ", I + 1, J + 1);
          printf("%4i\n", PMATRIZ[I][J]);
        }
    }

  for (I = 0; I <= LINHAS-1; I++)
    free(PMATRIZ[I]);
  free(PMATRIZ);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
