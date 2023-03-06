// C02EX15.C

#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(void)
{

  char PAUSA;
  float V, H, R;

  printf("Entre a altura ...: ");
  scanf("%f", &H);
  while ((getchar() != '\n') && (!EOF));

  printf("Entre o raio .....: ");
  scanf("%f", &R);
  while ((getchar() != '\n') && (!EOF));

  V = H * PI * pow(R, 2);

  printf("Area do Cilindro .: %f\n", V);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
