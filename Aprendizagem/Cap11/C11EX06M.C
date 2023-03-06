// C11EX06M.CPP

#include <stdio.h>
#include "calcm.h"

int main(void)
{
  char PAUSA;

  int N;

  printf("Entre um valor inteiro: ");
  scanf("%i", &N);
  while ((getchar() != '\n') && (!EOF));
  printf("\n");
  printf("Fatorial  ..: %4i\n", fatorial(N));
  printf("Somatorio ..: %4i\n", somatorio(N));

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
