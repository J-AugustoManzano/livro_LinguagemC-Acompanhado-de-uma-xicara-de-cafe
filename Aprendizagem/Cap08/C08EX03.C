// C08EX03.C

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{

  char PAUSA;

  char PARTE1[] = "Livro de ";
  char PARTE2[] = "Linguagem C.\n";
  char FRASE[23];

  strcpy(FRASE, PARTE1);
  strcat(FRASE, PARTE2);

  printf(FRASE);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
