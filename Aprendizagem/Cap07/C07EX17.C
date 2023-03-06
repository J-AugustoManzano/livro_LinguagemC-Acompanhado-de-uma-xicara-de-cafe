// C07EX17.C

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  char PAUSA;

  int VALORES[] = {1, 3, 5, 7, 9};
  int I = 1, *PVALORES;

  for (PVALORES = VALORES; PVALORES < &VALORES[5]; PVALORES++)
    {
      printf("VALORES[%i] = %i\n", I, *PVALORES);
      I += 1;
    }

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
