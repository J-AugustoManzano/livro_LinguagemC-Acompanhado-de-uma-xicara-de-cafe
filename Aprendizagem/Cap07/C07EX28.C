// C07EX28.C

#include <stdio.h>
#include <string.h>

int main(void)
{

  char PAUSA;

  float VETOR[] = {1.5, 2.5, 3.5, 4.5, 5.5};
  int I;

  for (I = 0; I <= 4; I++)
    printf("VETOR[%d] = %5.2f\n", I, VETOR[I]);

  memset(VETOR, '*', sizeof(VETOR));
  printf("\n");

  for (I = 0; I <= 4; I++)
    printf("VETOR[%d] = %5.2f\n", I, VETOR[I]);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
