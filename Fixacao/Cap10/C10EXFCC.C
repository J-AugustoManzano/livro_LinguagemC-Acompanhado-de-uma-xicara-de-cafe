// C10EXFCC.C

#include <stdio.h>

void tempctof(float C, float *F)
{
  *F = (9 * C + 160) / 5;
}

int main(void)
{

  char PAUSA;

  float TC, TF;

  printf("Calculo de Temepratura\n\n");

  printf("Entre temperatura Celcius: ");
  scanf("%f", &TC);
  while ((getchar() != '\n') && (!EOF));

  tempctof(TC, &TF);

  printf("\nTemperatura em Fahrenheit = %6.2f\n", TF);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
