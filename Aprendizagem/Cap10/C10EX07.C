// C10EX07.C
// Programa Calculadora

#include <stdio.h>

float R, A, B;

void clrbufkey(void)
{
  while ((getchar() != '\n') && (!EOF));
}

void pause(void)
{
  char PAUSA;
  printf("\n");
  printf("Tecle <Enter> para acessar o menu. ");
  PAUSA = getchar();
  printf("\n");
}

void entrada(void)
{
  printf("Entre um valor para A: ");
  scanf("%f", &A); clrbufkey();
  printf("Entre um valor para B: ");
  scanf("%f", &B); clrbufkey();
}

void saida(void)
{
  printf("\nO resultado entre A e B = %6.2f\n", R);
  pause();
}

void rotadicao(void)
{
  printf("\n\nRotina de Soma\n");
  printf("--------------\n\n");
  entrada();
  R = A + B;
  saida();
}

void rotsubtracao(void)
{
  printf("\n\nRotina de Subtracao\n");
  printf("-------------------\n\n");
  entrada();
  R = A - B;
  saida();
}

void rotmultiplicacao(void)
{
  printf("\n\nRotina de Multiplicacao\n");
  printf("-----------------------\n\n");
  entrada();
  R = A * B;
  saida();
}

void rotdivisao(void)
{
  printf("\n\nRotina de Divisao\n");
  printf("-----------------\n\n");
  entrada();
  if (B == 0)
    {
      printf("\nErro de divisao\n");
      pause();
    }
  else
    {
      R = A / B;
      saida();
    }
}

int main(void)
{
  short OPCAO = 0;
  while (OPCAO != 5)
    {
      printf("Menu Principal\n");
      printf("--------------\n\n");
      printf("1 - Adicao\n");
      printf("2 - Subtracao\n");
      printf("3 - Multiplicacao\n");
      printf("4 - Divisao\n");
      printf("5 - Fim de Programa\n\n");
      printf("Escolha uma opcao: ");
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
                        printf("\n");
                        break;
            }
        }
    }
  return 0;
}
