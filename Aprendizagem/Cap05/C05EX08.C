// C05EX08.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int IDADE = 25;
  int *PIDADE = 0;

  PIDADE = &IDADE;

  printf("Variavel IDADE ....: %d\n", IDADE);
  printf("Ponteiro PIDADE ...: %x\n", PIDADE);

  *PIDADE = 30;

  printf("Variavel IDADE ....: %d\n", IDADE);
  printf("Ponteiro PIDADE ...: %x\n", PIDADE);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
