// C12EX15.C

#include <stdio.h>
#include <string.h>
#include "stdgen.h"

int main(void)
{

  char CADEIA1[] = "Silvio";
  char CADEIA2[] = "Silvia";

  if (strncmp(CADEIA1, CADEIA2, 4) == 0)
    printf("Cadeias iguais\n");

  if (strncmp(CADEIA1, CADEIA2, 5) == 0)
    printf("Cadeias diferentes\n");

  printf("\n");
  pause(NULL);

  return 0;
}
