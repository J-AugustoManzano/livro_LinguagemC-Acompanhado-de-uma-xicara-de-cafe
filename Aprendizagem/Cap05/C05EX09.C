// C05EX09.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int A = 1;
  int *PA = 0;

  PA = &A;
  printf("Endereco atual ...............: %x\n", PA);

  PA++;
  printf("Proximo endereco a frente ....: %x\n", PA);

  PA++;
  printf("Proximo endereco a frente ....: %x\n", PA);

  PA--;
  printf("Endereco anterior para tras ..: %x\n", PA);

  PA--;
  printf("Endereco anterior para tras ..: %x\n", PA);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
