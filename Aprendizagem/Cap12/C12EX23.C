// C12EX23.C

#include <stdio.h>
#include <string.h>
#include "stdgen.h"

int main(void)
{

  char CADEIA1[] = "Estudo de linguagem C ";
  char CADEIA2[] = "- livro de programacao.";
  char CADEIA3[sizeof(CADEIA1) + sizeof(CADEIA2)];

  sprintf(CADEIA3, "%s%s", CADEIA1, CADEIA2);

  printf("-> %s\n", CADEIA3);

  printf("\n");
  pause(NULL);

  return 0;
}
