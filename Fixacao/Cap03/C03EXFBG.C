// C03EXFBF.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int A, B, C, X;

  printf("Informe o 1o. valor: ");
  scanf("%d", &A);
  while ((getchar() != '\n') && (!EOF));

  printf("Informe o 2o. valor: ");
  scanf("%d", &B);
  while ((getchar() != '\n') && (!EOF));

  printf("Informe o 3o. valor: ");
  scanf("%d", &C);
  while ((getchar() != '\n') && (!EOF));

  if (A > B)
    {
      X = A;
      A = B;
      B = X;
    }

  if (A > C)
    {
      X = A;
      A = C;
      C = X;
    }

  if (B > C)
    {
      X = B;
      B = C;
      C = X;
    }

  printf("\nA = %d\n", A);
  printf("\nB = %d\n", B);
  printf("\nC = %d\n", C);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
