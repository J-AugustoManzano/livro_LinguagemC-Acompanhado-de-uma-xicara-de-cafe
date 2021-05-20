// C04EXFCB.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int I, R;

  I = 0;
  do
  {
    R = I % 2; /**ou expressao R = I - 2 * (I / 2) */
    if (R != 0)
      printf("%d\n", I);
    I++;
  }
  while (I <= 20);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
