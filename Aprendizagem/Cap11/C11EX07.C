// C11EX07.C

#include <stdio.h>
#include <stdbool.h>
#include "stdgen.h"

int main(void)
{

  bool X;
  short Y;

  do
    {
      printf("Informe 1 (um) ou 0 (zero): ");
      scanf("%d", &Y);
      clrbufkey();
    }
  while (Y != 1 && Y != 0);

  if (Y == 1)
    X = true;
  else
    X = false;

  if (X == true)
    printf("\nX = Verdadeiro.\n");
  else
    printf("\nX = Falso.\n");

  printf("\n");
  pause(NULL);

  return 0;
}
