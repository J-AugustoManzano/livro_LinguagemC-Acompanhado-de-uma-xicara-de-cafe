// C12EX14.C

#include <stdio.h>
#include <string.h>
#include "stdgen.h"

int main(void)
{

  char CADEIA1[] = "Estudo de linguagem C ";
  char CADEIA2[] = "- livro de programacao.";

  strncat(CADEIA1, CADEIA2, 7);

  printf("-> %s\n", CADEIA1);

  printf("\n");
  pause(NULL);

  return 0;
}
