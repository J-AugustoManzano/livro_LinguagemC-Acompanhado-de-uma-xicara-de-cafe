// C03EXFXD.C

#include <stdio.h>
#include <string.h>

int main(void)
{

  char PAUSA;

  int I, J;
  char A[12][40], B[11][40], C[23][40], X[23];

  printf("Listagem de nomes\n\n");

  for (I = 0; I <= 11; I ++)
    {
      printf("Digite o %2do. nome feminino ...: ", I + 1);
      scanf("%[^\n]", &A[I]);
      while ((getchar() != '\n') && (!EOF));
    }

  for (I = 0; I <= 10; I ++)
    {
      printf("Digite o %2do. nome masculino ..: ", I + 1);
      scanf("%[^\n]", &B[I]);
      while ((getchar() != '\n') && (!EOF));
    }

  for (I = 0; I <= 22; I ++)
    if (I <= 11)
      strcpy(C[I], A[I]);
    else
      strcpy(C[I], B[I - 12]);

  for (I = 0; I <= 21; I ++)
    for (J = I + 1; J <= 22; J ++)
      if (strcmp(C[I], C[J]) > 0)
        {
          strcpy(X, C[I]);
          strcpy(C[I], C[J]);
          strcpy(C[J], X);
        }

  printf("\n");
  for (I = 0; I <= 22; I ++)
    printf("Nome: %2d --> %s\n", I + 1, C[I]);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
