// C12EX31.C

#include <stdio.h>
#include <string.h>
#include "stdgen.h"

void rmvachr(char CADEIA[], char CARACTERE)
{
  char *POS1 = CADEIA;
  char *POS2 = CADEIA;
  while (*POS1)
    {
      *POS2 = *POS1++;
      POS2 += (*POS2 != CARACTERE);
    }
  *POS2 = '\0';
}

int main(void)
{

  char MATRIC_CPT[8];
  char MATRIC_SPT[8];
  int  MATRIC_INT[6];

  int I, SOMA = 0, DV;

  printf("Informe matricula no formato 999.999: ");
  scanf("%s", &MATRIC_CPT);
  clrbufkey();

  strcpy(MATRIC_SPT, MATRIC_CPT);

  rmvachr(MATRIC_SPT, '.');

  for (I = 0; I <= 5; I++)
    MATRIC_INT[I] = MATRIC_SPT[I] - 48;

  for (I = 0; I <= 5; I++)
    {
      if (I % 2 != 0 && MATRIC_INT[I] * 2 > 9)
        SOMA += MATRIC_INT[I] * 2 - 9;
      else
        if (I % 2 != 0 && MATRIC_INT[I] * 2 <= 9)
          SOMA += MATRIC_INT[I] * 2;
      if (I % 2 == 0)
        SOMA += MATRIC_INT[I];
    }

  DV = (SOMA / 10 + 1) * 10 - SOMA;

  printf("\n");
  printf("Matricula com DV = %s-%i\n", MATRIC_CPT, DV);

  printf("\n");
  pause(NULL);

  return 0;
}
