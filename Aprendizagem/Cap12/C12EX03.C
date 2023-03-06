// C12EX03.C

#include <stdio.h>
#include <ctype.h>
#include "stdgen.h"

int main(void)
{

  char CARACTERE;
  short RETORNO;

  printf("Informe um caractere ASCII: ");
  scanf("%c", &CARACTERE);
  clrbufkey();

  RETORNO = isascii(CARACTERE);

  if (RETORNO != 0)
    printf("O caractere \'%c\' e' ASCII\n", CARACTERE);
  else
    printf("O caractere \'%c\'  nao e' ASCII\n", CARACTERE);

  printf("\n");
  pause(NULL);

  return 0;
}
