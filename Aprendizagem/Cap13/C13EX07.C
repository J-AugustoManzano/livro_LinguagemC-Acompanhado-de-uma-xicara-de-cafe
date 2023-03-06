// C12EX07.C

#include <stdio.h>
#include "stdgen.h"

int main(void)
{

  FILE *PTRARQ;
  char LETRA;

  PTRARQ = fopen("ARQTXT03.TEX", "r");

  printf("Frase = ");

  while((LETRA = fgetc(PTRARQ)) != EOF)
    printf("%c", LETRA);

  printf("\n");

  fflush(stdout);
  fclose(PTRARQ);

  pause(NULL);

  return 0;
}
