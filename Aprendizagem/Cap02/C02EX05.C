// C02EX05.C

#include <stdio.h>

int main(void)
{

  char PAUSA;
  int A, B, R;

  printf("Informe um valor para a variavel <A>: ");
  scanf("%3i", &A);
  while ((getchar() != '\n') && (!EOF));

  printf("Informe um valor para a variavel <B>: ");
  scanf("%3d", &B);
  while ((getchar() != '\n') && (!EOF));

  R = A + B;

  printf("Resultado = %i\n", R);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
