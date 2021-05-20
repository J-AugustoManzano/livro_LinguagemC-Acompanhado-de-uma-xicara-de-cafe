// C04EXFCC.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int I, R;

  I = 1;
  do
  {
    R = I % 4; /** ou expressao R = I - 4 * (I / 4) */
    if (R == 0)
      printf("%d\n", I);
    I++;
  }
  while (I < 30);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
