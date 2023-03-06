// C04EX14.C

#include <stdio.h>

int main()
{

  char PAUSA;

  int A, B, R;

  for (A = 1, B = 1; A + B <= 15; A += 2, B++)
    {
      R = A + B;
      printf("Resultado = %2d\n", R);
    }

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
