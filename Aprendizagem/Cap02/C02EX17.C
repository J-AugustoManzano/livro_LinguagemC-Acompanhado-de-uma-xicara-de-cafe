// C02EX17.C

/**
  O programa seguinte demonstra o uso de linhas de comentarios usadas
  em um codigo de programa escrito na linguagem de programacao C.
  O programa apresenta a quantidade de bits de cada tipo de dado
  suportado em C.
*/

/*
  Programa .......: C02EX17.C
  Autor(es) ......: Augusto Manzano
  Data ...........: 13/05/2012
  Versao .........: 1.0
  Revisao.........: 10/06/2014
*/

#include <stdio.h>

int main(void)
{

  char PAUSA;

  unsigned short int US;
  short              SH;
  short int          SI;
  signed short int   SS;
  signed int         SD;
  unsigned int       UI;
  unsigned long int  UL;
  int                IN;
  long               LO;
  signed long int    SL;
  long int           LI;
  char               CH;
  signed char        SC;
  unsigned char      UC;
  float              FL;
  double             DO;
  long double        LD;

  printf("Tipos de dados e seus tamanhos em bits.\n\n");

  printf("unsigned short int = %3i\n", sizeof(US) * 8);
  printf("short              = %3i\n", sizeof(SH) * 8);
  printf("short int          = %3i\n", sizeof(SI) * 8);
  printf("signed short int   = %3i\n", sizeof(SS) * 8);
  printf("signed int         = %3i\n", sizeof(SD) * 8);
  printf("unsigned int       = %3i\n", sizeof(UI) * 8);
  printf("unsigned long int  = %3i\n", sizeof(UL) * 8);
  printf("int                = %3i\n", sizeof(IN) * 8);
  printf("long               = %3i\n", sizeof(LO) * 8);
  printf("long int           = %3i\n", sizeof(LI) * 8);
  printf("signed long int    = %3i\n", sizeof(SL) * 8);
  printf("char               = %3i\n", sizeof(CH) * 8);
  printf("signed char        = %3i\n", sizeof(SC) * 8);
  printf("unsigned char      = %3i\n", sizeof(UC) * 8);
  printf("float              = %3i\n", sizeof(FL) * 8);
  printf("double             = %3i\n", sizeof(DO) * 8);
  printf("long double        = %3i\n", sizeof(LO) * 8);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
