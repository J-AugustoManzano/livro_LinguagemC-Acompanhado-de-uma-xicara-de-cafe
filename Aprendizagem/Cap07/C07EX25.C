// C07EX25.C

#include <stdio.h>
#include <string.h>

int main(void)
{

  char PAUSA;

  int VETOR[] = {0, 2, 4, 6, 8};
  int I;

  for (I = 0; I <= 4; I++)
    printf("VETOR[%d] = %d\n", I, VETOR[I]);

  memset(VETOR, 0, sizeof(VETOR));
  printf("\n");

  for (I = 0; I <= 4; I++)
    printf("VETOR[%d] = %d\n", I, VETOR[I]);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
