// C10EX03.C

#include <stdio.h>

extern float A, B;

void soma(void)
{

  auto float R; // tire auto para Visual Studio 2013

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
