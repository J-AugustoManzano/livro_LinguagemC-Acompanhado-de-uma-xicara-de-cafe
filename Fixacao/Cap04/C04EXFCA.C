// C04EXFCA.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int S, I;

  S = 0;
  I = 1;
  do
  {
    S += I;
    I++;
  }
  while (I <= 100);
  printf("%d\n", S);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
