// C04EX10.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int N, I, R;

  printf("Entre o valor da tabuada: ");
  scanf("%i", &N);
  while ((getchar() != '\n') && (!EOF));
  printf("\n");

  for (I = 1; I <= 10; I++)
    {
      R = N * I;
      printf("%2i X %2i = %3i\n", N, I, R);
    }

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
