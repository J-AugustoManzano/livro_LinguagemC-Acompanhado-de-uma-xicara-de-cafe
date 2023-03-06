// C08EX04.C

#include <stdio.h>
#include <string.h>

int main(void)
{

  char PAUSA;

  char FRASE[] = "Livro de Linguagem C.";

  printf("Possui %d caracteres.\n", strlen(FRASE));

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
