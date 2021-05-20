// C13EXFBH.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int I;
  float X[8], Y[8], Z[8];

  FILE *PTRARQ1;
  FILE *PTRARQ2;

  PTRARQ1 = fopen("ARQ1.BIN ", "rb");
  fread(X, sizeof(X), 1, PTRARQ1);
  fclose(PTRARQ1);

  PTRARQ2 = fopen("ARQ2.BIN ", "rb");
  fread(Y, sizeof(Y), 1, PTRARQ1);
  fclose(PTRARQ1);

  for (I = 0; I <= 7; I ++)
    Z[I] = X[I] + Y[I];

  for (I = 0; I <= 7; I ++)
    printf("X[%2d] = %5.2f | Y[%2d] = %5.2f | Z[%2d] = %5.2f\n", I + 1, X[I], I + 1, Y[I], I + 1, Z[I]);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
