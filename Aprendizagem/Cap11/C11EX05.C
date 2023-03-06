// C11EX05.C
// Cross-platform

#include <stdio.h>

#if defined _WIN32 || defined _WIN64 // Windows 32 ou 64 bits
  #include <windows.h>
#endif

#if defined _WIN64 || defined _WIN32
  void clrscr(void)
  {
    HANDLE TELA;
    DWORD ESCRITA = 0;
    COORD POS;
    TELA = GetStdHandle(STD_OUTPUT_HANDLE);
    POS.X = 0;
    POS.Y = 0;
    FillConsoleOutputCharacter(TELA, 32, 80 * 25, POS, &ESCRITA);
    return;
  }
#else
  void clrscr(void)
  {
    printf("\033[2J");
    return;
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
