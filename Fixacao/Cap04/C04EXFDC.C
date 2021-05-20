// C04EXFDC.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int I, R;

  for (I = 1; I < 30; I++)
  {
    R = I % 4; /** ou expressao R = I - 4 * (I / 4) */
    if (R == 0)
      printf("%d\n", I);
  }

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
