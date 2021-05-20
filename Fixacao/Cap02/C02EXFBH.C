// C02EXFBH.C

#include <stdio.h>
#include <math.h>

int main(void)
{

  char PAUSA;

  unsigned int VALOR, RESP;

  printf("Informe um valor inteiro positivo: ");
  scanf("%d", &VALOR);
  while ((getchar() != '\n') && (!EOF));

  RESP = pow(VALOR, 3.0);

  printf("\n");
  printf("Resultado = : %d\n", RESP);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
