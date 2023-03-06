// C12EX13.C

#include <stdio.h>
#include "stdgen.h"

int main(void)
{

  FILE *PTRARQ;
  int I;
  float A[10];

  PTRARQ = fopen("ARQBIN01.BIN", "rb");

  fread(&A, sizeof(A), 1, PTRARQ);

  for (I = 0; I <= 9; I++)
    printf("O elemento %2d equivale a: %6.2f\n", I + 1, A[I]);

  fflush(stdout);
  fclose(PTRARQ);

  printf("\n");
  pause(NULL);

  return 0;
}
