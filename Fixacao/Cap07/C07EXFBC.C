// C07EXFBC.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int A[8], B[8], C[8];
  int I;

  for (I = 0; I <= 7; I++)
    {
      printf("Entre valor para o elemento nr. %i: ", I + 1);
      scanf("%d", &A[I]);
      while ((getchar() != '\n') && (!EOF));
    }

  printf("\n");
  for (I = 0; I <= 7; I++)
    {
      printf("Entre valor para o elemento nr. %i: ", I + 1);
      scanf("%d", &B[I]);
      while ((getchar() != '\n') && (!EOF));
    }

  for (I = 0; I <= 7; I++)
    C[I] = A[I] - B[I];

  printf("\n");
  for (I = 0; I <= 7; I++)
    printf("C[%i] = %3i\n", I + 1, C[I]);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
