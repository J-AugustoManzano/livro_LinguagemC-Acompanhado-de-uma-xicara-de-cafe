// C02EX10.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int X1 = 1;
  int X2 = 10;
  int X3 = 100;
  int X4 = 1000;
  int X5 = 10000;
  int X6 = 2;
  int X7 = -2;

  printf("%d\n", X1);
  printf("%d\n", X2);
  printf("%d\n", X3);
  printf("%d\n", X4);
  printf("%d\n", X5);

  printf("\n");
  printf("%5d\n", X1);
  printf("%5d\n", X2);
  printf("%5d\n", X3);
  printf("%5d\n", X4);
  printf("%5d\n", X5);

  printf("\n");
  printf("%05d\n", X1);
  printf("%05d\n", X2);
  printf("%05d\n", X3);
  printf("%05d\n", X4);
  printf("%05d\n", X5);

  printf("\n");
  printf("%-5d\n", X1);
  printf("%-5d\n", X2);
  printf("%-5d\n", X3);
  printf("%-5d\n", X4);
  printf("%-5d\n", X5);

  printf("\n");
  printf("%+d\n", X6);
  printf("%+d\n", X7);

  printf("\n");
  printf("% d\n", X6);
  printf("% d\n", X7);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
