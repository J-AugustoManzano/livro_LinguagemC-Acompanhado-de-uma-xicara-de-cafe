// C07EXFBB.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int A[8], B[8];
  int I;

  for (I = 0; I <= 7; I++)
    {
      printf("Entre valor para o elemento nr. %i: ", I + 1);
      scanf("%d", &A[I]);
      while ((getchar() != '\n') && (!EOF));
    }

  for (I = 0; I <= 7; I++)
    B[I] = A[I] * 3;

  printf("\n");
  for (I = 0; I <= 7; I++)
    printf("A[%i] = %3i | B[%i] = %3i\n", I + 1, A[I], I + 1, B[I]);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
