// C08EX06.C

#include <stdio.h>
#include <string.h>

int main(void)
{

  char PAUSA;

  char FRASE[] = "Livro de Linguagem C.\n";
  char *OCORRENCIA = strrchr(FRASE, 'i');

  printf(OCORRENCIA);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
