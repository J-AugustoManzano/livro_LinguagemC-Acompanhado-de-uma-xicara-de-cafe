// C08EX05.C

#include <stdio.h>
#include <string.h>

int main(void)
{

  char PAUSA;

  char FRASE[] = "Livro de Linguagem C.";
  char *OCORRENCIA = strchr(FRASE, 'e');

  printf(OCORRENCIA);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
