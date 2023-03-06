// C03EX15.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int N, R4, R5;

  printf("Entre um valor numerico natural: ");
  scanf("%d", &N);
  while ((getchar() != '\n') && (!EOF));
  printf("\n");

  R4 = N % 4;
  R5 = N % 5;

  if (R4 == 0 && R5 == 0)
    printf("%-d\n", N);
  else
    printf("Valor nao e divisivel por 4 e 5.\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  scanf("%c", &PAUSA);

  return 0;
}
