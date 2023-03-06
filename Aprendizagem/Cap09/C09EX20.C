// C09EX20.C

#include <stdio.h>

#define produto(X, Y) ((X) * (Y))
#define troca(A, B) {int X = A; A = B; B = X;}

int main(void)
{

  char PAUSA;

  int A, B, RESP;

  printf("Entre o valor A: ");
  scanf("%i", &A);
  while ((getchar() != '\n') && (!EOF));

  printf("Entre o valor B: ");
  scanf("%i", &B);
  while ((getchar() != '\n') && (!EOF));

  troca(A, B);

  printf("Valor A: %i\n", A);
  printf("Valor A: %i\n", B);

  printf("A x B = %i\n", produto(A, B));

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
