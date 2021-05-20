// C13EXFBC.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int I, A[10], B[10], C[10];
  FILE *PTRARQ;

  PTRARQ = fopen("DADOS2.BIN", "wb");
  for (I = 0; I <= 9; I ++)
    {
      printf("Informe o %2do. valor da matriz A: ", I + 1);
      scanf("%d", &A[I]);
      while ((getchar() != '\n') && (!EOF));
    }
  for (I = 0; I <= 9; I ++)
    B[I] = A[I] * A[I];
  fwrite(B, sizeof(B), 1, PTRARQ);
  fclose(PTRARQ);

  PTRARQ = fopen("DADOS2.BIN", "rb");
  fread(C, sizeof(C), 1, PTRARQ);
  for (I = 0; I <= 9; I ++)
    printf("C[%2d] = %3d\n", I + 1, C[I]);
  fclose(PTRARQ);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
