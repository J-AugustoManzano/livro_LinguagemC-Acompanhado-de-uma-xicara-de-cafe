// C12EX02.C

#include <stdio.h>
#include <ctype.h>
#include "stdgen.h"

int main(void)
{

  char CARACTERE;
  short RETORNO;

  printf("Informe um caractere alfabetico: ");
  scanf("%c", &CARACTERE);
  clrbufkey();

  RETORNO = isalpha(CARACTERE);

  if (RETORNO != 0)
    printf("O caractere \'%c\' e' alfabetico\n", CARACTERE);
  else
    printf("O caractere \'%c\'  nao e' alfabetico\n", CARACTERE);

  printf("\n");
  pause(NULL);

  return 0;
}
