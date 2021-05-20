// C07EXFBE.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  float A[20], B[20];
  int I;

  for (I = 0; I <= 19; I++)
    {
      printf("Informe um valor para o elemento nr. A[%2d]: ", I + 1);
      scanf("%f", &A[I]);
      while ((getchar() != '\n') && (!EOF));
    }

  printf("\n");
  for (I = 0; I <= 19; I++)
    B[I] = A[19 - I];

  printf("\n");
  for (I = 0; I <= 19; I++)
    printf("A[%2d] = %5.2f | B[%2d] = %5.2f\n", I + 1, A[I], I + 1, B[I]);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
