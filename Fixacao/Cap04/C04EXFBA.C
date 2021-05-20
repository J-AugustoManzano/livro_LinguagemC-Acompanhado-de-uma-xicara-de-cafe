// C04EXFBA.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int S, I;

  S = 0;
  I = 1;
  while (I <= 100)
  {
    S += I;
    I++;
  }
  printf("%d\n", S);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
