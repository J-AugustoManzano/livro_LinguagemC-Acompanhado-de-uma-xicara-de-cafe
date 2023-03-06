// C12EX04.C

#include <stdio.h>
#include <ctype.h>
#include "stdgen.h"

int main(void)
{

  char CARACTERE;
  short RETORNO;

  printf("Acione a tecla <Ctrl> com outro caractere: ");
  scanf("%c", &CARACTERE);
  clrbufkey();

  RETORNO = isalpha(CARACTERE);

  if (RETORNO == 0)
    printf("O caractere \'%c\' e' de controle\n", CARACTERE);
  else
    printf("O caractere \'%c\'  nao e' de controle\n", CARACTERE);

  printf("\n");
  pause(NULL);

  return 0;
}
