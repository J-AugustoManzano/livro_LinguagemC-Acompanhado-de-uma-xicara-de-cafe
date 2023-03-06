// C07EX08.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int VALORES[3][5] = {
                        { 0,  1,  2,  3,  4},
                        { 5,  6,  7,  8,  9},
                        {10, 11, 12, 13, 14}
                      };

  int TAMANHO = sizeof(VALORES) / sizeof(int);
  int I, J;

  for (I = 0; I <= 2; I++)
    {
    for (J = 0; J <= 4; J++)
      {
        printf("VALORES[%2i][%2i] = ", I + 1, J + 1);
        printf("%2i\n", VALORES[I][J]);
      }
    }

  printf("\n");
  printf("A matriz possui %i elementos.", TAMANHO);

  printf("\n");
  printf("A matriz ocupa %i bytes.\n", sizeof(VALORES));

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
