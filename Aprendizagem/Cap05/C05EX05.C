// C05EX05.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int VALOR, *PVALOR, **PPONT;

  printf("Entre um valor inteiro: ");
  scanf("%d", &VALOR);
  while ((getchar() != '\n') && (!EOF));

  PVALOR = &VALOR;
  PPONT = &PVALOR;

  printf("\nValor informado = %d\n", **PPONT);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
