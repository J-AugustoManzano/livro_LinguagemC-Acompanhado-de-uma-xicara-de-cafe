// C10EX16.C

#include <stdio.h>

void clrbufkey(void)
{
  while ((getchar() != '\n') && (!EOF));
}

int troca(int *A, int *B)
{
  int X;
  if (*A > *B)
  {
    X = *A;
    *A = *B;
    *B = X;
    return 1;
  }
  else
    return 0;
}

void saida(int A, int B)
{
  printf("N1 ..........: %i\n", A);
  printf("N2 ..........: %i\n", B);
}

int main(void)
{

  char PAUSA;

  int N1, N2;

  printf("Ordena Valores\n");
  printf("\n");

  printf("Entre N1 ....: ");
  scanf("%i", &N1); clrbufkey();

  printf("Entre N2 ....: ");
  scanf("%i", &N2); clrbufkey();

  printf("\n");

  if (troca(&N1, &N2) == 1)
  {
    saida(N1, N2);
    printf("\nHouve troca de valores.\n");
  }
  else
  {
    saida(N1, N2);
    printf("\nNao houve troca de valores.\n");
  }

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
