// C12EX11.C

#include <stdio.h>
#include <ctype.h>
#include "stdgen.h"

int main(void)
{

  char CARACTERE;
  short RETORNO;

  printf("Informe um digito hexadecimal (0 - F): ");
  scanf("%c", &CARACTERE);
  clrbufkey();

  RETORNO = isxdigit(CARACTERE);

  if (RETORNO != 0)
    printf("O caractere \'%c\' e' hexadecimal\n", CARACTERE);
  else
    printf("O caractere \'%c\'  nao e' hexadecimal\n", CARACTERE);

  printf("\n");
  pause(NULL);

  return 0;
}
