// C07EXFBA.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  unsigned short int A[10];
  short I;

  for (I = 0; I <= 9; I++)
    {
      printf("Entre valor para o elemento nr. %2i: ", I + 1);
      scanf("%d", &A[I]);
      while ((getchar() != '\n') && (!EOF));
    }

  printf("\n");

  for (I = 0; I <= 9; I++)
    printf("A[%2i] = %3i\n", I + 1, A[I]);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
