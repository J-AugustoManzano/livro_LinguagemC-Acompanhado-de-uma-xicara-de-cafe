// C09EX18.C

#include <stdio.h>

typedef enum {ctrue = 1, cfalse = 0} logic;

int main(void)
{

  char PAUSA;

  logic X;

  X = ctrue;
  if (X == ctrue)
    printf("X = Verdadeiro com valor ...: %i\n", X);

  X = cfalse;
  if (X == cfalse)
    printf("X = Falso com valor ........: %i\n", X);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
