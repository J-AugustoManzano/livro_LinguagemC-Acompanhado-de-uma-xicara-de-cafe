// C07EXFCD.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  float A[3][3];
  int I, J;

  printf("\nInforme dados da matriz\n");
  for (I = 0; I <= 2; I ++)
    {
      printf("\nColuna ..: %d\n", I + 1);
      for (J = 0; J <= 2; J ++)
        {
          printf("Linha ...: %d = ", J + 1);
          scanf("%f", &A[I][J]);
          while ((getchar() != '\n') && (!EOF));
        }
    }

  /* Saida dos dados */

  printf("\n");
  for (I = 0; I <= 2; I ++)
    for (J = 0; J <= 2; J ++)
      if (I == J)
        printf("Dado: %5.2f\n", A[I][J] * 2);
      else
        printf("Dado: %5.2f\n", A[I][J] * 3);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
