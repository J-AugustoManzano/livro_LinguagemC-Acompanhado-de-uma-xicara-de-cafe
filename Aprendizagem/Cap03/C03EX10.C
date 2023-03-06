// C03EX10.C

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

  R = (A > B) ? A : B;

  printf("\nMaior valor informado = %-d.\n", R);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
