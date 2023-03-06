// C10EX17.C

#include <stdio.h>

void pause(void)
{
  char PAUSA;
  printf("\n");
  printf("Tecle <Enter> para acessar o menu. ");
  PAUSA = getchar();
  printf("\n");
}

void clrbufkey(void)
{
  while ((getchar() != '\n') && (!EOF));
}

int OPCAO;
float R, A, B;

// Trecho de sub-rotinas de entrada e saida

void entrada(void)
{
  printf("\n");
  printf("Entre o 1o. valor: ");
  scanf("%f", &A); clrbufkey();
  printf("Entre o 2o. valor: ");
  scanf("%f", &B); clrbufkey();
}

void saida(void)
{
  printf("\n");
  printf("O resultado da operacao equivale a: %6.2f.\n\n", R);
}

// Trecho com funcao para o calculo das operacoes

float calculo(float X, float Y, char OPERADOR)
{
  float R;
  switch (OPERADOR)
    {
      case '+' : R = X + Y; break;
      case '-' : R = X - Y; break;
      case '*' : R = X * Y; break;
      case '/' : R = X / Y; break;
    }
  return R;
}

// Trecho com sub-rotina geral

void rotcalc(char OPERACAO)
{
  printf("\n");
  switch (OPERACAO)
    {
      case '+' : printf("Rotina de Adicao\n");        break;
      case '-' : printf("Rotina de Subtracao\n");     break;
      case '*' : printf("Rotina de Multiplicacao\n"); break;
      case '/' : printf("Rotina de Divisao\n");       break;
    }
  entrada();
  if (OPERACAO == '/')
    {
      if (B == 0)
        {
          printf("\n");
          printf("O resultado da operacao equivale a: ERRO.\n\n");
        }
      else
        {
          R = calculo(A, B, '/');
          saida();
        }
    }
  if (!(OPERACAO == '/'))
    {
      R = calculo(A, B, OPERACAO);
      saida();
    }
}

// Trecho principal do programa

int main(void)
{
  OPCAO = 0;
  while (OPCAO != 5)
    {
      printf("Programa Calculadora\n");
      printf("\n");
      printf("1 - Adicao\n");
      printf("2 - Subtracao\n");
      printf("3 - Multiplicacao\n");
      printf("4 - Divisao\n");
      printf("5 - Fim de Programa\n");
      printf("\n");
      printf("Escolha uma opcao: ");
      scanf("%d", &OPCAO); clrbufkey();
      if (OPCAO != 5)
        switch (OPCAO)
          {
            case 1  : rotcalc('+'); break;
            case 2  : rotcalc('-'); break;
            case 3  : rotcalc('*'); break;
            case 4  : rotcalc('/'); break;
            default : printf("\nOpcao invalida.\n");
                      pause();
                      printf("\n");
                      break;
          }
    }
  return 0;
}
