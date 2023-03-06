// C12EX10.C

#include <stdio.h>
#include "stdgen.h"

int main(void)
{

  FILE *PTRARQ;
  char FRASE[81];

  PTRARQ = fopen("ARQTXT05.TEX", "r");

  while (fgets(FRASE, sizeof(FRASE), PTRARQ) != NULL)
    printf("%s", FRASE);

  if (feof(PTRARQ))
    puts("\nFim de arquivo atingido.");

  fflush(stdout);
  fclose(PTRARQ);

  printf("\n");
  pause(NULL);

  return 0;
}
