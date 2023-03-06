// C12EX30.C

#include <stdio.h>
#include <string.h>
#include "stdgen.h"

int main(void)
{

  char FRASE[81];

  printf("Informe uma frase e encerre-a com a tecla <Enter>\n\n");

  fgets(FRASE, sizeof(FRASE), stdin);

  FRASE[strcspn(FRASE, "\n")] = '\0';

  fputs(FRASE, stdout);

  printf("\n");
  pause(NULL);

  return 0;
}
