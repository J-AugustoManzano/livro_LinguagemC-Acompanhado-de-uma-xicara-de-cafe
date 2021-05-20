// C13EXFBG.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int I;
  float A[8], B[8];

  FILE *PTRARQ1;
  FILE *PTRARQ2;

  PTRARQ1 = fopen("ARQ1.BIN ", "wb");
  for (I = 0; I <= 7; I ++)
    {
      printf("Informe o %2do. valor da matriz A: ", I + 1);
      scanf("%f", &A[I]);
      while ((getchar() != '\n') && (!EOF));
    }
  fwrite(A, sizeof(A), 1, PTRARQ1);
  fclose(PTRARQ1);

  printf("\n");
  PTRARQ2 = fopen("ARQ2.BIN ", "wb");
  for (I = 0; I <= 7; I ++)
    {
      printf("Informe o %2do. valor da matriz B: ", I + 1);
      fflush(stdin); scanf("%f", &B[I]);
      while ((getchar() != '\n') && (!EOF));
    }
  fwrite(B, sizeof(B), 1, PTRARQ2);
  fclose(PTRARQ1);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
