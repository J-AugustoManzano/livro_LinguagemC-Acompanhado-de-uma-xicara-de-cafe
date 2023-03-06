// C03EX01.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int A, B, R;

  printf("Entre o valor <A>: ");
  scanf("%d", &A);
  while ((getchar() != '\n') && (!EOF));

  printf("Entre o valor <B>: ");
  scanf("%d", &B);
  while ((getchar() != '\n') && (!EOF));

  R = A + B;
  if (R > 10)
    printf("Resultado = %-d\n", R);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
