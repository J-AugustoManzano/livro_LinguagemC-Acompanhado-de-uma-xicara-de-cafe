// C07EXFDB.C

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  char PAUSA;

  int TAMANHO, I;
  float *A = 0, *B = 0, *C = 0;

  printf("Informe a quantidade de dados: ");
  scanf("%d", &TAMANHO);
  while ((getchar() != '\n') && (!EOF));

  A = (float *) realloc(A, TAMANHO * sizeof(float));

  for (I = 0; I <= TAMANHO - 1; I++)
    {
      printf("A[%2i] ", I + 1);
      scanf("%f", &A[I]);
      while ((getchar() != '\n') && (!EOF));
    }

  B = (float *) realloc(B, TAMANHO * sizeof(float));

  printf("\n");
  for (I = 0; I <= TAMANHO - 1; I++)
    {
      printf("B[%2i] ", I + 1);
      scanf("%f", &B[I]);
      while ((getchar() != '\n') && (!EOF));
    }

  C = (float *) realloc(C, TAMANHO * sizeof(float));

  for (I = 0; I <= TAMANHO - 1; I++)
    C[I] = A[I] - B[I];

  printf("\n");
  printf("Os valores de C sao:\n\n");
  for (I = 0; I <= TAMANHO - 1; I++)
    {
       printf("C[%2i] = ", I + 1);
       printf("%6.2f\n", C[I]);
    }

  free(A);
  free(B);
  free(C);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
