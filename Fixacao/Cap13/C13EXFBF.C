// C13EXFBF.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int I;
  float A[5];
  FILE *PTRARQ;
  PTRARQ = fopen("DADOS4.BIN ", "rb");
  fread(A, sizeof(A), 1, PTRARQ);
  I = 0;
  while (I <= 4)
    {
      printf("%do. elemento = %5.2f\n", I + 1, A[I]);
      I ++;
    }
  fclose(PTRARQ);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
