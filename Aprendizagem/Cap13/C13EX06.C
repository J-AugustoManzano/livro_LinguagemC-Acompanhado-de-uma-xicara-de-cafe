// C12EX06.C

#include <stdio.h>
#include "stdgen.h"

int main(void)
{

  FILE *PTRARQ;
  char LETRA;

  PTRARQ = fopen("ARQTXT03.TEX", "w");

  printf("Informe uma frase: ");

  while ((LETRA = getchar()) != '\n')
    fputc(LETRA, PTRARQ);

  fflush(stdout);
  fclose(PTRARQ);

  printf("\n");
  pause(NULL);

  return 0;
}
