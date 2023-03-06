// C12EX12.C

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stdgen.h"

int main(void)
{

  float NR_F;
  char NR_C[sizeof(NR_F)];

  do
    {
      printf("Entre um valor numerico: ");
      scanf("%s", &NR_C);
      clrbufkey();

      if (isdigit(NR_C[0]) == 0)
        printf("\nErro - entre apenas valor numerico!\n\n");
      else
        break;
    }
  while (true);

  NR_F = atof(NR_C);

  printf("\nResultado = %.2f\n", NR_F + 5);

  printf("\n");
  pause(NULL);

  return 0;
}
