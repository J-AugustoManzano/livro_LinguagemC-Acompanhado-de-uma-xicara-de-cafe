// C12EX33.C

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

char mod11(char MATRIC_CPT[])
{

  char MATRIC_SPT[8];
  int  MATRIC_INT[6];
  int  I, SOMA = 0;
  char DV;

  strcpy(MATRIC_SPT, MATRIC_CPT);

  rmvachr(MATRIC_SPT, '.');

  for (I = 0; I <= 5; I++)
    MATRIC_INT[I] = MATRIC_SPT[I] - 48;

  for (I = 0; I <= 5; I++)
    SOMA += MATRIC_INT[I] * (7 - I);

  if ((SOMA % 11) == 0)
    DV = 48; // DV = 0
  if ((SOMA % 11) == 1)
    DV = 88; // DV = X
  if ((SOMA % 11) == 10)
    DV = 49; // DV = 1
  if ((11 - SOMA % 11) >= 2 && (11 - SOMA % 11) <= 9)
    DV = (11 - (SOMA % 11)) + 48;

  return DV;
}

int main(void)
{

  char MATRICULA[8], DV;

  printf("Informe matricula no formato 999.999: ");
  scanf("%s", &MATRICULA);
  clrbufkey();

  DV = mod11(MATRICULA);

  printf("\n");
  printf("Matricula com DV = %s-%c\n", MATRICULA, DV);

  printf("\n");
  pause(NULL);

  return 0;
}
