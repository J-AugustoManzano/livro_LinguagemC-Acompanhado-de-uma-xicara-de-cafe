// C12EX19.C

#include <stdio.h>
#include <string.h>
#include "stdgen.h"

int main(void)
{

  char CADEIA[] = "Livro de linguagem C.";
  char *POSICAO;

  POSICAO = (char *) strtok(CADEIA, " ");
  printf("%s\n", POSICAO);

  do
    {
       POSICAO = (char *) strtok('\0', " ");
       if (POSICAO)
         printf("%s\n", POSICAO);
    }
  while (POSICAO);

  printf("\n");
  pause(NULL);

  return 0;
}
