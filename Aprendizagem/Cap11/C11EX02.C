// C11EX02.C

#include <stdio.h>
#include "ecra.h"

float R, A, B;

void entrada(void)
{
  position( 5, 1); printf("Entre um valor para A: ");
  scanf("%f", &A); clrbufkey();
  position( 6, 1); printf("Entre um valor para B: ");
  scanf("%f", &B); clrbufkey();
}

void saida(void)
{
  position( 9, 1); printf("\nO resultado entre A e B = %6.2f\n", R);
  position(11, 1);
  pause();
}

float calculo(float X, float Y, char OPERADOR)
{
  float RESULTADO;
  switch (OPERADOR)
    {
      case '+' : RESULTADO = X + Y; break;
      case '-' : RESULTADO = X - Y; break;
      case '*' : RESULTADO = X * Y; break;
      case '/' : RESULTADO = X / Y; break;
    }
  return RESULTADO;
}

void rotadicao(void)
{
  clrscr();
  position( 1, 1); printf("Rotina de Soma");
  position( 2, 1); printf("--------------");
  entrada();
  R = calculo(A, B, '+');
  saida();
}

void rotsubtracao(void)
{
  clrscr();
  position( 1, 1); printf("Rotina de Subtracao");
  position( 2, 1); printf("-------------------");
  entrada();
  R = calculo(A, B, '-');
  saida();
}

void rotmultiplicacao(void)
{
  clrscr();
  position( 1, 1); printf("Rotina de Multiplicacao");
  position( 2, 1); printf("-----------------------");
  entrada();
  R = calculo(A, B, '*');
  saida();
}

void rotdivisao(void)
{
  clrscr();
  position( 1, 1); printf("Rotina de Divisao");
  position( 2, 1); printf("-----------------");
  entrada();
  if (B == 0)
    {
      position( 9, 1); printf("Erro de divisao");
      position(11, 1);
      pause();
    }
  else
    {
      R = calculo(A, B, '/');
      saida();
    }
}

int main(void)
{
  int OPCAO = 0;
  while (OPCAO != 5)
    {
      clrscr();
      position( 1, 1); printf("Menu Principal");
      position( 2, 1); printf("--------------");
      position( 4, 1); printf("1 - Adicao");
      position( 5, 1); printf("2 - Subtracao");
      position( 6, 1); printf("3 - Multiplicacao");
      position( 7, 1); printf("4 - Divisao");
      position( 8, 1); printf("5 - Fim de Programa");
      position(10, 1); printf("Escolha uma opcao: ");
      scanf("%d", &OPCAO); clrbufkey();
      if (OPCAO != 5)
        {
          switch (OPCAO)
            {
              case 1  : rotadicao();        break;
              case 2  : rotsubtracao();     break;
              case 3  : rotmultiplicacao(); break;
              case 4  : rotdivisao();       break;
              default : printf("\nOpcao invalida.\n");
                        pause();
                        break;
            }
        }
    }
  return 0;
}
