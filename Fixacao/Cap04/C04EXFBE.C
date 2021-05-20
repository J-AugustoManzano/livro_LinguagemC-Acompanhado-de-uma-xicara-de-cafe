// C04EXFBE.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  short N;
  long long int I, F;

  printf("Informe um valor inteiro: ");
  scanf("%d", &N);
  while ((getchar() != '\n') && (!EOF));

  F = 1;
  I = 1;
  while (I <= N)
  {
    F *= I;
    I++;
  }
  printf("Fatorial = %lld\n", F);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
