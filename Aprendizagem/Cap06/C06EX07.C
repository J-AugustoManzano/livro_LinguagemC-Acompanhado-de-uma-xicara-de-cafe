// C06EX07.C

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  char PAUSA;

  char  STRING1[9] = "2.718281", STRING2[2] = "2";
  char  STRING3[11] = "2147483647";
  float VALOR1;
  long int VALOR2;

  VALOR1 = atof(STRING1);
  printf("String = %9s\n", STRING1);
  printf("Valor  = %9.6f\n", VALOR1);

  VALOR2 = atoi(STRING2);
  printf("String = %2s\n", STRING2);
  printf("Valor  = %2d\n", VALOR2);

  VALOR2 = atol(STRING3);
  printf("String = %11s\n", STRING3);
  printf("Valor  = %11d\n", VALOR2);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
