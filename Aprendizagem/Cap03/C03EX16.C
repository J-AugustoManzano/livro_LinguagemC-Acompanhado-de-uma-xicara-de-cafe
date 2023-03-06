// C03EX16.C

#include <stdio.h>
#include <iso646.h>

int main(void)
{

  char PAUSA;

  int NUMERO;
  printf("Entre um valor: ");
  scanf("%d", &NUMERO);
  while ((getchar() != '\n') && (!EOF));

  if (NUMERO >= 0 and NUMERO <= 9)
    printf("Valor na faixa de 0 a 9.\n");
  else
    printf("Valor fora da faixa de 0 a 9.\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
