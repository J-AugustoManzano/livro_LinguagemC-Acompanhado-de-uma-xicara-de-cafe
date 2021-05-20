// C02EXFBE.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  double C, F;

  printf("Informe temperatura em escala Fahrenheit: ");
  scanf("%lf", &F);
  while ((getchar() != '\n') && (!EOF));

  C = ((F - 32) * 5) / 9;

  printf("\n");
  printf("Temperatura em escala Celcius: %6.1lf\n", C);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
