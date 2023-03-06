// C10EX20.C

#include <stdio.h>

typedef struct
  {
    int   MATRICULA;
    char  NOME[51];
    float NOTAS[4];
  } ALUNO;

void clrbufkey(void)
{
  while ((getchar() != '\n') && (!EOF));
}

void le_da_estrutura(ALUNO *PESSOA)
{
  int I;
  printf("Dados do Aluno\n");
  printf("Matricula ...: %d\n", PESSOA->MATRICULA);
  printf("Nome ........: %s\n", PESSOA->NOME);
  for (I = 0; I <= 3; I++)
    printf("Nota %i ......: %5.2f\n", I + 1, PESSOA->NOTAS[I]);
}

void ecreve_na_estrutura(ALUNO *PESSOA)
{
  int I;
  printf("Dados do Aluno\n");
  printf("Matricula ...: ");
  scanf("%d", &PESSOA->MATRICULA);
  clrbufkey();
  printf("Nome ........: ");
  scanf("%[^\n]", &PESSOA->NOME);
  clrbufkey();
  for (I = 0; I <= 3; I++)
    {
      printf("Nota %i ......: ", I + 1);
      scanf("%f", &PESSOA->NOTAS[I]);
      clrbufkey();
    }
}

int main(void)
{

  char PAUSA;

  ALUNO ESTUDANTE;
  ecreve_na_estrutura(&ESTUDANTE);
  printf("\n");
  le_da_estrutura(&ESTUDANTE);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
