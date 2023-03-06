// C07EX03.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int A[5];
  int I, SOMA = 0;

  printf("Exemplo de checagem de indice\n\n");

  // Entrada de dados

  for (I = 0; I <= 4; I++)
    {
      printf("Entre valor para o elemento nr. %i: ", I + 1);
      scanf("%d", &A[I]);
      while ((getchar() != '\n') && (!EOF));
    }

  // Processamento par ou impar

  for (I = 0; I <= 4; I++)
    if (A[I] % 2 != 0)
       SOMA += A[I];

  // Apresentacao da soma

  printf("\nA soma dos elementos quivale a: %i\n", SOMA);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
