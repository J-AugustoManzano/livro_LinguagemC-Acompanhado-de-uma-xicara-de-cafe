// BIBLIO_ECRA.C (suporte para C11EX02.C)
// Arquivo com codigo das funcoes da biblioteca ecra.h

#include <stdio.h>

// Limpar tela

void clrscr(void)
{
  printf("\033[2J");
}

// Video normal

void normal(void)
{
  printf("\033[0m");
}

// Video com baixa intensidade de brilho

void lower(void)
{
  printf("\033[2m");
}

// Video com alta intensidade de brilho

void high(void)
{
  printf("\033[1m");
}

// Posicionar cursor

void position(int LINHA, int COLUNA)
{
  if (COLUNA >= 1 && COLUNA <= 80 && LINHA >= 1 && LINHA <= 24)
    printf("\033[%i;%iH", LINHA, COLUNA);
}

// Limpar a linha de texto a partir do cursor

void clrscrline(void)
{
  printf("\033[K");
}

// Cor de fundo

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

// Cor de texto

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

// Cor de fundo e texto

void color(int COR_FUNDO, int COR_TEXTO)
{
  if (COR_FUNDO < 0 && COR_FUNDO > 7 && COR_TEXTO < 0
    && COR_TEXTO > 15)
    {
      COR_FUNDO = 0;
      COR_TEXTO = 7;
    }
  normal();
  background(COR_FUNDO);
  text(COR_TEXTO);
}

// Pausa com mensagem

void pause(void)
{
  char PAUSA;
  printf("\n");
  printf("Tecle <Enter> para acessar o menu. ");
  PAUSA = getchar();
}

// Limpar buffer de teclado

void clrbufkey(void)
{
  while ((getchar() != '\n') && (!EOF));
}
