// C06EX05.C

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

  char PAUSA;

  div_t VALOR;
  int I;

  printf("%+13d\n", abs(-8));                // = +8
  printf("%+13d\n", abs(8));                 // = +8

  VALOR = div(10,3);

  printf("\n");
  printf("Quociente = %-d\n", VALOR.quot); // =  3
  printf("Resto     = %-d\n", VALOR.rem);  // =  1

  printf("\n");
  for (I = 1; I <= 5; I++)
    printf("%13d\n", rand());

  printf("\n");
  srand(time(NULL));
  for (I = 1; I <= 5; I++)
    printf("%13d\n", rand());

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
