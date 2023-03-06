// C12EX17.C

#include <stdio.h>
#include <string.h>
#include "stdgen.h"

int main(void)
{

  char CADEIA1[] = "Livro de linguagem C.";
  char CADEIA2[] = "xyzn";
  char *RETORNO;

  RETORNO = strpbrk(CADEIA1, CADEIA2);

  printf("Sequencia = %s\n", RETORNO);

  printf("\n");
  pause(NULL);

  return 0;
}
