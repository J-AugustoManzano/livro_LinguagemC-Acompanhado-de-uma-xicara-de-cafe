// C03EX06.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int VALOR;

  printf("Entre um valor inteiro positivo: ");
  scanf("%i", &VALOR);
  while ((getchar() != '\n') && (!EOF));

  if (!(VALOR >= 0))
    printf("valor invalido\n");
  else
    printf("valor valido, voce informou %d\n", VALOR);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
