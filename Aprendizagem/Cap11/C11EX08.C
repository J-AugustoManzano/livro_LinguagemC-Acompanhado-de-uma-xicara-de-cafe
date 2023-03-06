// C11EX08.C

#include <stdio.h>
#include <stdlib.h>
#include "data.h"
#include "stdgen.h"

int main(void)
{

  struct SDATA DATA;
  char DTS[11];
  short DIA, MES, ANO;

  printf("Entre uma data no formato DD/MM/AAAA: ");
  scanf("%[^\n]", &DTS);
  clrbufkey();

  DIA = atoi(&DTS[0]);
  MES = atoi(&DTS[3]);
  ANO = atoi(&DTS[6]);

  alteradata(DIA, MES, ANO);
  mostradata();

  pause("Tecle <Enter> para encerrar... ");

  return 0;
}
