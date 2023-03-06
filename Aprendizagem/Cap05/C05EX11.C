// C05EX11.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int A = 1;
  int *PA = 0;

  PA = &A;
  printf("Endereco atual ...............: %x\n", PA);

  *(PA += 10);
  printf("Proximo endereco a frente ....: %x\n", PA);

  *(PA += 10);
  printf("Proximo endereco a frente ....: %x\n", PA);

  *(PA -= 10);
  printf("Endereco anterior para tras ..: %x\n", PA);

  *(PA -= 10);
  printf("Endereco anterior para tras ..: %x\n", PA);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
