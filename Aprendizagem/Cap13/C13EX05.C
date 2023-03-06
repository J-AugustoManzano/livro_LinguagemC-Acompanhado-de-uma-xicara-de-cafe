// C12EX05.C

#include <stdio.h>
#include "stdgen.h"

int main(void)
{

  FILE *PTRARQ;
  char PALAVRA[21];

  PTRARQ = fopen("ARQTXT02.TEX", "r");

  fscanf(PTRARQ, "%s", &PALAVRA);

  printf("Palavra = %s\n", PALAVRA);

  fflush(stdout);
  fclose(PTRARQ);

  printf("\n");
  pause(NULL);

  return 0;
}
