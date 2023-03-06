// C12EX09.C

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

  RETORNO = isspace(CARACTERE);

  if (RETORNO != 0)
    printf("O caractere \'%c\' e' um espaco em branco\n", CARACTERE);
  else
    printf("O caractere \'%c\'  nao e' espaco\n", CARACTERE);

  printf("\n");
  pause(NULL);

  return 0;
}
