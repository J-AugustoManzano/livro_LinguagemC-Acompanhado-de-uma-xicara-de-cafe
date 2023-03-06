// C03EX02.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int A, B, X;

  printf("Entre a seguir dois valores, separando-os com <Enter>.\n");
  scanf("%d%d", &A, &B);
  while ((getchar() != '\n') && (!EOF));

  if (A > B)
    {
      X = A;
      A = B;
      B = X;
    }

  printf("Os valores ordenados sao: %d e %d.\b", A, B);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
