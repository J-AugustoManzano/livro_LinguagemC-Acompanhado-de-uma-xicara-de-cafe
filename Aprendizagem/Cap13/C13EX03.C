// C12EX03.C

#include <stdio.h>
#include "stdgen.h"

int main(void)
{

  FILE *PTRARQ;
  char SAIDA;

  PTRARQ = fopen("ARQTXT01.TEX", "r");

  printf("Os caracteres do arquivo sao:\n\n");

  do
    {
      SAIDA = fgetc(PTRARQ);
      putchar(SAIDA);
    }
  while (SAIDA != EOF);
  printf("\n");

  fflush(stdout);
  fclose(PTRARQ);

  printf("\n");
  pause(NULL);

  return 0;
}
