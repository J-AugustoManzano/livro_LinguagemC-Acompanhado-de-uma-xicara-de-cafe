// C12EX36.C

#include <stdio.h>

int main(void)
{

  char CADEIA[] = "Livro de linguagem C.";
  char PAUSA;

  printf("%s ", CADEIA);
  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
