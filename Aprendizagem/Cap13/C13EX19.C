// C12EX19.C

#include <stdio.h>
#include <ctype.h>
#include "stdgen.h"

int main(void)
{

  FILE *PTRARQ;
  int VALOR;
  char RESP;

  PTRARQ = fopen("ARQBIN06.BIN", "ab+");

  printf("Cadastro sequencial de valores\n");

  do
    {
      printf("\nInforme um valor inteiro: ");
      scanf("%i", &VALOR);
      clrbufkey();

      fwrite(&VALOR, sizeof(int), 1, PTRARQ);

      printf("\nDeseja continuar?\n");
      printf("[S] para Sim | [qualquer letra] para Nao --> ");
      scanf("%c", &RESP);
      clrbufkey();
    }
  while(toupper(RESP) == 'S');

  fflush(stdout);
  fclose(PTRARQ);

  printf("\n");
  pause(NULL);

  return 0;
}
