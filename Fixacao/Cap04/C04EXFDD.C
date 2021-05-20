// C04EXFDD.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int I, R, S;

  S = 0;
  for (I = 1; I <= 50; I++)
  {
    R = I % 2; /** ou expressao R = I - 2 * (I / 2) */
    if (R == 0)
      S += I;
  }
  printf("%d\n", S);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
