// BIBLIO_CALCG.C

#include <stdio.h>
#include "calcg.h"

// Fatorial

int fatorial(int N)
{
  int I, FAT = 1;
  for (I = 1; I <= N; I++)
    FAT *= I;
  return FAT;
}

// Somatorio

int somatorio(int N)
{
  int I, SOMAT = 0;
  for (I = 1; I <= N; I++)
    SOMAT += I;
  return SOMAT;
}
