// C12EX13.C

#include <stdio.h>
#include <string.h>
#include "stdgen.h"

int main(void)
{

  char CADEIA1[] = "Estudo de linguagem C";
  char CADEIA2[] = "livro";
  short POSICAO;

  POSICAO = strcspn(CADEIA1, CADEIA2);

  printf("Posicao de  coincidencia: %i\n", POSICAO);

  printf("\n");
  pause(NULL);

  return 0;
}
