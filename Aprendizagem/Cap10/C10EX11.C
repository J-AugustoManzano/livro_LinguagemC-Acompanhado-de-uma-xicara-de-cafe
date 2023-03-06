// C10EX11.C

#include <stdio.h>
#include <math.h>

void clrbufkey(void)
{
  while ((getchar() != '\n') && (!EOF));
}

void entrada(int *X)
{
  int I;
  for (I = 0; I <= 4; I++)
  {
     printf("Entre com o elemento: %d = ", I + 1);
     scanf("%i", &X[I]); clrbufkey();
  }
}

void processamento(int *X)
{
  int I;
  for (I = 0; I <= 4; I++)
    X[I] = pow(X[I], 3);
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

  int A[5];

  printf("Operacao matricial - vetor\n");
  printf("\nEntre os elementos da matriz A\n\n");
  entrada(A);
  printf("\nElementos da matriz A antes do processamento\n");
  saida(A);
  processamento(A);
  printf("\nElementos da matriz A apos o processamento\n");
  saida(A);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
