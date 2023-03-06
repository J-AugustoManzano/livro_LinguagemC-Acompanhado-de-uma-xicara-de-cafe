// C12EX21.C

#include <stdio.h>
#include <string.h>
#include "stdgen.h"

int main(void)
{

  char CADEIA1[] = "Silvio";
  char CADEIA2[] = "Silvia";

  if (strcoll(CADEIA1, CADEIA2) == 0)
    printf("Cadeias iguais\n");
  else
    printf("Cadeias diferentes\n");

  printf("\n");
  pause(NULL);

  return 0;
}
