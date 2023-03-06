// C04EX18.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int I;

  for (I = 1; I <= 10; I++)
    {
      if (I == 6)
        break;
      printf("I = %2d\n", I);
    }

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
