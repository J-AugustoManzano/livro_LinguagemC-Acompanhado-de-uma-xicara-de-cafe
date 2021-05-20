// C13EXFBD.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int A[4][5], B[4][5], C[4][5], D[4][5], I, J;
  FILE *PTRARQ;

  PTRARQ = fopen("DADOS3.BIN", "wb");

  printf("\nInforme dados da matriz A\n");
  for (I = 0; I <= 3; I ++)
    {
      printf("\nColuna ..: %d\n", I + 1);
      for (J = 0; J <= 4; J ++)
        {
          printf("Linha ...: %d = ", J + 1);
          scanf("%d", &A[I][J]);
          while ((getchar() != '\n') && (!EOF));
        }
    }

  printf("\nInforme dados da matriz B\n");
  for (I = 0; I <= 3; I ++)
    {
      printf("\nColuna ..: %d\n", I + 1);
      for (J = 0; J <= 4; J ++)
        {
          printf("Linha ...: %d = ", J + 1);
          scanf("%d", &B[I][J]);
          while ((getchar() != '\n') && (!EOF));
        }
    }

  for (I = 0; I <= 3; I ++)
    for (J = 0; J <= 4; J ++)
      C[I][J] = A[I][J] + B[I][J];

  fwrite(C, sizeof(C), 1, PTRARQ);
  fclose(PTRARQ);

  PTRARQ = fopen("DADOS3.BIN", "rb");
  fread(D, sizeof(D), 1, PTRARQ);

  printf("\nResultados\n");
  for (I = 0; I <= 3; I ++)
    {
      printf("\nColuna ..: %d\n", I + 1);
      for (J = 0; J <= 4; J ++)
        printf("Linha ...: %d %5d\n", J + 1, D[I][J]);
    }

  fclose(PTRARQ);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
