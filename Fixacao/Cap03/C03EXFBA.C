// C03EXFBA.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int V1, V2, DIF;

  printf("Informe o 1o. valor inteiro: ");
  scanf("%d", &V1);
  while ((getchar() != '\n') && (!EOF));

  printf("Informe o 2o. valor inteiro: ");
  scanf("%d", &V2);
  while ((getchar() != '\n') && (!EOF));

  if (V1 > V2)
    DIF = V1 - V2;
  else
    DIF = V2 - V1;

  printf("\n");
  printf("A diferenca do maior pelo menor = %d\n", DIF);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
