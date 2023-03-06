// C10EX13.C

#include <stdio.h>
#include <math.h>

void clrbufkey(void)
{
  while ((getchar() != '\n') && (!EOF));
}

void entrada(int X[][4])
{
  int I, J;
  for (I = 0; I <= 4; I++)
    for (J = 0; J <= 3; J++)
    {
       printf("Entre o elemento [%i,%i] = ", I + 1, J + 1);
       scanf("%i", &X[I][J]); clrbufkey();
    }
}

void processamento(int Y[][4], int X[][4])
{
  int I, J;
  for (I = 0; I <= 4; I++)
    for (J = 0; J <= 3; J++)
      Y[I][J] = pow(X[I][J], 3);
}

void saida(int VETOR[][4])
{
  int I, J;
  for (I = 0; I <= 4; I++)
    for (J = 0; J <= 3; J++)
    {
       printf("O elemento [%i,%i] = ", I + 1, J + 1);
       printf("%6i\n", VETOR[I][J]);
    }
}

int main(void)
{

  char PAUSA;

  int A[5][4], B[5][4];

  printf("Operacao matricial - tabela\n");
  printf("\nEntre os elementos da matriz A\n\n");
  entrada(A);
  processamento(B, A);
  printf("\nElementos da matriz A\n");
  saida(A);
  printf("\nElementos da matriz B\n");
  saida(B);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
