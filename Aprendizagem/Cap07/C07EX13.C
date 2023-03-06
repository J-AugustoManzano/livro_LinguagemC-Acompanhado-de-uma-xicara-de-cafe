// C07EX13.C

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  char PAUSA;

  int I, TAMANHO;
  float *PMATRIZ;

  printf("Entre a quantidade de elementos: ");
  scanf("%i", &TAMANHO);
  while ((getchar() != '\n') && (!EOF));

  PMATRIZ = (float *) calloc(TAMANHO, sizeof(float));

  printf("\n");
  for (I = 0 ; I <= TAMANHO - 1; I++)
    {
      printf("Entre um valor para a variavel MATRIZ[");
      printf("%i] = ", I + 1);
      scanf("%f", &PMATRIZ[I]);
      while ((getchar() != '\n') && (!EOF));
    }

  printf("\n");
  printf("Os valores informados sao:\n\n");
  for (I = 0 ; I <= TAMANHO - 1; I++)
    {
       printf("MATRIZ[%i] = ", I + 1);
       printf("%4.2f\n", PMATRIZ[I]);
    }

  free(PMATRIZ);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
