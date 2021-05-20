// C07EXFCC.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  float A[4][4];
  int I, J;

  printf("\nInforme dados da matriz\n");
  for (I = 0; I <= 3; I ++)
    {
      printf("\nColuna ..: %d\n", I + 1);
      for (J = 0; J <= 3; J ++)
        {
          printf("Linha ...: %d = ", J + 1);
          scanf("%f", &A[I][J]);
          while ((getchar() != '\n') && (!EOF));
        }
    }

  /* Saida dos dados */

  printf("\nResultados\n");
  for (I = 0; I <= 3; I ++)
    for (J = 0; J <= 3; J ++)
      if (I == J)
        printf("Dado: %5.2f\n", A[I][J]);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
