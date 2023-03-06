// C11EX05A.C
// Cross-platform

#include <stdio.h>
#include <stdlib.h>

#if defined _WIN64 || defined _WIN32
  void clrscr(void)
  {
    system("cls");
  }
#else
  void clrscr(void)
  {
    system("clear");
  }
#endif

int main(void)
{

  char PAUSA;

  clrscr();
  printf("Teste 1\n");
  clrscr();
  printf("Teste 2\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  scanf("%c", &PAUSA);

  return 0;
}
