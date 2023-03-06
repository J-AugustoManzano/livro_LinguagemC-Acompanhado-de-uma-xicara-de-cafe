// C02EX11.C

#include <stdio.h>

int main(void)
{

  char PAUSA;
  int QUOCIENTE, DIVIDENDO, DIVISOR, RESTO;

  printf("Entre o valor do dividendo ...: ");
  scanf("%i", &DIVIDENDO);
  while ((getchar() != '\n') && (!EOF));

  printf("Entre o valor do divisor .....: ");
  scanf("%i", &DIVISOR);
  while ((getchar() != '\n') && (!EOF));

  QUOCIENTE = DIVIDENDO / DIVISOR;
  RESTO = DIVIDENDO % DIVISOR;

  printf("Quociente = %8i\n", QUOCIENTE);
  printf("Resto     = %8i\n", RESTO);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
