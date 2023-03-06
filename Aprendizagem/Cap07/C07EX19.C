// C07EX19.C

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  char PAUSA;

  int VALORES[5];
  int I, VALOR, *PVALORES;

  PVALORES = VALORES;

  for (I = 0; I < 5; I++)
    {
      printf("Posicao: %i = ", I + 1);
      scanf("%i", &VALOR);
      while ((getchar() != '\n') && (!EOF));
      *(PVALORES + I) = VALOR;
    }
  printf("\n");

  for (I = 0; I < 5; I++)
    {
      printf("Posicao: %i", I + 1);
      printf(" | Ponteiro: = %p", (PVALORES + I));
      printf(" | Conteudo: = %3i\n", *PVALORES++);;
    }

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
