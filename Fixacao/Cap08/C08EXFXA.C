// C03EXFXA.C

#include <stdio.h>
#include <string.h>

int main(void)
{

  char PAUSA;

  int I, J;
  char A[12][40], X[12];

  printf("Listagem de nomes\n\n");

  for (I = 0; I <= 11; I ++)
    {
      printf("Digite o %2do. nome ..: ", I + 1);
      scanf("%[^\n]", &A[I]);
      while ((getchar() != '\n') && (!EOF));
    }

  for (I = 0; I <= 10; I ++)
    for (J = I + 1; J <= 11; J ++)
      if (strcmp(A[I], A[J]) < 0)
        {
          strcpy(X, A[I]);
          strcpy(A[I], A[J]);
          strcpy(A[J], X);
        }

  printf("\n");
  for (I = 0; I <= 11; I ++)
    printf("Nome: %2d --> %s\n", I + 1, A[I]);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
