// C12EX07.C

#include <stdio.h>
#include <ctype.h>
#include "stdgen.h"

int main(void)
{

  char CARACTERE;
  short RETORNO;

  printf("Informe um caractere: ");
  scanf("%c", &CARACTERE);
  clrbufkey();

  RETORNO = isprint(CARACTERE);

  if (RETORNO != 0)
    printf("O caractere \'%c\' e' imprimivel\n", CARACTERE);
  else
    printf("O caractere \'%c\'  nao e' imprimivel\n", CARACTERE);

  printf("\n");
  pause(NULL);

  return 0;
}
