// C12EX27.C

#include <stdio.h>
#include "stdgen.h"

int main(void)
{

  char CARACTERE;

  printf("Informe uma frase e encerre-a com a tecla <Enter>\n\n");
  do
    {
      CARACTERE = getchar();
      putchar(CARACTERE);
    }
  while (CARACTERE != '\n');

  printf("\n");
  pause(NULL);

  return 0;
}
