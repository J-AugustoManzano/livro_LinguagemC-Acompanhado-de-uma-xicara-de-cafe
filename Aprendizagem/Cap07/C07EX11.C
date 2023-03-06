// C07EX11.C

#include <stdio.h>
#include <string.h>

int main(void)
{

  char PAUSA;

  char VETOR[] = {'L', 'i', 'n', 'g', 'u', 'a', 'g', 'e', 'm', '\0'};
  int CONTA = 0;

  while (VETOR[CONTA] != '\0')
    CONTA++;

  printf("Palavra \"%s\" possui %d caracteres.\n", VETOR, CONTA);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
