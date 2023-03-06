// C07EX02.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int A[8], B[8];
  int I;

  printf("Exemplo de checagem de indice\n\n");

  // Entrada de dados

  for (I = 0; I <= 7; I++)
    {
      printf("Entre valor para o elemento nr. %i: ", I + 1);
      scanf("%d", &A[I]);
      while ((getchar() != '\n') && (!EOF));
    }
  printf("\n");

  // Processamento par ou impar

  for (I = 0; I <= 7; I++)
    if (I % 2 == 0)
      B[I] = A[I] * 5;
    else
      B[I] = A[I] + 5;

  // Apresentacao das matrizes

  for (I = 0; I <= 7; I++)
    printf("\nA[%i] = %3i | B[%i] = %3i", I + 1, A[I], I + 1, B[I]);
  printf("\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
