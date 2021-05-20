// C04EXFDB.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int I, R;

  for (I = 0; I <= 20; I++)
  {
    R = I % 2; /**ou expressao R = I - 2 * (I / 2) */
    if (R != 0)
      printf("%d\n", I);
  }

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
