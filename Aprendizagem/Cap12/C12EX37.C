// C12EX37.C

#include <stdio.h>

int main(void)
{

  const char *CADEIA = "Livro de linguagem C.";
  char PAUSA;

  printf("%s ", CADEIA);
  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
