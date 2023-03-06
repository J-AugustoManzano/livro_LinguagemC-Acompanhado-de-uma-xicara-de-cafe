// C04EX20.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  char CAR;
  int  COD;

  for (COD = 32; COD <= 127; COD++)
    {
      CAR = COD;
      printf("--> %c equivale ao codigo [%3d]\n", CAR, COD);
    }

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
