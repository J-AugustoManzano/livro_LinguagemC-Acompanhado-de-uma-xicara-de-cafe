// C10EXFCD.C

#include <stdio.h>

float tempctof(float C)
{
  float F;
  return F = (9 * C + 160) / 5;
}

int main(void)
{

  char PAUSA;

  float TC;

  printf("Calculo de Temepratura\n\n");

  printf("Entre temperatura Celcius: ");
  scanf("%f", &TC);
  while ((getchar() != '\n') && (!EOF));

  printf("\nTemperatura em Fahrenheit = %6.2f\n", tempctof(TC));

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
