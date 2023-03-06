// C12EX08.C

#include <stdio.h>
#include <ctype.h>
#include "stdgen.h"

int main(void)
{

  char CARACTERE;
  short RETORNO;

  printf("Informe um simbolo de pontuacao: ");
  scanf("%c", &CARACTERE);
  clrbufkey();

  RETORNO = ispunct(CARACTERE);

  if (RETORNO != 0)
    printf("O caractere \'%c\' e' simbolo de pontuacao\n", CARACTERE);
  else
    printf("O caractere \'%c\'  nao e' valido\n", CARACTERE);

  printf("\n");
  pause(NULL);

  return 0;
}
