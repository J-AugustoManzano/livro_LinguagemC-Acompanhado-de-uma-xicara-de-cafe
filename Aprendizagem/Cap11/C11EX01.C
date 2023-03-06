// C11EX01.C

#include <stdio.h>

// Constantes para as cores de texto e fundo

#define black     0 // Preto
#define blue      1 // Azul
#define green     2 // Verde
#define cyan      3 // Ciano
#define red       4 // Vermelho
#define magenta   5 // Magenta
#define brown     6 // Marrom
#define lgray     7 // Cinza claro

// Constantes para as cores de texto

#define dgray     8 // Cinza escuro
#define lblue     9 // Azul claro
#define lgreen   10 // Verde claro
#define lcyan    11 // Ciano claro
#define lred     12 // Vermelho claro
#define lmagenta 13 // Magenta claro
#define yellow   14 // Amarelo
#define white    15 // Branco

void normal(void)
{
  printf("\033[0m");
}

void clrscr(void)
{
  printf("\033[2J");
}

void background(int COR)
{
  switch (COR)
    {
      case 0: printf("\033[40m"); break; // Preto
      case 1: printf("\033[44m"); break; // Azul
      case 2: printf("\033[42m"); break; // Verde
      case 3: printf("\033[46m"); break; // Ciano
      case 4: printf("\033[41m"); break; // Vermelho
      case 5: printf("\033[45m"); break; // Magenta
      case 6: printf("\033[43m"); break; // Marrom
      case 7: printf("\033[47m"); break; // Cinza claro
    }
}

void text(int COR)
{
  switch (COR)
    {
      case   0: printf("\033[30m");   break; // Preto
      case   1: printf("\033[34m");   break; // Azul
      case   2: printf("\033[32m");   break; // Verde
      case   3: printf("\033[36m");   break; // Ciano
      case   4: printf("\033[31m");   break; // Vermelho
      case   5: printf("\033[35m");   break; // Magenta
      case   6: printf("\033[33m");   break; // Marrom
      case   7: printf("\033[37m");   break; // Cinza claro
      case   8: printf("\033[1;30m"); break; // Cinza escuro
      case   9: printf("\033[1;34m"); break; // Azul claro
      case  10: printf("\033[1;32m"); break; // Verde claro
      case  11: printf("\033[1;36m"); break; // Ciano claro
      case  12: printf("\033[1;31m"); break; // Vermelho claro
      case  13: printf("\033[1;35m"); break; // Magenta claro
      case  14: printf("\033[1;33m"); break; // Amarelo
      case  15: printf("\033[1;37m"); break; // Branco
    }
}

void color(int COR_FUNDO, int COR_TEXTO)
{
  if (COR_FUNDO < 0 && COR_FUNDO > 7 && COR_TEXTO < 0
    && COR_TEXTO > 15)
    {
      COR_FUNDO = 0;
      COR_TEXTO = 7;
    }
  background(COR_FUNDO);
  text(COR_TEXTO);
}

int main(void)
{

  char PAUSA;

  clrscr();
  printf("Teste de padrao de Cores com Codigo Numerico");
  normal();
  printf("\n\n");

  color(1,14);
  printf("Fundo: Azul // Texto: Amarelo");
  normal();
  printf("\n\n");

  color(1,7);
  printf("Fundo: Azul // Texto: Cinza claro");
  normal();
  printf("\n\n");

  color(4,14);
  printf("Fundo: Vermelho // Texto: Amarelo");
  normal();
  printf("\n\n");

  color(0,2);
  printf("Fundo: Preto // Texto: Verde");
  normal();
  printf("\n\n");

  color(7,12);
  printf("Fundo: Cinza claro // Texto: Vermelho claro");
  normal();
  printf("\n\n");

  color(brown,white);
  printf("Fundo: Marrom // Texto: Branco");
  normal();
  printf("\n\n");

  printf("Tecle <Enter> para encerrar... ");
  scanf("%c", &PAUSA);

  return 0;
}
