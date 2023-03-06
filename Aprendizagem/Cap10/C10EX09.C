// C10EX09.C

#include <stdio.h>

void clrbufkey(void)
{
  while ((getchar() != '\n') && (!EOF));
}

void fatorial(int N, long int *FAT)
{
  int I;
  for (I = 1; I <= N; I++)
    *FAT *= I;
}

int main(void)
{

  char PAUSA;

  int X;
  long int Y = 1;

  printf("Calculo de fatorial\n");

  printf("\nEntre um valor inteiro: ");
  scanf("%i", &X); clrbufkey();

  fatorial(X, &Y);

  printf("\nFatorial de %d = a: %i\n", X, Y);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
