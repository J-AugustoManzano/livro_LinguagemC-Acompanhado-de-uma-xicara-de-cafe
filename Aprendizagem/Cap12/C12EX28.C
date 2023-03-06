// C12EX28.C
// Versao C99

#include <stdio.h>
#include "stdgen.h"

int main(void)
{

  char FRASE[81];

  printf("Informe uma frase e encerre-a com a tecla <Enter>\n\n");

  gets(FRASE);
  puts(FRASE);

  printf("\n");
  pause(NULL);

  return 0;
}
