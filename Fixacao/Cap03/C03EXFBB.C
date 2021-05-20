// C03EXFBB.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  unsigned int VALOR, RESTO;

  printf("Informe um valor inteiro: ");
  scanf("%d", &VALOR);
  while ((getchar() != '\n') && (!EOF));

  RESTO = VALOR - 2 * (VALOR / 2);

  if (RESTO == 0)
    printf("\nValor par\n");
  else
    printf("\nValor impar\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
