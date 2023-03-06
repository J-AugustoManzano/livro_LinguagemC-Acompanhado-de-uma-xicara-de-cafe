// C10EX18.C

#include <stdio.h>

void clrbufkey(void)
{
  while ((getchar() != '\n') && (!EOF));
}

int FATORIAL(int N)
{
  if (N <= 1)
    return 1;
  else
    return FATORIAL(N - 1) * N;
}

int main(void)
{

  char PAUSA;

  int LIMITE;

  printf("Qual fatorial: ");
  scanf("%i", &LIMITE); clrbufkey();

  printf("\nFatorial de %i = %i\n", LIMITE, FATORIAL(LIMITE));

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
