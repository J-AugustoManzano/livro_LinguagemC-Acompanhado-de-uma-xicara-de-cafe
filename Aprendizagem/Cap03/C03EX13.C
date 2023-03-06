// C03EX13.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int N;

  printf("Informe um valor numerico inteiro (unidade): ");
  scanf("%d", &N);
  while ((getchar() != '\n') && (!EOF));
  printf("\n");

  switch (N)
    {
      case  1:
      case  3:
      case  5:
      case  7:
      case  9: printf("Valor impar\n");    break;
      case  2:
      case  4:
      case  6:
      case  8: printf("Valor par\n");      break;
      default: printf("Valor invalido\n"); break;
    }

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
