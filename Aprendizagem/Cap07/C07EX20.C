// C07EX20.C

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  char PAUSA;

  int A[5], B[5], C[5];
  int I, VALOR, *PA, *PB, *PC;

  PA = &A[0]; // ou PA = A;
  PB = &B[0]; // ou PB = B;
  PC = &C[0]; // ou PC = C;

  for (I = 0; I < 5; I++)
    {
      printf("A[%i] = ", I + 1);
      scanf("%i", &VALOR);
      while ((getchar() != '\n') && (!EOF));
      *(PA + I) = VALOR;
    }
  printf("\n");

  for (I = 0; I < 5; I++)
    {
      printf("B[%i] = ", I + 1);
      scanf("%i", &VALOR);
      while ((getchar() != '\n') && (!EOF));
      *(PB + I) = VALOR;
    }
  printf("\n");

  for (I = 0; I < 5; I++)
    {
      *PC = *PA + *PB;
      PA++;
      PB++;
      PC++;
    }
  printf("\n");

  for (I = 0; I < 5; I++)
    printf("C[%i] = %3i\n", I + 1, C[I]);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
