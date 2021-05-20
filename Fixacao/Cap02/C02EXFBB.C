// C02EXFBB.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  double VALOR;
  long EXPOENTE;

  printf("Informe um valor: ");
  scanf("%lf", &VALOR);
  while ((getchar() != '\n') && (!EOF));

  EXPOENTE = (long)VALOR;

  printf("\n");
  printf("Expoente = %ld\n", EXPOENTE);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
