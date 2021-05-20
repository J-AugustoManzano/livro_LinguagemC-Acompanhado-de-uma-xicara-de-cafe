// C02EXFBC.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  float C, F;

  printf("Informe temperatura em escala Celcius: ");
  scanf("%f", &C);
  while ((getchar() != '\n') && (!EOF));

  F = (9 * C + 160) / 5;

  printf("\n");
  printf("Temperatura em escala Fahrenheit: %9.3f\n", F);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
