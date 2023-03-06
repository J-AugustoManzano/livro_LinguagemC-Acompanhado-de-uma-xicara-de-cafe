// C10EX20.C

#include <stdio.h>

struct REG_ALUNO
  {
    int   MATRICULA;
    char  NOME[51];
    float NOTAS[4];
  } ALUNO;

void clrbufkey(void)
{
  while ((getchar() != '\n') && (!EOF));
}

void escreve_na_estrutura(ALUNO *PESSOA)
{
  int I;
  printf("\nDados do Aluno\n");
  printf("Matricula ...: ");
  scanf("%d", &PESSOA->MATRICULA);
  clrbufkey();
  printf("Nome ........: ");
  scanf("%[^\n]", & PESSOA->NOME);
  clrbufkey();
  for (I = 0; I <= 3; I++)
    {
      printf("Nota %i .....: ", I);
      scanf("%f", &PESSOA->NOTAS[I]);
      clrbufkey();
    }
}

int main(void)
{

  char PAUSA;

  ALUNO ESTUDANTE;
  escreve_na_estrutura(&ESTUDANTE);
  le_da_estrutura(ESTUDANTE);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
