// C10EXFBC.C

#include <stdio.h>

void tempctof(float C)
{
  float F;
  F = (9 * C + 160) / 5;
  printf("\nTemperatura em Fahrenheit = %6.2f\n", F);
}

int main(void)
{

  char PAUSA;

  float TC;

  printf("Calculo de Temepratura\n\n");

  printf("Entre temperatura Celcius: ");
  scanf("%f", &TC);
  while ((getchar() != '\n') && (!EOF));

  tempctof(TC);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
