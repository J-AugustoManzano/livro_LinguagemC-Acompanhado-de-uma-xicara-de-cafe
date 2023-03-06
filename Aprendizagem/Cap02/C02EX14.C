// C02EX14.C

#include <stdio.h>

int main(void)
{

  char PAUSA;
  int VALOR, RESULTADO;

  VALOR = 1;
  RESULTADO = ++VALOR;

  printf("%d\n", RESULTADO);
  printf("%d\n", VALOR);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
