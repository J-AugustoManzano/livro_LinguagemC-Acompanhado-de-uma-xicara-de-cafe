// C12EX08.C

#include <stdio.h>
#include "stdgen.h"

int main(void)
{

  FILE *PTRARQ;
  int I, A[5], B[5];

  PTRARQ = fopen("ARQTXT04.TEX", "w+");

  for (I = 0; I <= 4; I++)
    {
       printf("Entre o %io. valor: ", I + 1);
       scanf("%i", &A[I]);
       clrbufkey();
       fprintf(PTRARQ, "%i\n", A[I]);
    }

  printf("\n");
  rewind(PTRARQ);

  for (I = 0; I <= 4; I++)
    {
       printf("%io. valor armazenado: ", I + 1);
       fscanf(PTRARQ, "%i", &B[I]);
       printf("%i\n", B[I]);
    }

  fflush(stdout);
  fclose(PTRARQ);

  printf("\n");
  pause(NULL);

  return 0;
}
