// C02EX09.C

#include <stdio.h>

int main(void)
{

  char PAUSA;
  float NFS = 0.0F;
  double NFD = 0.0;
  float NPF = 0.0F;

  printf("Informe um valor de ponto flutuante simples: ");
  scanf("%f", &NFS);
  while ((getchar() != '\n') && (!EOF));
  printf("Valor %.20f igual a %e em exponencial.\n", NFS, NFS);
  printf("Valor %.20f igual a %E em exponencial.\n", NFS, NFS);

  printf("\n");
  printf("Informe um valor de ponto flutuante duplo: ");
  scanf("%lf", &NFD);
  while ((getchar() != '\n') && (!EOF));
  printf("Valor %.20f igual a %e em exponencial.\n", NFD, NFD);
  printf("Valor %.20f igual a %E em exponencial.\n", NFD, NFD);

  printf("\n");
  printf("Informe um valor em exponencial: ");
  scanf("%e", &NPF);
  while ((getchar() != '\n') && (!EOF));
  printf("Valor %e igual a %lf em ponto flutuante.\n", NPF, NPF);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
