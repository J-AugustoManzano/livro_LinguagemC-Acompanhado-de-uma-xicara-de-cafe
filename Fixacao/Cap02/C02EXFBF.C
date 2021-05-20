// C02EXFBF.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  unsigned long long A, B, X;

  printf("Informe valor [A]: ");
  scanf("%lld", &A);
  while ((getchar() != '\n') && (!EOF));

  printf("Informe valor [B]: ");
  scanf("%lld", &B);
  while ((getchar() != '\n') && (!EOF));

  X = A;
  A = B;
  B = X;

  printf("\n");
  printf("[A] = %lld\n", A);
  printf("[B] = %lld\n", B);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
