// C08EX07.C

#include <stdio.h>
#include <string.h>

int main(void)
{

  char PAUSA;

  char FRASE[] = "Foi encontrado o livro azul.\n";
  char *OCORRENCIA = strstr(FRASE, "vro");

  printf(OCORRENCIA);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
