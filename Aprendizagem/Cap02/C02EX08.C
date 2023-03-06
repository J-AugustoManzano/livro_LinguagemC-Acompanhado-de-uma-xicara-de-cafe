// C02EX08.C

#include <stdio.h>

int main(void)
{

  char PAUSA;
  int NI, NO, NH;

  printf("Informe um valor inteiro na base decimal: ");
  scanf("%i", &NI);
  while ((getchar() != '\n') && (!EOF));

  printf("Valor %d igual a %o na base octal.\n", NI, NI);
  printf("Valor %d igual a %x na base hexadecimal minusculo.\n", NI, NI);
  printf("Valor %d igual a %X na base hexadecimal maiusculo.\n\n", NI, NI);

  printf("Informe um valor inteiro octal: ");
  scanf("%o", &NO);
  while ((getchar() != '\n') && (!EOF));

  printf("Valor octal %o igual a %i inteiro decimal.\n", NO, NO);
  printf("Valor %o igual a %x na base hexadecimal minusculo.\n", NO, NO);
  printf("Valor %o igual a %X na base hexadecimal maiusculo.\n\n", NO, NO);

  printf("Informe um valor inteiro hexadecimal: ");
  scanf("%x", &NH);
  while ((getchar() != '\n') && (!EOF));

  printf("Valor hexadecimal %X igual a %d inteiro decimal.\n", NH, NH);
  printf("Valor hexadecimal %x igual a %o inteiro octal.\n", NH, NH);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
