// C10EX04.C

#include <stdio.h>

void incremento(void)
{

  static int R = 1;

  printf("Resultado = %2i\n", R);
  R++;

}

int main(void)
{

  char PAUSA;

  for(int I = 1; I <= 10; I++)
    incremento();

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
