// C12EX01.C

#include <stdio.h>
#include "stdgen.h"

int main(void)
{

  FILE *PTRARQ;

  PTRARQ = fopen("ARQTXT01.TEX", "a");
  fclose(PTRARQ);

  printf("\n");
  pause(NULL);

  fflush(stdout);
  return 0;
}
