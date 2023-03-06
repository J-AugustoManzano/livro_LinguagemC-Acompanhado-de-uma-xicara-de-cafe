// C10EX05.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  register int I;

  for(I = 1; I <= 20; I++)
    printf("%2i\n", I);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
