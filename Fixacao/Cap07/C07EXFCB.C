// C07EXFCB.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  float A[4][4], B[4][4], C[4][4];
  int I, J;

  printf("\nInforme dados da matriz A\n");
  for (I = 0; I <= 3; I ++)
    {
      printf("\nColuna ..: %d\n", I + 1);
      for (J = 0; J <= 3; J ++)
        {
          printf("Linha ...: %d = ", J + 1);
          scanf("%f", &A[I][J]);
          while ((getchar() != '\n') && (!EOF));
       }
    }

  printf("\nInforme dados da matriz B\n");
  for (I = 0; I <= 3; I ++)
    {
      printf("\nColuna ..: %d\n", I + 1);
      for (J = 0; J <= 3; J ++)
        {
          printf("Linha ...: %d = ", J + 1);
          scanf("%f", &B[I][J]);
          while ((getchar() != '\n') && (!EOF));
        }
    }

  for (I = 0; I <= 3; I ++)
    for (J = 0; J <= 3; J ++)
      C[I][J] = A[I][J] - B[I][J];

  printf("\nResultados\n");
  for (I = 0; I <= 3; I ++)
    {
      printf("\nColuna ..: %d\n", I + 1);
      for (J = 0; J <= 3; J ++)
        printf("Linha ...: %d %5.2f\n", J + 1, C[I][J]);
    }

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
