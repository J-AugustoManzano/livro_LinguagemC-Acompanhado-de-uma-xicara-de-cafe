// C04EXFBD.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int I, R, S;

  S = 0;
  I = 1;
  while (I <= 50)
  {
    R = I % 2; /** ou expressao R = I - 2 * (I / 2) */
    if (R == 0)
      S += I;
    I++;
  }
  printf("%d\n", S);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
