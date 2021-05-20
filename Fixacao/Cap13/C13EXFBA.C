// C13EXFBA.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int I, A[5];
  FILE *PTRARQ;

  PTRARQ = fopen("DADOS1.BIN", "wb");

  I = 0;
  while (I <= 4)
    {
      printf("Informe valor inteiro - %2d: ", I + 1);
      scanf("%d", &A[I]);
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
