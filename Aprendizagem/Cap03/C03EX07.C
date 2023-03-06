// C03EX07.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int S1, S2;

  printf("Entre sexo do 1o. - [1] = M / [0] = F: ");
  scanf("%d", &S1);
  while ((getchar() != '\n') && (!EOF));

  printf("Entre sexo do 2o. - [1] = M / [0] = F: ");
  scanf("%d", &S2);
  while ((getchar() != '\n') && (!EOF));

  if (S1 == 1 ^ S2 == 1)
    printf("O 1o. pode dancar com o 2o.\n");
  else
    printf("O 1o. nao pode dancar com o 2o.\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
