// C04EXFDA.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int S, I;

  S = 0;
  for (I = 1; I <= 100; I++)
    S += I;
  printf("%d\n", S);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
