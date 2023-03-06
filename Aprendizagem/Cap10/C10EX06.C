// C10EX06.C
// Programa Calculadora

#include <stdio.h>

float R, A, B;

void pause(void);
void clrbufkey(void);
void rotadicao(void);
void rotsubtracao(void);
void rotmultiplicacao(void);
void rotdivisao(void);

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

void rotadicao(void)
{
  printf("\n\nRotina de Soma\n");
  printf("--------------\n\n");
  printf("Entre um valor para A: ");
  scanf("%f", &A); clrbufkey();
  printf("Entre um valor para B: ");
  scanf("%f", &B); clrbufkey();
  R = A + B;
  printf("\nO resultado entre A e B = %6.2f\n", R);
  pause();
}

void rotsubtracao(void)
{
  printf("\n\nRotina de Subtracao\n");
  printf("-------------------\n\n");
  printf("Entre um valor para A: ");
  scanf("%f", &A); clrbufkey();
  printf("Entre um valor para B: ");
  scanf("%f", &B); clrbufkey();
  R = A - B;
  printf("\nO resultado entre A e B = %6.2f\n", R);
  pause();
}

void rotmultiplicacao(void)
{
  printf("\n\nRotina de Multiplicacao\n");
  printf("-----------------------\n\n");
  printf("Entre um valor para A: ");
  scanf("%f", &A); clrbufkey();
  printf("Entre um valor para B: ");
  scanf("%f", &B); clrbufkey();
  R = A * B;
  printf("\nO resultado entre A e B = %6.2f\n", R);
  pause();
}

void rotdivisao(void)
{
  printf("\n\nRotina de Divisao\n");
  printf("-----------------\n\n");
  printf("Entre um valor para A: ");
  scanf("%f", &A); clrbufkey();
  printf("Entre um valor para B: ");
  scanf("%f", &B); clrbufkey();
  if (B == 0)
    printf("\nErro de divisao\n");
  else
    {
      R = A / B;
      printf("\nO resultado entre A e B = %6.2f\n", R);
    }
  pause();
}

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
