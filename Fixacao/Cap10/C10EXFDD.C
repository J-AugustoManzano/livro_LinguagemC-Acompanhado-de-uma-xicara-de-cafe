// C10EXFDD.C

#include <stdio.h>

float tempftoc(float F)
{
  float C;
  return C = (F - 32) * 5 / 9;
}

int main(void)
{

  char PAUSA;

  float TF;

  printf("Calculo de Temepratura\n\n");

  printf("Entre temperatura Fahrenheit: ");
  scanf("%f", &TF);
  while ((getchar() != '\n') && (!EOF));

  printf("\nTemperatura em Celcius = %6.2f\n", tempftoc(TF));

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
