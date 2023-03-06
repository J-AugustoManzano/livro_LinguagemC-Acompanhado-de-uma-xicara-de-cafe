// C08EX01.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int NUMERO[5], I, J, X;
  printf("Classificacao de elementos numericos\n\n");

  // Entrada dos valores

  for (I = 0; I <= 4; I++)
    {
      printf("Informe o %do. valor: ", I + 1);
      scanf("%d", &NUMERO[I]);
      while ((getchar() != '\n') && (!EOF));
    }

  // Classificacao dos valores

  for (I = 0; I <= 3; I++)
    for (J = I + 1; J <= 4; J++)
      if (NUMERO[I] > NUMERO[J])
        {
          X = NUMERO[I];
          NUMERO[I] = NUMERO[J];
          NUMERO[J] = X;
        }

  // Apresentacao dos valores classificados

  printf("\n");
  for (I = 0; I <= 4; I++)
    printf("Agora o %do. valor e': %3d\n", I + 1, NUMERO[I]);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
