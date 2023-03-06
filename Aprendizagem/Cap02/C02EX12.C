// C02EX12.C

#include <stdio.h>

int main(void)
{

  char PAUSA;
  int X, Y;

  X = 10;
  Y = ++X;
  printf("\nX = %d  Y = %d\n", X, Y);

  X = 10;
  Y = X++;
  printf("\nX = %d  Y = %d\n", X, Y);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
