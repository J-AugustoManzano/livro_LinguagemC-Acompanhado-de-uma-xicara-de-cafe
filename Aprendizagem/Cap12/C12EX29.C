// C12EX29.C

#include <stdio.h>
#include "stdgen.h"

int main(void)
{

  char FRASE[81];

  printf("Informe uma frase e encerre-a com a tecla <Enter>\n\n");

  fgets(FRASE, sizeof(FRASE), stdin);
  fputs(FRASE, stdout);

  printf("\n");
  pause(NULL);

  return 0;
}
