// C11EX03.CPP

#include <stdio.h>
#include <windows.h>

// Cores de fundo e texto

#define black     0 // Preto
#define blue      1 // Azul
#define green     2 // Verde
#define cyan      3 // Ciano
#define red       4 // Vermelho
#define magenta   5 // Magenta
#define brown     6 // Marrom
#define lgray     7 // Cinza claro
#define dgray     8 // Cinza escuro
#define lblue     9 // Azul claro
#define lgreen   10 // Verde claro
#define lcyan    11 // Ciano claro
#define lred     12 // Vermelho claro
#define lmagenta 13 // Magenta claro
#define yellow   14 // Amarelo
#define white    15 // Branco

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

int main(void)
{
  char PAUSA;

  clrscr();
  printf("Teste de padrao de Cores com Codigo Numerico\n");
  printf("\n");

  color(1,14);
  printf("Fundo: Azul // Texto: Amarelo");
  printf("\n\n");

  color(1,7);
  printf("Fundo: Azul // Texto: Cinza claro");
  printf("\n\n");

  color(4,14);
  printf("Fundo: Vermelho // Texto: Amarelo");
  printf("\n\n");

  color(0,2);
  printf("Fundo: Preto // Texto: Verde");
  printf("\n\n");

  color(7,12);
  printf("Fundo: Cinza claro // Texto: Vermelho claro");
  printf("\n\n");

  color(brown,white);
  printf("Fundo: Marrom // Texto: Branco");
  printf("\n\n");

  color(0,7); // Volta fundo e texto para padrao
  printf("\n\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
