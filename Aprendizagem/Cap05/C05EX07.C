// C05EX07.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int IDADE = 25;
  int *PIDADE1 = 0;
  int *PIDADE2 = 0;

  PIDADE1 = &IDADE;
  PIDADE2 = PIDADE1;

  printf("Variavel IDADE ....: %d\n", IDADE);
  printf("Ponteiro PIDADE1 ..: %x\n", PIDADE1);
  printf("Ponteiro PIDADE2 ..: %x\n", PIDADE2);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
