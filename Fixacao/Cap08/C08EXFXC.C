// C03EXFXC.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int A[15], B[15], I, J, X;

  printf("Classificacao de elementos numericos\n\n");

  for (I = 0; I <= 14; I ++)
    {
      printf("Informe o %2do. valor da matriz A: ", I + 1);
      scanf("%d", &A[I]);
      while ((getchar() != '\n') && (!EOF));
    }

  for (I = 0; I <= 14; I ++)
    {
      B[I] = 1;
      for (J = 1; J <= A[I]; J ++)
        B[I] = B[I] * J;
    }

  for (I = 0; I <= 13; I ++)
    for (J = I + 1; J <= 14; J ++)
      if (B[I] > B[J])
        {
          X = B[I];
          B[I] = B[J];
          B[J] = X;
        }

  printf("\n\n");
  for (I = 0; I <= 14; I ++)
    printf("O %2do. valor da matriz B e': %11d\n", I + 1, B[I]);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
