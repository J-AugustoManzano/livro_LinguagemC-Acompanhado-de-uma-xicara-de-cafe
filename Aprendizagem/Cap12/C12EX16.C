// C12EX16.C

#include <stdio.h>
#include <string.h>
#include "stdgen.h"

int main(void)
{

  char CADEIA1[] = "Livro de linguagem C.";
  char CADEIA2[] = "Curso";

  strncpy(CADEIA1, CADEIA2, 4);

  printf("%s\n", CADEIA1);

  printf("\n");
  pause(NULL);

  return 0;
}
