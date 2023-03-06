// C12EX11.C

#include <stdio.h>
#include "stdgen.h"

int main(void)
{

  FILE *PTRARQ;
  int I;
  float A[8], B[8];

  PTRARQ = fopen("ARQTXT06.TEX", "w+");

  for (I = 0; I <= 7; I++)
    {
       printf("Entre o %io. valor: ", I + 1);
       scanf("%f", &A[I]);
       clrbufkey();
       fprintf(PTRARQ, "%f\n", A[I]);
    }

  printf("\n");
  rewind(PTRARQ);

  for (I = 0; I <= 7; I++)
    {
       printf("%io. valor armazenado: ", I + 1);
       fscanf(PTRARQ, "%f", &B[I]);
       printf("%7.2f\n", B[I]);
    }

  fflush(stdout);
  fclose(PTRARQ);

  remove("ARQTXT06.TEX");

  printf("\n");
  pause(NULL);

  return 0;
}
