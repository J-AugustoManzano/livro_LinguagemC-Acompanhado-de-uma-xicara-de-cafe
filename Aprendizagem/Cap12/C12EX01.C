// C12EX01.C

#include <stdio.h>
#include <ctype.h>
#include "stdgen.h"

int main(void)
{

  char CARACTERE;
  short RETORNO;

  printf("Informe um caractere alfanumerico: ");
  scanf("%c", &CARACTERE);
  clrbufkey();

  RETORNO = isalnum(CARACTERE);

  if (RETORNO != 0)
    printf("O caractere \'%c\' e' alfanumerico\n", CARACTERE);
  else
    printf("O caractere \'%c\'  nao e' alfanumerico\n", CARACTERE);

  printf("\n");
  pause(NULL);

  return 0;
}
