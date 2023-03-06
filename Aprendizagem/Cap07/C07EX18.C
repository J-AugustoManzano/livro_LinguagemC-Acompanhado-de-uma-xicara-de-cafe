// C07EX18.C

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  char PAUSA;

  int VALORES[] = {1, 3, 5, 7, 9};
  int I, *PVALORES;

  for (I = 0; I < 3; I++)
    {
      PVALORES = &VALORES[I];
      printf("VALORES[%i] = %i\n", I, PVALORES[I]);
    }

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
