// C02EX03.C

#include <stdio.h>

int main(void)
{

  char PAUSA;
  char NOME[51];

  printf("Informe nome: ");
  scanf("%s", &NOME);
  printf("Ola, %s.\n", NOME);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
