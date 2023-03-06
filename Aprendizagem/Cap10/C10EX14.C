// C10EX14.C

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void geracaoAleatoria(int X[], int I, int J, int COLUNAS)
{
  X[I * COLUNAS + J] = rand() % 100 + 1;
}

void saida(int VETOR[], int I, int J, int COLUNAS)
{
  printf("O elemento [%i,%i] = ", I + 1, J + 1);
  printf("%3i\n", VETOR[I * COLUNAS + J]);

}

int main(void)
{

  char PAUSA;

  srand(time(NULL));

  int A[5][4];
  int LINHA, COLUNA;

  printf("Operacao matricial - tabela\n");

  for (LINHA = 0; LINHA <= 4; LINHA++)
    for (COLUNA = 0; COLUNA <= 3; COLUNA++)
      geracaoAleatoria(*A, LINHA, COLUNA, 4);

  printf("\nElementos da matriz A\n");

  for (LINHA = 0; LINHA <= 4; LINHA++)
    for (COLUNA = 0; COLUNA <= 3; COLUNA++)
      saida(*A, LINHA, COLUNA, 4);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
