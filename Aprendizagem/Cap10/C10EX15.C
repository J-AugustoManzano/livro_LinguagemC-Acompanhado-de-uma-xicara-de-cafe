// C10EX15.C

#include <stdio.h>

void clrbufkey(void)
{
  while ((getchar() != '\n') && (!EOF));
}

int fatorial(int N)
{
  int I, FAT = 1;
  for (I = 1; I <= N; I++)
    FAT *= I;
  return FAT;
}

int main(void)
{

  char PAUSA;

  int X;
  long int Y = 1;

  printf("Calculo de fatorial\n");

  printf("\nEntre um valor inteiro: ");
  scanf("%i", &X); clrbufkey();

  printf("\nFatorial de %d = a: %i\n", X, fatorial(X));

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
