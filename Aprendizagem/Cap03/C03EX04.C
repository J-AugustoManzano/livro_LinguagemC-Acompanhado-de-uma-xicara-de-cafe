// C03EX04.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int NUMERO;
  printf("\nEntre um valor: ");
  scanf("%d", &NUMERO);
  while ((getchar() != '\n') && (!EOF));

  if (NUMERO >= 20 && NUMERO <= 90)
    printf("O valor esta entre 20 e 90.\n");
  else
    printf("O valor nao esta entre 20 e 90.\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
