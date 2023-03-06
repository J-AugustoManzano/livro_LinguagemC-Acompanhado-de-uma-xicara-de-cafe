// C07EX24.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int VETOR[] = {0, 2, 4, 6, 8};
  int I, *PVET;

  PVET = &VETOR[0];

  for (I = 0; I <= 4; I++)
    printf("VETOR[%d] = %d\n", I, *(PVET + I));

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
