// C12EX15.C

#include <stdio.h>
#include <stdbool.h>
#include "stdgen.h"

bool fcreate(const char *ARQUIVO, const char *TIPO)
{

  FILE *PTRARQ;

  PTRARQ = fopen(ARQUIVO, TIPO);

  if (PTRARQ == NULL)
    return false;

  fflush(stdout);
  fclose(PTRARQ);

  return true;
}

int main(void)
{

  if (fcreate("ARQBIN03.BIN", "rb") == true)
    {
      puts("O arquivo nao pode ser criado");
      puts("***   arquivo existente   ***");
    }
  else
    {
      FILE *PTRARQ;
      PTRARQ = fopen("ARQBIN03.BIN", "wb");
      fclose(PTRARQ);
      puts("O arquivo foi criado.");
    }

  printf("\n");
  pause(NULL);

  return 0;
}
