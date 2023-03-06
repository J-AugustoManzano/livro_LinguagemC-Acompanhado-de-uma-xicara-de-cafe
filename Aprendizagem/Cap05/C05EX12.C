// C05EX12.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int A = 1;
  float B = 2.5;
  void *PG = 0;

  PG = &A;
  printf("Valor inteiro ...: %d\n", *(int *)PG);

  PG = &B;
  printf("Valor real ......: %f\n", *(float *)PG);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
