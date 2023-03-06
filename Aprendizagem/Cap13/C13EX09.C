// C12EX09.C

#include <stdio.h>
#include <ctype.h>
#include "stdgen.h"

int main(void)
{

  FILE *PTRARQ;
  char RESP, FRASE[81];
  RESP = 'S';

  PTRARQ = fopen("ARQTXT05.TEX", "a");

  while (toupper(RESP) == 'S')
    {
      printf("Informe uma frase qualquer: ");
      fgets(FRASE, sizeof(FRASE), stdin);
      fputs(FRASE, PTRARQ);
      printf("\nDeseja continuar (S/N)? ");
      scanf("%c", &RESP);
      clrbufkey();
      printf("\n");
    }

  fflush(stdout);
  fclose(PTRARQ);

  printf("\n");
  pause(NULL);

  return 0;
}
