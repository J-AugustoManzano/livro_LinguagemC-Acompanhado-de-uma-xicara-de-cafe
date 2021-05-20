// C10EXFCA.C

#include <stdio.h>

void somatorio(int N, int *SOMA)
{
  int I;
  *SOMA = 0;
  for (I = 1; I <= N; I++)
    *SOMA += I;
}

int main(void)
{

  char PAUSA;

  int LIMITE, SOMA;

  printf("Calculo de somatorio\n");
  printf("\nQual somatorio: ");
  scanf("%d", &LIMITE);
  while ((getchar() != '\n') && (!EOF));

  somatorio(LIMITE, &SOMA);

  printf("\nSomatorio de %d = a: %d\n", LIMITE, SOMA);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
