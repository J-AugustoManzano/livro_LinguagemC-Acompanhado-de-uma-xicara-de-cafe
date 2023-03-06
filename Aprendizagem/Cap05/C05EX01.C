// C05EX01.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int IDADE = 25;
  int *PIDADE = 0;

  PIDADE = &IDADE;

  printf("O valor idade %i esta armazenado no ", IDADE);
  printf("endereco de memoria %x\n", PIDADE);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
