// C12EX32.C

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

  char MATRIC_CPT[10];
  char MATRIC_SPT[8];
  int  MATRIC_INT[7];

  int I, SOMA = 0, DVC, DVE;

  printf("Informe matricula no formato 999.999-9: ");
  scanf("%s", &MATRIC_CPT);
  clrbufkey();

  strcpy(MATRIC_SPT, MATRIC_CPT);

  rmvachr(MATRIC_SPT, '.');
  rmvachr(MATRIC_SPT, '-');

  for (I = 0; I <= 6; I++)
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

  DVC = (SOMA / 10 + 1) * 10 - SOMA;
  DVE = MATRIC_INT[6];

  printf("\n");
  if (DVC == DVE)
    printf("Numero de matricula valido\n");
  else
    printf("Numero de matricula invalido\n");

  printf("\n");
  pause(NULL);

  return 0;
}
