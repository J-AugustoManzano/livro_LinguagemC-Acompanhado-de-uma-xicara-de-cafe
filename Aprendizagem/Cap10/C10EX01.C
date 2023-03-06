// C10EX01.C

#include <stdio.h>

void soma(void)
{

  auto float A, B, R; // tire auto para Visual Studio 2013

  printf("Entre um valor do tipo float A: ");
  scanf("%f", &A);
  while ((getchar() != '\n') && (!EOF));

  printf("Entre um valor do tipo float B: ");
  scanf("%f", &B);
  while ((getchar() != '\n') && (!EOF));

  printf("\n");

  R = A + B;

  printf("Resultado = %.2f\n", R);

}

int main(void)
{

  char PAUSA;

  soma();

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
