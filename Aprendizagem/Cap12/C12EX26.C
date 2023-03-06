// C12EX26.C

#include <stdio.h>
#include "stdgen.h"

int main(void)
{

  char CARACTERE;

  printf("Informe um caractere alfanumerico ....: ");
  CARACTERE = getchar();
  clrbufkey();

  printf("O caractere informado corresponde a ..: ");
  putchar(CARACTERE);
  printf("\n");

  printf("\n");
  pause(NULL);

  return 0;
}
