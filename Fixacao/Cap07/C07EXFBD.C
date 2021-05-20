// C07EXFBD.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int A[5], B[10], C[15], I;

  for (I = 0; I <= 4; I ++)
    {
      do
      {
        printf("Informe um valor para o elemento nr. A[%2d]: ", I + 1);
        scanf("%d", &A[I]);
        while ((getchar() != '\n') && (!EOF));
      }
      while (!(A[I] % 2 == 0));
    }

  printf("\n");
  for (I = 0; I <= 9; I ++)
    {
      do
      {
        printf("Informe um valor para o elemento nr. B[%2d]: ", I + 1);
        scanf("%d", &B[I]);
        while ((getchar() != '\n') && (!EOF));
      }
      while (!(B[I] % 2 != 0));
    }

  for (I = 0; I <= 14; I ++)
    if (I <= 4)
      C[I] = A[I];
    else
      C[I] = B[I - 5];

  printf("\n");
  for (I = 0; I <= 14; I ++)
    printf("\nC[%2d] = %2d", I + 1, C[I]);
  printf("\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
