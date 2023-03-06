// C09EX19.C

#include <stdio.h>

#define menor_valor(V1, V2) ((V1 < V2) ? (V1) : (V2))

int main(void)
{

  char PAUSA;

  int A, B, RESP;

  printf("Entre o 1o. valor: ");
  scanf("%i", &A);
  while ((getchar() != '\n') && (!EOF));

  printf("Entre o 2o. valor: ");
  scanf("%i", &B);
  while ((getchar() != '\n') && (!EOF));

  RESP = menor_valor(A, B);

  printf("Menor valor: %i\n", RESP);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
