// C12EX24.C

#include <stdio.h>
#include "stdgen.h"

int main(void)
{

  float NUMERO;
  char CADEIA[sizeof(NUMERO)];

  printf("Entre um valor numerico em ponto flutuante: ");
  scanf("%f", &NUMERO);
  clrbufkey();

  snprintf(CADEIA, sizeof(CADEIA), "%.2f", NUMERO);

  printf("\n");
  printf("Valor como numerico de entrada + 5 : %.2f\n", NUMERO + 5);
  printf("Valor como cadeia .................: %s\n", CADEIA);

  printf("\n");
  pause(NULL);

  return 0;
}
