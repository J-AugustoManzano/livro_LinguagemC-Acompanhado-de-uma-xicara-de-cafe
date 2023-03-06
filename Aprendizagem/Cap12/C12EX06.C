// C12EX06.C

#include <stdio.h>
#include <ctype.h>
#include "stdgen.h"

int main(void)
{

  char CARACTERE;
  short RETORNO;

  printf("Informe um caractere alfabético minusculo: ");
  scanf("%c", &CARACTERE);
  clrbufkey();

  RETORNO = islower(CARACTERE);

  if (RETORNO != 0)
    printf("O caractere \'%c\' e' minusculo\n", CARACTERE);
  else
    printf("O caractere \'%c\'  nao e' valido\n", CARACTERE);

  printf("\n");
  pause(NULL);

  return 0;
}
