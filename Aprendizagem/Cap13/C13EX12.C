// C12EX12.C

#include <stdio.h>
#include "stdgen.h"

int main(void)
{

  FILE *PTRARQ;
  int I;
  float A[10];

  PTRARQ = fopen("ARQBIN01.BIN", "wb");

  for (I = 0; I <= 9; I++)
    {
      printf("Digite o elemento - %2d: ", I + 1);
      scanf("%f", &A[I]);
      clrbufkey();
   }

  fwrite(&A, sizeof(A), 1, PTRARQ);

  fflush(stdout);
  fclose(PTRARQ);

  printf("\n");
  pause(NULL);

  return 0;
}
