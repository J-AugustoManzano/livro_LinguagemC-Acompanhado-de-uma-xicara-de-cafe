// C07EX06.C

#include <stdio.h>

int main(void)
{

  char PAUSA;
  int I;

  int VALORES[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int TAMANHO = sizeof(VALORES) / sizeof(int);

  for (I = 0; I <= TAMANHO - 1; I++)
    printf("VALORES[%02i] = %i\n", I + 1, VALORES[I]);

  printf("\n");
  printf("A matriz possui %i elementos.", TAMANHO);

  printf("\n");
  printf("A matriz ocupa %i bytes.\n", sizeof(VALORES));

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
