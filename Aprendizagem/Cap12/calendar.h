// calendar.h
// Gestao de calendario

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <iso646.h>
#include <math.h>
#include <stdlib.h>

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

short sday(char DT[])
{
  return atoi(&DT[0]);
}

short smonth(char DT[])
{
  return atoi(&DT[3]);
}

short syear(char DT[])
{
  return atoi(&DT[6]);
}

bool leapyear(char DT[])
{
  if (syear(DT) % 400 == 0)
    return true;
  if (syear(DT) % 4 == 0 and syear(DT) % 100 != 0)
    return true;
  return false;
}

short lastday(char DT[])
{
  if (smonth(DT) == 2) // FEV
    return (leapyear(DT)) ? 29 : 28;
  if (smonth(DT) <= 7) // JUL
    return (smonth(DT) % 2 != 0) ? 31 : 30;
  return (smonth(DT) % 2 != 0) ? 30 : 31;
}

bool validate(char DT[])
{
  return syear(DT)  >=    1 and
         syear(DT)  <= 9999 and
         smonth(DT) >=    1 and
         smonth(DT) <=   12 and
         sday(DT)   >=    1 and
         sday(DT)   <= lastday(DT);
}

unsigned long int dateansi(char DT[])
{
  char  DATATEMP1[11];
  char  DATATEMP2[11];
  short I;
  strcpy(DATATEMP1, DT);
  for (I = 0; I <= 9; I++)
  {
    if (I < 4)
      DATATEMP2[I] = DATATEMP1[I + 6];
    DATATEMP2[4] = '/';
    if (I > 4 and I < 7)
      DATATEMP2[I] = DATATEMP1[I - 2];
    DATATEMP2[7] = '/';
    if (I > 7)
      DATATEMP2[I] = DATATEMP1[I - 8];
  }
  rmvachr(DATATEMP2, '/');
  return atol(DATATEMP2);
}

bool valjulday(unsigned long int DJ)
{
  if (DJ < 1721424 or DJ > 5373484)
    return false;
  else
    return true;
}

unsigned long int julianday(char DT[])
{
  short DIA, MES, ANO;
  float A, B, C, D, E, F;
  DIA = sday(DT);
  MES = smonth(DT);
  ANO = syear(DT);
  if (MES < 3)
    {
      ANO = ANO - 1;
      MES = MES + 12;
    }
  if (dateansi(DT) >= 2299161)
    {
      A = floor(ANO / 100);
      B = floor(A / 4);
      C = 2 - A + B;
    }
  else
    C = 0;
  D = floor(365.25 * (ANO + 4716));
  E = floor(30.6001 * (MES + 1));
  F = D + E + DIA + 0.5 + C - 1524.5;
  return (unsigned long int) F;
}

char *jultodate(unsigned long int DJ)
{
  static char DATA[11];
  float A, B, C, D, E, F, G, H, I, J, K;
  A = DJ;
  if (A > 2299160)
    {
      B = floor((A - 1867216.25) / 36524.25);
      C = A + 1 + B - floor(B / 4);
    }
  else
    C = A;
  D = C + 1524;
  E = floor((D - 122.1) / 365.25);
  F = floor(E * 365.25);
  G = floor((D - F) / 30.6001);
  H = D - F - floor(G * 30.6001);
  if (G < 14)
    I = G - 1;
  else
    I = G - 13;
  if (I > 2)
    J = E - 4716;
  else
    J = E - 4715;
  if (J > 0)
    K = J;
  else
    K = fabs(J + 1);
  sprintf(DATA, "%02.f/%02.f/%04.f", H, I, K);
  return DATA;
}

short dayweek(char DT[])
{
  return (short) ((julianday(DT) + 2) % 7);
}
