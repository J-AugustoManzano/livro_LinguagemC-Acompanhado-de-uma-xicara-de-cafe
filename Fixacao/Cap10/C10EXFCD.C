// C10EXFCD.C

#include <stdio.h>

void tempftoc(float F, float *C)
{
  *C = (F - 32) * 5 / 9;
}

int main(void)
{

  char PAUSA;

  float TF, TC;

  printf("Calculo de Temepratura\n\n");

  printf("Entre temperatura Fahrenheit: ");
  scanf("%f", &TF);
  while ((getchar() != '\n') && (!EOF));

  tempftoc(TF, &TC);

  printf("\nTemperatura em Celcius = %6.2f\n", TC);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
