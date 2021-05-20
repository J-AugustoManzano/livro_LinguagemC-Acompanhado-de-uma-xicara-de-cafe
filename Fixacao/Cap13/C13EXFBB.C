// C13EXFBB.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int I, A[5], SOMA;
  FILE *PTRARQ;

  PTRARQ = fopen("DADOS1.BIN", "rb");

  fread(A, sizeof(A), 1, PTRARQ);

  SOMA = 0;
  I = 0;
  while (I <= 4)
    {
      SOMA += A[I];
      I++;
    }
  printf("Total no arquivo = %d\n", SOMA);

  fclose(PTRARQ);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
