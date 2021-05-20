// C13EXFBE.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int I;
  float A[5];
  FILE *PTRARQ;
  PTRARQ = fopen("DADOS4.BIN", "wb");
  I = 0;
  while (I <= 4)
    {
      printf("Informe o elemento - %2d: ", I + 1);
      scanf("%f", &A[I]);
      while ((getchar() != '\n') && (!EOF));
      I++;
    }
  fwrite(A, sizeof(A), 1, PTRARQ);
  fclose(PTRARQ);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
