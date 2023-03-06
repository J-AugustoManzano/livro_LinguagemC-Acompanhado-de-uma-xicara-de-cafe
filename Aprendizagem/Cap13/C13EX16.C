// C13EX16.C

#include <stdio.h>
#include <stdbool.h>
#include "stdgen.h"

int main(void)
{

  FILE *PTRARQ;

  PTRARQ = fopen("ARQBIN04.BIN", "rb");

  if (PTRARQ == NULL)
    perror("Erro ocorrido");
  clearerr(PTRARQ);

  fflush(stdout);
  fclose(PTRARQ);

  printf("\n");
  pause(NULL);

  return 0;
}
