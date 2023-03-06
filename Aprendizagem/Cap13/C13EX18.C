// C13EX18.C

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include "stdgen.h"

int main(void)
{

  FILE *PTRARQ;

  PTRARQ = fopen("ARQBIN04.BIN", "rb");

  if (PTRARQ == NULL)
    printf("Erro: %s\n", strerror(errno));
  clearerr(PTRARQ);

  fflush(stdout);
  fclose(PTRARQ);

  printf("\n");
  pause(NULL);

  return 0;
}
