// C12EX18.C

#include <stdio.h>
#include <string.h>
#include "stdgen.h"

int main(void)
{

  char CADEIA1[] = "Livro de linguagem C.";
  char CADEIA2[] = "Livro d";
  short POSICAO;

  POSICAO = strspn(CADEIA1, CADEIA2);

  printf("Posicao a partir de = %i\n", POSICAO);

  printf("\n");
  pause(NULL);

  return 0;
}
