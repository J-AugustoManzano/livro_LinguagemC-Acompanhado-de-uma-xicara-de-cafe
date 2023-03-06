// C12EX04.C

#include <stdio.h>
#include "stdgen.h"

int main(void)
{

  FILE *PTRARQ;
  char PALAVRA[21];

  PTRARQ = fopen("ARQTXT02.TEX", "w");

  printf("Informe uma palavra ate 20 caracteres: ");
  scanf("%s", &PALAVRA);
  clrbufkey();

  fprintf(PTRARQ, "%s", PALAVRA);

  fflush(stdout);
  fclose(PTRARQ);

  printf("\n");
  pause(NULL);

  return 0;
}
