// C05EX02.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int IDADE = 25;
  int *PIDADE = 0;

  PIDADE = &IDADE;

  printf("IDADE  = %i | End: = %x\n", IDADE, &IDADE);
  printf("IDADE  = %i | End: = %x\n", *PIDADE, &PIDADE);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
