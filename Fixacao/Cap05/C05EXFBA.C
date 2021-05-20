// C05EXFBA.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int X;
  int *PX = 0;

  printf("Informe o um valor inteiro: ");
  scanf("%d", &X);
  while ((getchar() != '\n') && (!EOF));

  PX = &X;

  printf("Valor %i armazenado em %x\n", X, PX);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
