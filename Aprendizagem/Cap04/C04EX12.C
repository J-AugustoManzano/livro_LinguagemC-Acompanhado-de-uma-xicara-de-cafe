// C04EX12.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int I;

  for (I = 10; I >= 1; I--)
    printf("I = %2d\n", I);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
