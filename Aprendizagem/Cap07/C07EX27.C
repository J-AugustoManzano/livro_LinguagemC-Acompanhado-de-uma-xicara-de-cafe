// C07EX27.C

#include <stdio.h>
#include <string.h>

int main(void)
{

  char PAUSA;

  char VETOR[] = {'a', 'e', 'i', 'o', 'u'};
  int I;

  for (I = 0; I <= 4; I++)
    printf("VETOR[%d] = %c\n", I, VETOR[I]);

  memset(VETOR, '*', sizeof(VETOR));
  printf("\n");

  for (I = 0; I <= 4; I++)
    printf("VETOR[%d] = %c\n", I, VETOR[I]);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
