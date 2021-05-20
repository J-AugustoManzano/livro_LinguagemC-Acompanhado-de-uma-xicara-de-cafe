// C07EXFDD.C

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  char PAUSA;

  int I, J, TAMANHO;
  double **A;

  printf("Entre a quantidade de linhas e colunas ...: ");
  scanf("%i", &TAMANHO);
  while ((getchar() != '\n') && (!EOF));

  A = (double **) malloc(TAMANHO * sizeof(double *));
  for (I = 0; I <= TAMANHO - 1; I++)
    A[I] = (double *) malloc(TAMANHO * sizeof(double));

  printf("\n");
  for (I = 0; I <= TAMANHO - 1; I++)
    {
      for (J = 0; J <= TAMANHO - 1; J++)
        {
          printf("Entre um valor para a variavel A[");
          printf("%i,%i] = ", I + 1, J + 1);
          scanf("%lf", &A[I][J]);
          while ((getchar() != '\n') && (!EOF));
        }
    }

  printf("\n");
  printf("Os valores informados sao:\n\n");
  for (I = 0; I <= TAMANHO - 1; I++)
    {
      for (J = 0; J <= TAMANHO - 1; J++)
        {
          if (J + I == TAMANHO - 1)
            {
              printf("A[%i,%i] = ", I + 1, J + 1);
              printf("%6.2lf\n", A[I][J]);
            }
        }
    }

  for (I = 0; I <= TAMANHO - 1; I++)
    free(A[I]);
  free(A);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
