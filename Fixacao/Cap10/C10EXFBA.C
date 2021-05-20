// C10EXFBA.C

#include <stdio.h>

void somatorio(int N)
{
  int I, SOMA;
  SOMA = 0;
  for (I = 1; I <= N; I++)
    SOMA += I;
  printf("\nSomatorio de %d = a: %d\n", N, SOMA);
}

int main(void)
{

  char PAUSA;

  int LIMITE;

  printf("Calculo de somatorio\n");
  printf("\nQual somatorio: ");
  scanf("%d", &LIMITE);
  while ((getchar() != '\n') && (!EOF));

  somatorio(LIMITE);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
