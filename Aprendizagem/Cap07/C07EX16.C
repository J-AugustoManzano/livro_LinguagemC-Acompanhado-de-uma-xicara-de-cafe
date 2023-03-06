// C07EX16.C

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


  // Operacao de incremento de ponteiro

  printf("\n");
  printf("Os valores informados sao:\n\n");
  for (I = 0 ; I <= TAMANHO-1; I++)
    {
       printf("MATRIZ[%2i] = ", I + 1);
       printf("%7.2f\n", *PMATRIZ++);
    }
  *PMATRIZ--;

  // Operacao de decremento de ponteiro

  printf("\n");
  for (I = TAMANHO-1; I >= 0; I--)
    {
       printf("MATRIZ[%2i] = ", I + 1);
       printf("%7.2f\n", *PMATRIZ--);
    }
  *PMATRIZ++;

  free(PMATRIZ);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
