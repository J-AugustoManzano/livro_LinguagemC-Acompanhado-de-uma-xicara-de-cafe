// C10EX21.C

#include <stdio.h>

void clrbufkey(void)
{
  while ((getchar() != '\n') && (!EOF));
}

__inline void fatorial(int N)
{
  int I;
  long int FAT = 1;
  for (I = 1; I <= N; I++)
    FAT *= I;
  printf("Fatorial de %d = a: %i\n", N, FAT);
}

int main(void)
{

  char PAUSA;

  int X, Y;

  printf("Calculo de fatorial\n");

  printf("\nEntre um valor inteiro: ");
  scanf("%i", &X); clrbufkey();
  fatorial(X);

  printf("\nEntre um valor inteiro: ");
  scanf("%i", &Y); clrbufkey();
  fatorial(Y);

  printf("\n");

  fatorial(9);
  fatorial(6);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
