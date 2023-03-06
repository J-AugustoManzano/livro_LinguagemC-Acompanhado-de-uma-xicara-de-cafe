// C07EX14.C

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  char PAUSA;

  int TAMANHO, I;
  int *PMATRIZ = 0;

  TAMANHO = 0;
  do
    {

      TAMANHO++;

      PMATRIZ = (int *) realloc(PMATRIZ, TAMANHO * sizeof(int));

      if (PMATRIZ == NULL)
        {
          printf("*** Memoria insuficiente ***\n");
          free(PMATRIZ);
          exit(1);
        }
      else
        {
          printf("MATRIZ[%2i] ", TAMANHO);
          printf("(0 para encerrar) = ");
          scanf("%i", &PMATRIZ[TAMANHO-1]);
          while ((getchar() != '\n') && (!EOF));
        }

    }
  while (PMATRIZ[TAMANHO-1] != 0);

  printf("\n");
  printf("Os valores informados sao:\n\n");
  for (I = 0; I < TAMANHO - 1; I++)
    {
       printf("MATRIZ[%2i] = ", I + 1);
       printf("%3d\n", PMATRIZ[I]);
    }

  free(PMATRIZ);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
