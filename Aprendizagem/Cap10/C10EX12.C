// C10EX12.C

#include <stdio.h>

void clrbufkey(void)
{
  while ((getchar() != '\n') && (!EOF));
}

void troca(int *X, int *Y, int N)
{
  int I, AUX;
  for (I = 0; I < N; I++)
  {
     AUX = X[I];
     X[I] = Y[I];
     Y[I] = AUX;
  }
}

void saida(int *VETOR)
{
  int I;
  for (I = 0; I <= 4; I++)
    printf("Elemento: %i = %3i\n", I + 1, VETOR[I]);
}

int main(void)
{

  char PAUSA;

  int A[5] = {2,4,6,8,0};
  int B[5] = {1,3,5,7,9};

  printf("Operacao matricial - vetor\n");
  printf("\nElementos da matriz A antes da troca\n");
  saida(A);
  printf("\nElementos da matriz B antes da troca\n");
  saida(B);
  troca(A, B, 5);
  printf("\nElementos da matriz A apos a troca\n");
  saida(A);
  printf("\nElementos da matriz B apos a troca\n");
  saida(B);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
