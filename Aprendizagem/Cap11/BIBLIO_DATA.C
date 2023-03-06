// BIBLIO_DATA.C
// Arquivo com codigo das funcoes da biblioteca DATA.h

#include <stdio.h>
#include <stdbool.h>
#include "data.h"

struct SDATA DATA;

bool anobissexto(void)
{
  if (DATA.DATA_ANO % 400 == 0)
    return true;
  if (DATA.DATA_ANO % 4 == 0 && DATA.DATA_ANO % 100 != 0)
    return true;
  return false;
}

int ultimodiames(void)
{
  if (DATA.DATA_MES == 2) // FEV
    return (anobissexto()) ? 29 : 28;
  if (DATA.DATA_MES <= 7) // JUL
    return (DATA.DATA_MES % 2 != 0) ? 31 : 30;
  return (DATA.DATA_MES % 2 != 0) ? 30 : 31;
}

void validadata(void)
{
  DATA.DATA_OK = DATA.DATA_ANO >=    1 &&
                 DATA.DATA_ANO <= 9999 &&
                 DATA.DATA_MES >=    1 &&
                 DATA.DATA_MES <=   12 &&
                 DATA.DATA_DIA >=    1 &&
                 DATA.DATA_DIA <= ultimodiames();
}

void alteradata(short DIA, short MES, short ANO)
{
  DATA.DATA_DIA = DIA;
  DATA.DATA_MES = MES;
  DATA.DATA_ANO = ANO;
  validadata();
}

void mostradata(void)
{
  if (DATA.DATA_OK)
    {
      printf("%02i", DATA.DATA_DIA);
      printf("/");
      printf("%02i", DATA.DATA_MES);
      printf("/");
      printf("%04i\n", DATA.DATA_ANO);
    }
  else
    printf("**/**/****\n");
}
