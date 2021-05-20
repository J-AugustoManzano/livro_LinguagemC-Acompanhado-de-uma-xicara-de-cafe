// C07EXFCE.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  unsigned int A[4][4];
  int I, J;

  printf("\nInforme dados da matriz\n");
  for (I = 0; I <= 3; I++)
    {
      printf("\nColuna ..: %d\n", I + 1);
      for (J = 0; J <= 3; J++)
        {
          printf("Linha ...: %d = ", J + 1);
          scanf("%d", &A[I][J]);
          while ((getchar() != '\n') && (!EOF));
        }
    }

  printf("\nResultados\n");
  for (I = 0; I <= 3; I++)
    for (J = 0; J <= 3; J++)
      if (I + J == 3)
        printf("Dado: %d\n", A[I][J]);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
