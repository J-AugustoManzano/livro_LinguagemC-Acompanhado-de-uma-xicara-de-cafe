// C05EX13.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int A = 10;
  int B = 20;
  int *PA = 0, *PB = 0;

  PA = &A;
  PB = &B;

  printf("Valor de PA = %d no endere�o = %x\n", *PA, &PA);
  printf("Valor de PB = %d no endere�o = %x\n", *PB, &PB);

  *PA = *PB;

  printf("Valor de PA = %d no endere�o = %x\n", *PA, &PA);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
