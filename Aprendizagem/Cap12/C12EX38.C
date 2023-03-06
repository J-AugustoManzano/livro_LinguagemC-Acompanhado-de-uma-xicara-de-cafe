// C12EX38.C

#include <stdio.h>

int main(void)
{

  char CADEIA[] = "Teste 1 de escrita de string.";
  char PAUSA;

  printf("%s ", CADEIA);
  printf("\n");

  CADEIA[6] = 'X';

  printf("%s ", CADEIA);
  printf("\n");

  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
