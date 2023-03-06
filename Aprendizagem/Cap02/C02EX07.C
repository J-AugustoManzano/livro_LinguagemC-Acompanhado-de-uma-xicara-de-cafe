// C02EX07.C

#include <stdio.h>

int main(void)
{

  char PAUSA;
  float HT, VH, PD, TD, SB, SL;

  printf("Entre a quantidade de horas trabalhadas ...: ");
  scanf("%f", &HT);
  while ((getchar() != '\n') && (!EOF));

  printf("Entre o valor da hora de trabalho .........: ");
  scanf("%f", &VH);
  while ((getchar() != '\n') && (!EOF));

  printf("Entre o valor do percentual de desconto ...: ");
  scanf("%f", &PD);
  while ((getchar() != '\n') && (!EOF));

  SB = HT * VH;
  TD = (PD / 100) * SB;
  SL = SB - TD;

  printf("\n");
  printf("Salario Bruto ....: %8.2f\n", SB);
  printf("Desconto .........: %8.2f\n", TD);
  printf("Salario Liquido ..: %8.2f\n", SL);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
