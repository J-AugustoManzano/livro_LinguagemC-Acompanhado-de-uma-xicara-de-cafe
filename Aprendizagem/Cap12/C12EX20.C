// C12EX20.C

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stdgen.h"

int main(void)
{

  char CADEIA1[] = "Livro de linguagem C.";
  char *CADEIA2;

  CADEIA2 = strdup(CADEIA1);

  printf("%s\n", CADEIA2);

  printf("\n");
  pause(NULL);

  free(CADEIA2);

  return 0;
}
