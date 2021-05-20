// C03EXFBH.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  unsigned short int NUMERO;

  printf("Entre um valor: ");
  scanf("%d", &NUMERO);
  while ((getchar() != '\n') && (!EOF));

  if (NUMERO >= 1 && NUMERO <= 1)
    printf("O valor esta entre 1 e 9.\n");
  else
    printf("O valor nao esta entre 1 e 9.\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
