// C12EX14.C

#include <stdio.h>
#include "stdgen.h"

int main(void)
{

  FILE *PTRARQ;

  PTRARQ = fopen("ARQBIN02.BIN", "rb");

  if (PTRARQ == NULL)
    {
      puts("O arquivo nao pode ser aberto");
      puts("***  arquivo inexistente  ***");
    }
  else
    puts("*** O arquivo foi aberto ***");

  fflush(stdout);
  fclose(PTRARQ);

  printf("\n");
  pause(NULL);

  return 0;
}
