// C02EXFBA.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  short int VALOR, ANT, SUC;

  printf("Informe um valor hexadecimal: ");
  scanf("%x", &VALOR);
  while ((getchar() != '\n') && (!EOF));

  ANT = VALOR - 1;
  SUC = VALOR + 1;

  printf("\n");
  printf("Valor informado ...: %X\n", VALOR);
  printf("Valor anterior ....: %X\n", ANT);
  printf("Valor sucesor .....: %X\n", SUC);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
