// C02EX04.C

#include <stdio.h>

int main(void)
{

  char PAUSA;
  char NOME[51];

  printf("Informe nome: ");
  scanf("%[^\n]", &NOME);
  while ((getchar() != '\n') && (!EOF));
  printf("Ola, %s.\n", NOME);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
