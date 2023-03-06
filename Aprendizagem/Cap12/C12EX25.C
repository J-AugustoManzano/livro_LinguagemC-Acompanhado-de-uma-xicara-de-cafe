// C12EX25.C

#include <stdio.h>
#include "stdgen.h"

int main(void)
{

  int NUMERO;
  char CADEIA[sizeof(NUMERO)];

  printf("Entre um valor numerico inteiro: ");
  scanf("%s", &CADEIA);
  clrbufkey();

  sscanf(CADEIA, "%d", &NUMERO);

  printf("\n");
  printf("Valor como numerico de entrada + 5 ..: %d\n", NUMERO + 5);
  printf("Valor como cadeia ...................: %s\n", CADEIA);

  printf("\n");
  pause(NULL);

  return 0;
}
