// C07EXFCA.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int A[5][3], B[5][3], C[5][3], I, J;

  printf("\nInforme dados da matriz A\n");
  for (I = 0; I <= 4; I ++)
    {
      printf("\nColuna ..: %d\n", I + 1);
      for (J = 0; J <= 2; J ++)
        {
          printf("Linha ...: %d = ", J + 1);
          scanf("%d", &A[I][J]);
          while ((getchar() != '\n') && (!EOF));
        }
    }

  printf("\nInforme dados da matriz B\n");
  for (I = 0; I <= 4; I ++)
    {
      printf("\nColuna ..: %d\n", I + 1);
      for (J = 0; J <= 2; J ++)
        {
          printf("Linha ...: %d = ", J + 1);
          scanf("%d", &B[I][J]);
          while ((getchar() != '\n') && (!EOF));
        }
    }

  for (I = 0; I <= 4; I ++)
    for (J = 0; J <= 2; J ++)
      C[I][J] = A[I][J] + B[I][J];

  printf("\nResultados\n");
  for (I = 0; I <= 4; I ++)
    {
      printf("\nColuna ..: %d\n", I + 1);
      for (J = 0; J <= 2; J ++)
        printf("Linha ...: %d %5d\n", J + 1, C[I][J]);
    }

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
