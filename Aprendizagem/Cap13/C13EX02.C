// C12EX02.C

#include <stdio.h>
#include "stdgen.h"

int main(void)
{

  FILE *PTRARQ;
  char ENTRADA;

  PTRARQ = fopen("ARQTXT01.TEX", "a");

  printf("Informe um caractere afanumerico: ");

  ENTRADA = getchar();
  clrbufkey();

  fputc(ENTRADA, PTRARQ);

  fflush(stdout);
  fclose(PTRARQ);

  printf("\n");
  pause(NULL);

  return 0;
}
