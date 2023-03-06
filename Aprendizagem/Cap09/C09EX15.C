// C09EX15.C

#include <stdio.h>

typedef float real;
typedef int   integer;

int main(void)
{

  char PAUSA;

  integer A;
  real B;

  printf("Entre um valor inteiro: ");
  scanf("%i", &A);
  while ((getchar() != '\n') && (!EOF));
  printf("Foi informado o valor: %i\n", A);
  printf("\n");

  printf("Entre um valor real: ");
  scanf("%f", &B);
  while ((getchar() != '\n') && (!EOF));
  printf("Foi informado o valor: %f\n", B);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
