// C09EX21.C

#include <stdio.h>

#define produto1(X, Y) ((X) * (Y))
#define produto2(X, Y) (X * Y)

int main(void)
{

  char PAUSA;

  printf("2 + 3 x 4 = %i\n", produto1(2 + 3, 4));
  printf("2 + 3 x 4 = %i\n", produto2(2 + 3, 4));

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
