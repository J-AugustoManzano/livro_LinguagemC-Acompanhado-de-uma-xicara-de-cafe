// C10EXFDA.C

#include <stdio.h>

int somatorio(int N)
{
  int I, SOMA = 0;
  for (I = 1; I <= N; I++)
    SOMA += I;
  return SOMA;
}

int main(void)
{

  char PAUSA;

  int LIMITE;

  printf("Calculo de somatorio\n");
  printf("\nQual somatorio: ");
  scanf("%d", &LIMITE);
  while ((getchar() != '\n') && (!EOF));

  printf("\nSomatorio de %d = a: %d\n", LIMITE, somatorio(LIMITE));

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
