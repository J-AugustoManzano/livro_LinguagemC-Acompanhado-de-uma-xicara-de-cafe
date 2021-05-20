// C07EXFDA.C

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  char PAUSA;

  int TAMANHO, I;
  int *A = 0;

  printf("Informe a quantidade de dados: ");
  scanf("%d", &TAMANHO);
  while ((getchar() != '\n') && (!EOF));

  A = (int *) realloc(A, TAMANHO * sizeof(int));

  for (I = 0; I <= TAMANHO - 1; I++)
    {
      printf("A[%2i] ", I + 1);
      scanf("%i", &A[I]);
      while ((getchar() != '\n') && (!EOF));
    }

  printf("\n");
  printf("Os valores informados sao:\n\n");
  for (I = 0; I <= TAMANHO - 1; I++)
    {
       printf("A[%2i] = ", I + 1);
       printf("%3d\n", A[I]);
    }

  free(A);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
