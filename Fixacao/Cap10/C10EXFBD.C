// C10EXFBD.C

#include <stdio.h>

void tempftoc(float F)
{
  float C;
  C = (F - 32) * 5 / 9;
  printf("\nTemperatura em Celcius = %6.2f\n", C);
}

int main(void)
{

  char PAUSA;

  float TF;

  printf("Calculo de Temepratura\n\n");

  printf("Entre temperatura Fahrenheit: ");
  scanf("%f", &TF);
  while ((getchar() != '\n') && (!EOF));

  tempftoc(TF);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
