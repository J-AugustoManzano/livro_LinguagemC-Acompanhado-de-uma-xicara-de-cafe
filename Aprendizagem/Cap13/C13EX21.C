// C12EX21.C

#include <stdio.h>
#include <ctype.h>
#include "stdgen.h"

int main(void)
{

  FILE *PTRARQ;
  int VALOR;
  char RESP;
  size_t TAMANHO;
  unsigned long POS, NR_REGS;

  PTRARQ = fopen("ARQBIN06.BIN", "rb+");

  printf("Pesquisa direta e escrita de valores\n");

  fseek(PTRARQ, 0, SEEK_END);
  TAMANHO = ftell(PTRARQ);
  NR_REGS = TAMANHO / 4;

  do
    {
      printf("\nInforme a posicao a ser alterada: ");
      scanf("%i", &POS);
      clrbufkey();

      if (POS >= 1 && POS <= NR_REGS)
        {
          printf("\nEntre o novo valor: ");
          scanf("%i", &VALOR);
          clrbufkey();
          fseek(PTRARQ, (POS - 1) * sizeof(int), SEEK_SET);
          fwrite(&VALOR, sizeof(int), 1, PTRARQ);
          printf("\nValor %i na posicao %i.\n", VALOR, POS);
        }
      else
        printf("\nPosicao informada - invalida.\n");

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
