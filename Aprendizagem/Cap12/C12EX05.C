// C12EX05.C

#include <stdio.h>
#include <ctype.h>
#include "stdgen.h"

int main(void)
{

  char CARACTERE;
  short RETORNO;

  printf("Informe um caractere numerico: ");
  scanf("%c", &CARACTERE);
  clrbufkey();

  RETORNO = isdigit(CARACTERE);

  if (RETORNO != 0)
    printf("O caractere \'%c\' e' numerico\n", CARACTERE);
  else
    printf("O caractere \'%c\'  nao e' numerico\n", CARACTERE);

  printf("\n");
  pause(NULL);

  return 0;
}
