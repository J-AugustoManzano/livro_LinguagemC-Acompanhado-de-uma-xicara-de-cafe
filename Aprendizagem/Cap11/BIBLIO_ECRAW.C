// BIBLIO_ECRAW.C
// Arquivo com codigo das funcoes da biblioteca ECRAW.h

#include <stdio.h>
#include <windows.h>
#include "ecraw.h"

// Limpar tela

void clrscr(void)
{
  HANDLE TELA;
  DWORD ESCRITA = 0;
  COORD POS;
  TELA = GetStdHandle(STD_OUTPUT_HANDLE);
  POS.X = 0;
  POS.Y = 0;
  FillConsoleOutputCharacter(TELA, 32, 80 * 25, POS, &ESCRITA);
}

// Posicionar cursor

void position(int LINHA, int COLUNA)
{
  HANDLE TELA;
  COORD POS;
  TELA = GetStdHandle(STD_OUTPUT_HANDLE);
  POS.X = COLUNA - 1;
  POS.Y = LINHA - 1;
  SetConsoleCursorPosition(TELA, POS);
}

// Limpar linha

void clearline(void)
{
  HANDLE TELA;
  COORD POS;
  CONSOLE_SCREEN_BUFFER_INFO VIDEO;
  DWORD ESCRITA = 0;
  TELA = GetStdHandle(STD_OUTPUT_HANDLE);
  GetConsoleScreenBufferInfo(TELA, &VIDEO);
  POS.Y = VIDEO.dwCursorPosition.Y;
  POS.X = VIDEO.dwCursorPosition.X;
  FillConsoleOutputCharacter(TELA, 32, 80 - POS.X , POS, &ESCRITA);
}

// Cor de texto e fundo

void color(int COR_FUNDO, int COR_TEXTO)
{
  HANDLE TELA;
  int COR;
  TELA = GetStdHandle(STD_OUTPUT_HANDLE);

  if (COR_FUNDO < 0 && COR_FUNDO > 15 && COR_TEXTO < 0
    && COR_TEXTO > 15)
    COR = 15;
  else
    COR = COR_TEXTO - 1 + 16 * COR_FUNDO + 1;
  SetConsoleTextAttribute(TELA, COR);
}

// Pausa com mensagem

void pause(void)
{
  char PAUSA;
  printf("\n");
  printf("Tecle <Enter> para acessar o menu. ");
  scanf("%c", &PAUSA);
}

// Limpar buffer de teclado

void clrbufkey(void)
{
  while ((getchar() != '\n') && (!EOF));
}
